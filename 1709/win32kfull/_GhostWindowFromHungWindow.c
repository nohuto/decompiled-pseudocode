/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C005D3B8
 * Callers:
 *     _VisrgnFromWindow @ 0x1C000BFF4 (_VisrgnFromWindow.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C005D190 (NtUserGhostWindowFromHungWindow.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C020F330 (DWP_GetEnabledPopup.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // r11
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  __int64 Prop; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // rax

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 168);
  v4 = *(_WORD *)(gpsi + 884LL);
  if ( *(_WORD *)(v3 + 8) != v4 )
  {
    Prop = GetProp(a1, v4, 1LL);
    if ( Prop )
    {
      if ( Prop == -1 )
        Prop = 0LL;
    }
    else
    {
      Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1362LL), v7);
    }
    if ( Prop )
    {
      LOBYTE(v6) = v7;
      v9 = HMValidateHandleNoSecure(Prop, v6);
      v2 = v9;
      if ( v9 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v9) )
          return 0LL;
      }
    }
  }
  return v2;
}
