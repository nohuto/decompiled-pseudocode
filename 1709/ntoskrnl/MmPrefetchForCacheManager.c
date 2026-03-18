/*
 * XREFs of MmPrefetchForCacheManager @ 0x140492FC0
 * Callers:
 *     CcPerformReadAhead @ 0x140020ED4 (CcPerformReadAhead.c)
 *     CcFetchDataForRead @ 0x14007AE80 (CcFetchDataForRead.c)
 *     CcAsyncReadPrefetch @ 0x1400BBA90 (CcAsyncReadPrefetch.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x140007EDC (MiReturnCcAccessLog.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiGetCcAccessLog @ 0x140446910 (MiGetCcAccessLog.c)
 *     MiPfExecuteReadList @ 0x140492E94 (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x1404D1DC8 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        int a2,
        void *a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v10; // rax
  __int64 v12; // r15
  unsigned int v13; // esi
  PVOID CcAccessLog; // rdi
  _QWORD *v15; // rbx
  _QWORD *v16; // rsi
  __int64 result; // rax
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = a3;
  CurrentThread = KeGetCurrentThread();
  v10 = *(__int64 **)(a1 + 40);
  v12 = *v10;
  if ( (*(_DWORD *)(*v10 + 56) & 0x40000000) != 0 )
    return 0LL;
  v13 = a5;
  CcAccessLog = 0LL;
  if ( dword_140388C68 && a5 >= dword_140388C6C )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList((_DWORD)CcAccessLog, v12, a2, a4, a4, v13, -1, (__int64)&P) < 0
    || (v15 = P) == 0LL )
  {
LABEL_15:
    if ( CcAccessLog )
      MiReturnCcAccessLog((signed __int64)CcAccessLog, 0);
    return 0LL;
  }
  v16 = a8;
  *((_DWORD *)P + 18) = 1;
  if ( !*v16 )
    --CurrentThread->SpecialApcDisable;
  if ( (int)MiPfPutPagesInTransition((__int64)v15, 0LL) < 0 || (_QWORD *)v15[11] == v15 + 11 )
  {
    if ( !*v16 )
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiReleaseReadListResources(v15);
    ExFreePoolWithTag(v15, 0);
    goto LABEL_15;
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog((signed __int64)CcAccessLog, 1);
  MiPfExecuteReadList((__int64)v15, 1, 0xFFFFFFFF, a7);
  result = 1LL;
  *v15 = *v16;
  *v16 = v15;
  return result;
}
