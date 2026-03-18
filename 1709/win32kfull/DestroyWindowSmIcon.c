/*
 * XREFs of DestroyWindowSmIcon @ 0x1C005D7C8
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020C0A0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 a1)
{
  __int64 Prop; // rax
  __int64 v4; // rax
  struct tagCURSOR *v5; // rbx

  Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  if ( !Prop )
    return 0LL;
  v4 = HMValidateHandleNoRip(Prop, 3);
  v5 = (struct tagCURSOR *)v4;
  if ( !v4 || (*(_DWORD *)(v4 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0LL, a1, 1824LL, 1LL);
  InternalRemoveProp(a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  DestroyCursor(v5);
  return 1LL;
}
