/*
 * XREFs of SendDwmIconChange @ 0x1C001D7AC
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0016158 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020AD00 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 * Callees:
 *     xxxGetWindowSmIcon @ 0x1C001D71C (xxxGetWindowSmIcon.c)
 *     _HasCaptionIcon @ 0x1C001D908 (_HasCaptionIcon.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SendDwmIconChange(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  if ( (unsigned int)HasCaptionIcon(a1) && (*(_BYTE *)(a1 + 70) & 8) != 0 && xxxGetWindowSmIcon(a1, 1) )
    xxxGetWindowSmIcon(a1, 1);
  GetProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
  if ( !v8 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v8);
  }
  v6 = (void *)ReferenceDwmApiPort(v3, v2, v4, v5);
  return DwmAsyncIconChange(v6);
}
