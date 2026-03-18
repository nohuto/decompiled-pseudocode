/*
 * XREFs of ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C01235B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 */

__int64 __fastcall CBaseInput::OnPnpNotification(char **this)
{
  return RIMOnPnpNotification(this[1]);
}
