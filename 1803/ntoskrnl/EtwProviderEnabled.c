/*
 * XREFs of EtwProviderEnabled @ 0x140062600
 * Callers:
 *     EtwTraceMemoryAcg @ 0x1400625A0 (EtwTraceMemoryAcg.c)
 *     EtwTiLogAllocExecVm @ 0x1404D685C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1404D6A38 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogQueueApcThread @ 0x1404D930C (EtwTiLogQueueApcThread.c)
 *     EtwTiLogReadWriteVm @ 0x1404D97A4 (EtwTiLogReadWriteVm.c)
 *     EtwTraceWorkingSetSwap @ 0x14052C59C (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14052D0AC (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogSetContextThread @ 0x14056B5D8 (EtwTiLogSetContextThread.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14057D0A0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogMapExecView @ 0x14057D65C (EtwTiLogMapExecView.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  BOOLEAN v5; // r9
  __int64 v6; // r10
  char v7; // r11

  if ( !RegHandle )
    return 0;
  if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 80LL, Level, Keyword) )
    return 1;
  if ( *(_BYTE *)(v6 + 101) != v5 )
  {
    LOBYTE(v3) = v7;
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v6 + 40) + 80LL, v3, v4) )
      return 1;
  }
  return v5;
}
