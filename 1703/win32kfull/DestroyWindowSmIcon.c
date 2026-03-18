/*
 * XREFs of DestroyWindowSmIcon @ 0x1C00C1AA4
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020AD00 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DestroyWindowSmIcon(_DWORD *a1)
{
  __int64 Prop; // rax
  __int64 v3; // rdx
  __int64 v5; // rax
  struct tagCURSOR *v6; // rbx

  Prop = GetProp((__int64)a1, *(_WORD *)(gpsi + 1356LL), 1);
  if ( !Prop )
    return 0LL;
  LOBYTE(v3) = 3;
  v5 = HMValidateHandleNoRip(Prop, v3);
  v6 = (struct tagCURSOR *)v5;
  if ( !v5 || (*(_DWORD *)(v5 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), 1LL);
  DestroyCursor(v6, 0LL);
  return 1LL;
}
