/*
 * XREFs of UserLeaveUserCritSec @ 0x1C0081BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void UserLeaveUserCritSec()
{
  UserSessionSwitchLeaveCrit();
}
