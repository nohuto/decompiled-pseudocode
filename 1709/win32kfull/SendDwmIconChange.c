/*
 * XREFs of SendDwmIconChange @ 0x1C008B294
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020C0A0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C020F19C (xxxRecreateSmallIcons.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     DwmAsyncIconChange @ 0x1C008B33C (DwmAsyncIconChange.c)
 *     _HasCaptionIcon @ 0x1C008B3E0 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C008B494 (xxxGetWindowSmIcon.c)
 */

__int64 __fastcall SendDwmIconChange(ULONG_PTR a1)
{
  __int64 v2; // rcx
  void *v3; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  if ( (unsigned int)HasCaptionIcon(a1) && (*(_BYTE *)(a1 + 70) & 8) != 0 && xxxGetWindowSmIcon(a1) )
    xxxGetWindowSmIcon(a1);
  GetProp(a1, *(_WORD *)(gpsi + 1358LL), 1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
  v3 = (void *)ReferenceDwmApiPort(v2);
  return DwmAsyncIconChange(v3);
}
