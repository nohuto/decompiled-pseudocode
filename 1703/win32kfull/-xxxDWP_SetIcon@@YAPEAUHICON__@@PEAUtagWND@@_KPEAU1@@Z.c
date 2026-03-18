/*
 * XREFs of ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     SendDwmIconChange @ 0x1C001D7AC (SendDwmIconChange.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxRedrawTitle @ 0x1C003D3F0 (xxxRedrawTitle.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     xxxCreateWindowSmIcon @ 0x1C00C1950 (xxxCreateWindowSmIcon.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 */

HICON __fastcall xxxDWP_SetIcon(struct tagWND *a1, unsigned __int64 a2, HICON a3)
{
  __int64 v6; // r10
  HICON Prop; // r12
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r14d
  HICON v13; // r15
  HICON v14; // rdi
  int v15; // esi
  __int64 v16; // rax
  HICON v17; // rax

  if ( a2 > 3 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  if ( a2 == 3 )
  {
    xxxRecreateSmallIcons();
    return 0LL;
  }
  Prop = (HICON)GetProp((__int64)a1, *(_WORD *)(gpsi + 1358LL), 1);
  v9 = GetProp((__int64)a1, *(_WORD *)(v6 + 1356), v8);
  v12 = 0;
  v13 = Prop;
  v14 = (HICON)v9;
  if ( !a2 )
    v13 = (HICON)v9;
  if ( v13 != a3 )
  {
    LOBYTE(v10) = 3;
    v15 = v11;
    v16 = HMValidateHandleNoRip(v9, v10);
    if ( v16 && (*(_DWORD *)(v16 + 80) & 0x80u) != 0 )
    {
      v12 = v15;
      DestroyCursor((struct tagCURSOR *)v16, 0LL);
    }
    if ( a2 )
    {
      if ( v12 )
      {
        v14 = 0LL;
      }
      else if ( v14 )
      {
        v15 = 0;
      }
      Prop = a3;
    }
    else
    {
      v17 = 0LL;
      v14 = a3;
      if ( !v12 )
        v17 = v13;
      v13 = v17;
    }
    InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1358LL), (__int64)Prop, 5);
    InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), (__int64)v14, 5);
    if ( Prop && !v14 )
      xxxCreateWindowSmIcon(a1, (__int64)Prop, 1);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((__int64)a1);
    if ( v15 )
      xxxRedrawTitle(a1, 0x200Cu);
  }
  return v13;
}
