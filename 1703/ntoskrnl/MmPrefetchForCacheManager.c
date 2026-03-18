/*
 * XREFs of MmPrefetchForCacheManager @ 0x14053D5DC
 * Callers:
 *     CcPerformReadAhead @ 0x1400215AC (CcPerformReadAhead.c)
 *     CcFetchDataForRead @ 0x14009D9B0 (CcFetchDataForRead.c)
 *     CcAsyncReadPrefetch @ 0x1401174FC (CcAsyncReadPrefetch.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x140006794 (MiReturnCcAccessLog.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiGetCcAccessLog @ 0x140423E34 (MiGetCcAccessLog.c)
 *     MiReleaseReadListResources @ 0x140515B6C (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x14053D754 (MiPfExecuteReadList.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        unsigned __int64 a2,
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
  if ( dword_14036CA68 && a5 >= dword_14036CA6C )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList((__int64)CcAccessLog, v12, a2, a4, a4, v13, 0xFFFFFFFF, (__int64 *)&P) < 0
    || (v15 = P) == 0LL )
  {
LABEL_17:
    if ( CcAccessLog )
      MiReturnCcAccessLog((signed __int64)CcAccessLog, 0LL);
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
    MiReleaseReadListResources((__int64)v15);
    ExFreePoolWithTag(v15, 0);
    goto LABEL_17;
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog((signed __int64)CcAccessLog, 1LL);
  MiPfExecuteReadList(v15, 1LL, 0xFFFFFFFFLL, a7);
  result = 1LL;
  *v15 = *v16;
  *v16 = v15;
  return result;
}
