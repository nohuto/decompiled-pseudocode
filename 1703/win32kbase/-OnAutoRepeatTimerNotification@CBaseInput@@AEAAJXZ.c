/*
 * XREFs of ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C011A400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::OnAutoRepeatTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1], 1);
}
