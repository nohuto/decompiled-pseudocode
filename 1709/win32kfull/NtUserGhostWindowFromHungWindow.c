/*
 * XREFs of NtUserGhostWindowFromHungWindow @ 0x1C005D190
 * Callers:
 *     <none>
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C005D3B8 (_GhostWindowFromHungWindow.c)
 */

__int64 __fastcall NtUserGhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 *v6; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  if ( v2 )
  {
    v6 = (__int64 *)GhostWindowFromHungWindow(v2);
    if ( v6 )
      v5 = *v6;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
