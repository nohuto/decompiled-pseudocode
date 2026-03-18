/*
 * XREFs of PsGetProcessStartKey @ 0x1400853A0
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpInitStateChangeInfo @ 0x14043D804 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x140451038 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x14045118C (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 *     EtwpTiFillProcessIdentity @ 0x14070F99C (EtwpTiFillProcessIdentity.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1848) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
