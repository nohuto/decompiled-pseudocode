/*
 * XREFs of DbgUiConvertStateChangeStructureEx @ 0x1800C9220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiConvertStateChangeStructureEx(PDBGUI_WAIT_STATE_CHANGE StateChange, LPDEBUG_EVENT DebugEvent)
{
  char v2; // r8

  v2 = 1;
  return sub_1800C9228(StateChange, DebugEvent, v2);
}
