/*
 * XREFs of KseDriverUnloadImage @ 0x14059E4D8
 * Callers:
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x1400F9FD8 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x1400FA05C (KsepLogInfo.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1402538E0 (RtlAssert.c)
 *     KsepIsModuleShimmed @ 0x140546954 (KsepIsModuleShimmed.c)
 *     KsepDbFreeDriverShims @ 0x140546CFC (KsepDbFreeDriverShims.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  unsigned __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  unsigned int *i; // r14
  __int64 v8; // rdx
  void (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // rbp
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rbx
  void *v20; // rcx
  __int64 v21; // rax
  void *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140387F84 != 2 )
    return 3221225659LL;
  if ( (KseEngine & 1) != 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 48);
  if ( MmIsSessionAddress(v2) )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed((__int64)&KseEngine, v2, &v24) && v24 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140387FB0, 0LL);
    v5 = (_QWORD *)v24;
    v6 = 0LL;
    for ( i = (unsigned int *)(v24 + 24); (unsigned int)v6 < *i; v6 = (unsigned int)(v6 + 1) )
    {
      v8 = *(_QWORD *)(v5[4] + 80 * v6 + 72);
      if ( (*(_DWORD *)(v8 + 28) & 4) == 0 )
      {
        v9 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(v8 + 16) + 32LL);
        if ( v9 )
          v9(*(_QWORD *)(a1 + 48));
      }
    }
    v10 = 0LL;
    if ( *i )
    {
      do
      {
        v11 = *(__int64 **)(v5[4] + 80 * v10 + 72);
        if ( !*((_DWORD *)v11 + 6) )
        {
          v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_14036A2C4[2 * v12] = -1073740768;
          KsepHistoryErrors[2 * v12] = 460150;
          if ( (KsepDebugFlag & 4) != 0 )
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x576u, 0LL);
        }
        --*((_DWORD *)v11 + 6);
        if ( (*((_DWORD *)v11 + 7) & 4) != 0 && !*((_DWORD *)v11 + 6) )
        {
          v13 = (__int64 *)*v11;
          if ( *(__int64 **)(*v11 + 8) != v11 || (v14 = (__int64 **)v11[1], *v14 != v11) )
            __fastfail(3u);
          *v14 = v13;
          v13[1] = (__int64)v14;
        }
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < *i );
      v5 = (_QWORD *)v24;
    }
    v15 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v16 = (_QWORD *)v5[1], (_QWORD *)*v16 != v5) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140387FB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140387FB0);
    KeAbPostRelease((ULONG_PTR)&qword_140387FB0);
    KeLeaveCriticalRegion();
    v17 = 0LL;
    if ( *i )
    {
      v18 = v24;
      do
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 80 * v17 + 72);
        v20 = *(void **)(v19 + 32);
        if ( v20 )
          ObfDereferenceObject(v20);
        if ( (*(_DWORD *)(v19 + 28) & 4) != 0 && !*(_DWORD *)(v19 + 24) )
        {
          KsepPoolFreePaged((void *)v19);
          v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v21]) = 0;
          LODWORD(KsepHistoryMessages[v21]) = 460207;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(5LL, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v19);
          KsepLogInfo(
            5LL,
            (__int64)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
            v19);
        }
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < *i );
    }
    v22 = (void *)v24;
    KsepDbFreeDriverShims(*(_QWORD **)(v24 + 32), *i);
    KsepPoolFreePaged(v22);
    v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v23]) = 0;
    LODWORD(KsepHistoryMessages[v23]) = 460215;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(5LL, "KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5LL, (__int64)"KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
