/*
 * XREFs of _HungWindowFromGhostWindow @ 0x1C00871C4
 * Callers:
 *     GetMonitorMaxArea @ 0x1C0086F24 (GetMonitorMaxArea.c)
 *     NtUserHungWindowFromGhostWindow @ 0x1C013D4C0 (NtUserHungWindowFromGhostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall HungWindowFromGhostWindow(__int64 a1)
{
  __int64 v2; // r11
  __int64 v4; // rcx
  __int64 Prop; // rax
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rax

  v2 = 0LL;
  if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    Prop = GetProp(v4, *(_WORD *)(gpsi + 884LL), 1);
    if ( Prop || (Prop = GetProp(a1, *(_WORD *)(gpsi + 1362LL), v7)) != 0 )
    {
      LOBYTE(v6) = v7;
      v8 = HMValidateHandleNoSecure(Prop, v6);
      v2 = v8;
      if ( v8 && (unsigned int)IsWindowBeingDestroyed(v8) )
        return 0LL;
    }
  }
  return v2;
}
