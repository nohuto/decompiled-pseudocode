/*
 * XREFs of KseUnregisterShim @ 0x1407453B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolFreePaged @ 0x140161A40 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140161AC4 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14024D344 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x14062344C (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseUnregisterShim(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r14d
  __int64 v5; // r8
  unsigned int v6; // ebp
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rcx
  void **v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_1403CDEE4 != 2 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CDF10, 0LL);
  if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, *(_QWORD **)(a1 + 8), v5, &v16) )
  {
    if ( *((_DWORD *)v16 + 6) )
    {
      v6 = -1073741790;
      v7 = v16;
      v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_1403AD3A4[2 * v8] = -1073741790;
      KsepHistoryErrors[2 * v8] = 131453;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(
          3LL,
          "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
          **(_DWORD **)(a1 + 8),
          (_DWORD)v7);
      KsepLogError(
        3,
        "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
        **(_DWORD **)(a1 + 8),
        (_DWORD)v7);
      *((_DWORD *)v7 + 7) |= 4u;
    }
    else
    {
      v12 = (_QWORD *)*v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v13 = (void **)v16[1], *v13 != v16) )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      v4 = 1;
      v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v14]) = 0;
      LODWORD(KsepHistoryMessages[v14]) = 131470;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(3LL, "KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      KsepLogInfo(3LL, (__int64)"KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741772;
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_1403AD3A4[2 * v15] = -1073741772;
    KsepHistoryErrors[2 * v15] = 131482;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(3LL, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
    KsepLogError(3, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v9, v10, v11);
  KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v4 )
    KsepPoolFreePaged(v16);
  return v6;
}
