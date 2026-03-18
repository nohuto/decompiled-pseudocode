/*
 * XREFs of CmpLogUnsupportedOperation @ 0x14066DAD0
 * Callers:
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     NtCompactKeys @ 0x14065E844 (NtCompactKeys.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 *     CmDumpKey @ 0x140671674 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14066DCB0 (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

TLG_STATUS __fastcall CmpLogUnsupportedOperation(unsigned int a1)
{
  TLG_STATUS result; // eax
  unsigned int v3; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v5; // [rsp+58h] [rbp-30h]
  int v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+64h] [rbp-24h]

  result = _InterlockedIncrement(&CmpUnsupportedOperationHits[a1]);
  if ( result == 0x7FFFFFFF && _InterlockedExchange(&CmpUnsupportedOperationHits[a1], 0) )
    result = CmpSendUnsupportedOperationTelemetryEvent(a1);
  if ( stru_14033C3C0.LevelPlus1 > 5 )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = a1;
    v6 = 4;
    return TlgWrite(&stru_14033C3C0, &unk_1402AB233, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
