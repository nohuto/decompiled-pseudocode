/*
 * XREFs of DbgUiConvertStateChangeStructure @ 0x1800C9210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiConvertStateChangeStructure(PDBGUI_WAIT_STATE_CHANGE StateChange, LPDEBUG_EVENT DebugEvent)
{
  return sub_1800C9228(StateChange, DebugEvent, 0LL);
}
