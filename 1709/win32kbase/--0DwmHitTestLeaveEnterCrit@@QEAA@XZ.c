/*
 * XREFs of ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C00DB7B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 */

DwmHitTestLeaveEnterCrit *__fastcall DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit(
        DwmHitTestLeaveEnterCrit *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  gbDITInHitTest = 1;
  UserSessionSwitchLeaveCrit((__int64)this, a2, a3, a4);
  return this;
}
