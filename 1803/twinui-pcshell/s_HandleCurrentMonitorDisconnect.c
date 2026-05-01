/*
 * XREFs of s_HandleCurrentMonitorDisconnect @ 0x18022B5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall s_HandleCurrentMonitorDisconnect(__int64 a1, struct IUnknown *a2, char a3)
{
  return ImmersiveMonitorHelper::HandleCurrentMonitorDisconnect(a1, a2, a3);
}
