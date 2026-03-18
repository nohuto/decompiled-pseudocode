/*
 * XREFs of MiFlushAllPages @ 0x1401577E8
 * Callers:
 *     MmFlushAllPagesEx @ 0x140157768 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x140478484 (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140083858 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x14014D944 (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  _QWORD *result; // rax
  _KPROCESS *v9; // rbx
  _BYTE v10[48]; // [rsp+20h] [rbp-48h] BYREF

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1144) )
    {
      v9 = *(_KPROCESS **)(a1 + 1264);
      KiStackAttachProcess(v9, 0, (__int64)v10);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].IdealNode[12]);
      KiUnstackDetachProcess((__int64)v10, 0LL);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL);
    }
  }
  return result;
}
