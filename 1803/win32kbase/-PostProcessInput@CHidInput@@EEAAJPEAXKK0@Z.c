/*
 * XREFs of ?PostProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C0127880
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 */

__int64 __fastcall CHidInput::PostProcessInput(CHidInput *this, void *a2)
{
  UserSessionSwitchLeaveCrit((__int64)this);
  return 0LL;
}
