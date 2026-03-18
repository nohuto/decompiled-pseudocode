/*
 * XREFs of PsGetProcessStartKey @ 0x1400AE9D0
 * Callers:
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1404DD4C8 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpInitStateChangeInfo @ 0x1404DD67C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x1404FDFA0 (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140573710 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpTiFillProcessIdentity @ 0x14058819C (EtwpTiFillProcessIdentity.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1872) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
