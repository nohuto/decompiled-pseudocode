/*
 * XREFs of EtwProviderEnabled @ 0x1400A6800
 * Callers:
 *     EtwTraceMemoryAcg @ 0x1400A67AC (EtwTraceMemoryAcg.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14044456C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogProtectExecVm @ 0x1404D53CC (EtwTiLogProtectExecVm.c)
 *     EtwTiLogAllocExecVm @ 0x1404D5D88 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogQueueApcThread @ 0x1404D9734 (EtwTiLogQueueApcThread.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404F2400 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTraceWorkingSetSwap @ 0x1405983E0 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogMapExecView @ 0x14059ACF8 (EtwTiLogMapExecView.c)
 *     EtwTiLogReadWriteVm @ 0x14074B358 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x14074B560 (EtwTiLogSetContextThread.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v3; // r8
  BOOLEAN v4; // r9
  __int64 v5; // r10
  unsigned __int8 v6; // r11

  if ( !RegHandle )
    return 0;
  if ( EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 80LL, Level, Keyword)
    || *(_BYTE *)(v5 + 101) != v4 && EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 40) + 80LL, v6, v3) )
  {
    return 1;
  }
  return v4;
}
