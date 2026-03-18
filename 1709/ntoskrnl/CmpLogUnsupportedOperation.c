/*
 * XREFs of CmpLogUnsupportedOperation @ 0x140697FF0
 * Callers:
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     NtCompactKeys @ 0x1406876C0 (NtCompactKeys.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmDumpKey @ 0x14069C6E4 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x1406981A8 (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

TLG_STATUS __fastcall CmpLogUnsupportedOperation(unsigned int a1)
{
  TLG_STATUS result; // eax
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  result = _InterlockedIncrement(&CmpUnsupportedOperationHits[a1]);
  if ( result == 0x7FFFFFFF && _InterlockedExchange(&CmpUnsupportedOperationHits[a1], 0) )
    result = CmpSendUnsupportedOperationTelemetryEvent(a1);
  if ( stru_1403549F0.LevelPlus1 > 5 )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = a1;
    v6 = 4;
    return TlgWrite(&stru_1403549F0, &unk_1402CF012, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
