/*
 * XREFs of KseDriverUnloadImage @ 0x140600748
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolFreePaged @ 0x140161A40 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140161AC4 (KsepLogInfo.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     RtlAssert @ 0x140288F50 (RtlAssert.c)
 *     KsepDbFreeDriverShims @ 0x1405FC854 (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x1405FE494 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdi
  __int64 v8; // rbp
  unsigned int *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD); // rax
  __int64 v13; // rbp
  __int64 *v14; // rsi
  __int64 v15; // rax
  int v16; // eax
  int v17; // ecx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rbx
  void *v26; // rcx
  __int64 v27; // rax
  void *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_1403CDEE4 != 2 )
    return 3221225659LL;
  if ( (KseEngine & 1) != 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 48);
  LOBYTE(v3) = MmIsSessionAddress(v2);
  if ( v3 == 1 )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed((__int64)&KseEngine, v2, &v30) && v30 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CDF10, 0LL);
    v7 = (_QWORD *)v30;
    v8 = 0LL;
    v9 = (unsigned int *)(v30 + 24);
    v10 = *(_DWORD *)(v30 + 24);
    if ( v10 )
    {
      do
      {
        v11 = *(_QWORD *)(v7[4] + 80 * v8 + 72);
        if ( (*(_DWORD *)(v11 + 28) & 4) == 0 )
        {
          v12 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(v11 + 16) + 32LL);
          if ( v12 )
            v12(*(_QWORD *)(a1 + 48));
        }
        v10 = *v9;
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *v9 );
    }
    v13 = 0LL;
    if ( v10 )
    {
      v6 = 1398LL;
      do
      {
        v14 = *(__int64 **)(v7[4] + 80 * v13 + 72);
        if ( !*((_DWORD *)v14 + 6) )
        {
          v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_1403AD3A4[2 * v15] = -1073740768;
          KsepHistoryErrors[2 * v15] = 460150;
          if ( (KsepDebugFlag & 4) != 0 )
          {
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x576u, 0LL);
            v6 = 1398LL;
          }
        }
        v16 = *((_DWORD *)v14 + 7);
        v17 = *((_DWORD *)v14 + 6) - 1;
        *((_DWORD *)v14 + 6) = v17;
        if ( (v16 & 4) != 0 && !v17 )
        {
          v18 = (__int64 *)*v14;
          if ( *(__int64 **)(*v14 + 8) != v14 || (v19 = (__int64 **)v14[1], *v19 != v14) )
            __fastfail(3u);
          *v19 = v18;
          v18[1] = (__int64)v19;
        }
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < *v9 );
      v7 = (_QWORD *)v30;
    }
    v20 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v21 = (_QWORD *)v7[1], (_QWORD *)*v21 != v7) )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, (__int64)v21, v6, 7LL);
    KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
    KeLeaveCriticalRegion();
    v22 = *v9;
    v23 = 0LL;
    if ( *v9 )
    {
      v24 = v30;
      do
      {
        v25 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 80 * v23 + 72);
        v26 = *(void **)(v25 + 32);
        if ( v26 )
          ObfDereferenceObject(v26);
        if ( (*(_DWORD *)(v25 + 28) & 4) != 0 && !*(_DWORD *)(v25 + 24) )
        {
          KsepPoolFreePaged((void *)v25);
          v27 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v27]) = 0;
          LODWORD(KsepHistoryMessages[v27]) = 460207;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(5LL, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v25);
          KsepLogInfo(
            5LL,
            (__int64)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
            v25);
        }
        v22 = *v9;
        v23 = (unsigned int)(v23 + 1);
      }
      while ( (unsigned int)v23 < *v9 );
    }
    v28 = (void *)v30;
    KsepDbFreeDriverShims(*(_QWORD **)(v30 + 32), v22);
    KsepPoolFreePaged(v28);
    v29 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v29]) = 0;
    LODWORD(KsepHistoryMessages[v29]) = 460215;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(5LL, "KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5LL, (__int64)"KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
