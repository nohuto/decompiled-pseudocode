/*
 * XREFs of NtUserCreateEmptyCursorObject @ 0x1C00995A0
 * Callers:
 *     <none>
 * Callees:
 *     _CreateEmptyCursorObject @ 0x1C00995DC (_CreateEmptyCursorObject.c)
 */

__int64 __fastcall NtUserCreateEmptyCursorObject(int a1)
{
  __int64 EmptyCursorObject; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  EmptyCursorObject = CreateEmptyCursorObject(a1 != 0);
  UserSessionSwitchLeaveCrit(v4, v3);
  return EmptyCursorObject;
}
