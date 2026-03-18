/*
 * XREFs of _GhostWindowFromHungWindow @ 0x1C00B4280
 * Callers:
 *     DWP_GetEnabledPopup @ 0x1C0005220 (DWP_GetEnabledPopup.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C00B4230 (NtUserGhostWindowFromHungWindow.c)
 *     _VisrgnFromWindow @ 0x1C01C23C8 (_VisrgnFromWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall GhostWindowFromHungWindow(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int16 v4; // cx
  unsigned __int64 Prop; // rax
  int v6; // r8d
  __int64 v7; // r11
  __int64 v9; // rax

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 168);
  v4 = *(_WORD *)(gpsi + 884LL);
  if ( *(_WORD *)(v3 + 8) != v4 )
  {
    Prop = GetProp(a1, v4, 1);
    if ( Prop )
    {
      if ( Prop == -1LL )
        Prop = 0LL;
    }
    else
    {
      Prop = GetProp(v7, *(_WORD *)(gpsi + 1362LL), v6);
    }
    if ( Prop )
    {
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
