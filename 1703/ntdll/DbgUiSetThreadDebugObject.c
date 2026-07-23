/*
 * XREFs of DbgUiSetThreadDebugObject @ 0x1800D51F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl DbgUiSetThreadDebugObject(HANDLE DebugObject)
{
  NtCurrentTeb()->DbgSsReserved[1] = DebugObject;
}
