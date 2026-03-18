/*
 * XREFs of PsGetProcessStartKey @ 0x140061AD0
 * Callers:
 *     EtwpWriteAppStateChangeWithStats @ 0x14049A97C (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
 *     EtwpTiFillProcessIdentity @ 0x1404D6C14 (EtwpTiFillProcessIdentity.c)
 *     EtwpInitStateChangeInfo @ 0x1404F7B30 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x140510620 (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 1872) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
