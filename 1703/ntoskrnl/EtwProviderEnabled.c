/*
 * XREFs of EtwProviderEnabled @ 0x14007D750
 * Callers:
 *     EtwTraceMemoryAcg @ 0x14007D6F8 (EtwTraceMemoryAcg.c)
 *     EtwTiLogMapExecView @ 0x1404C962C (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetSwap @ 0x1404C9698 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogQueueApcThread @ 0x1404C9900 (EtwTiLogQueueApcThread.c)
 *     EtwTiLogProtectExecVm @ 0x1404C9998 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogAllocExecVm @ 0x1404C9A04 (EtwTiLogAllocExecVm.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1404C9D98 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140594C60 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogSetContextThread @ 0x14070F650 (EtwTiLogSetContextThread.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  BOOLEAN v5; // r9
  __int64 v6; // r10

  if ( !RegHandle )
    return 0;
  if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 80LL, Level, Keyword)
    || *(_BYTE *)(v6 + 101) != v5 && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v6 + 40) + 80LL, v3, v4) )
  {
    return 1;
  }
  return v5;
}
