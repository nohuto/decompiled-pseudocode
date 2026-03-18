/*
 * XREFs of ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxCreateWindowSmIcon @ 0x1C0051CA4 (xxxCreateWindowSmIcon.c)
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     xxxRedrawTitle @ 0x1C0053FC0 (xxxRedrawTitle.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     SendDwmIconChange @ 0x1C008B294 (SendDwmIconChange.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 */

HICON __fastcall xxxDWP_SetIcon(struct tagWND *a1, unsigned __int64 a2, HICON a3)
{
  __int64 v6; // r11
  HICON Prop; // r12
  __int64 v8; // r8
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
  Prop = (HICON)GetProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
  v9 = GetProp(a1, *(unsigned __int16 *)(v6 + 1356), v8);
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
      DestroyCursor((struct tagCURSOR *)v16);
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
    InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), Prop, 5LL);
    InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), v14, 5LL);
    if ( Prop && !v14 )
      xxxCreateWindowSmIcon((__int64)a1, (__int64)Prop, 1);
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      SendDwmIconChange(a1);
    if ( v15 )
      xxxRedrawTitle(a1, 8204LL);
  }
  return v13;
}
