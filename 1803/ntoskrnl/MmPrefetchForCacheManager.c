/*
 * XREFs of MmPrefetchForCacheManager @ 0x1404BBCB8
 * Callers:
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x140098ACC (CcAsyncReadPrefetch.c)
 *     CcFetchDataForRead @ 0x14011D8A0 (CcFetchDataForRead.c)
 * Callees:
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiReturnCcAccessLog @ 0x14007A104 (MiReturnCcAccessLog.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x1404BBF28 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x1404BC628 (MiPfExecuteReadList.c)
 *     MiGetCcAccessLog @ 0x14052760C (MiGetCcAccessLog.c)
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
  signed __int64 CcAccessLog; // rdi
  unsigned int v11; // esi
  __int64 v13; // r15
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  __int64 result; // rax
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = a3;
  CurrentThread = KeGetCurrentThread();
  CcAccessLog = 0LL;
  v11 = a5;
  v13 = **(_QWORD **)(a1 + 40);
  if ( a5 >= dword_1403CBF2C && dword_1403CBF28 )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v13, a2, a4, a4, v11, 0xFFFFFFFF, &P) >= 0 )
  {
    v14 = P;
    if ( P )
    {
      v15 = a8;
      *((_DWORD *)P + 18) = 1;
      if ( !*v15 )
        --CurrentThread->SpecialApcDisable;
      if ( (int)MiPfPutPagesInTransition((__int64)v14, 0LL) >= 0 && (_QWORD *)v14[11] != v14 + 11 )
      {
        if ( CcAccessLog )
          MiReturnCcAccessLog(CcAccessLog, 1);
        MiPfExecuteReadList(v14, 1LL, 0xFFFFFFFFLL, a7);
        result = 1LL;
        *v14 = *v15;
        *v15 = v14;
        return result;
      }
      if ( !*v15 )
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      MiReleaseReadListResources(v14);
      ExFreePoolWithTag(v14, 0);
    }
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 0);
  return 0LL;
}
