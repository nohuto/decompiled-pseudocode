/*
 * XREFs of ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002D20
 * Callers:
 *     <none>
 * Callees:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002720 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180082544 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x180095FF8 (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x1800996C8 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CLauncherLaunch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  char v8; // al
  char v9; // r14
  CBaseObject *v10; // rdi
  int v11; // esi
  int v12; // eax
  int v14; // eax
  struct CAnimationComponent *v15; // [rsp+68h] [rbp+20h] BYREF

  v8 = CFlyoutPopup::_WindowEnumCallback((CStoryboard *)a1, a2, a3, a4);
  v9 = v8;
  if ( *a4 < 0 || !v8 )
    return v9;
  v10 = 0LL;
  v11 = 0;
  v15 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    v12 = *(_DWORD *)(a2 + 600) & 0xFFF;
    if ( v12 == 2 )
    {
      if ( *(_DWORD *)(a2 + 112) == 1 )
        *(_DWORD *)(a2 + 600) |= 0x4000000u;
      if ( CWindowData::WillEndAnimationCloaked((CWindowData *)a2) )
        goto LABEL_6;
      v14 = CLauncherLaunch::CommonAnimate((CLauncherLaunch *)a1, (struct CWindowData *)a2, &v15);
      v10 = v15;
      goto LABEL_17;
    }
    if ( v12 == 22
      && (*(_BYTE *)(a2 + 592) & 1) != 0
      && (*(_BYTE *)(a2 + 596) & 1) == 0
      && ContainsRect((const struct tagRECT *)(a1 + 120), (const struct tagRECT *)(a2 + 48)) )
    {
      v14 = CLauncherLaunch::CommonAnimate((CLauncherLaunch *)a1, (struct CWindowData *)a2, 0LL);
LABEL_17:
      v11 = v14;
    }
  }
LABEL_6:
  *a4 = v11;
  if ( v10 )
    CBaseObject::Release(v10);
  return v9;
}
