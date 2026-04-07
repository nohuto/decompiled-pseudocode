/*
 * XREFs of ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001BA18
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D8C8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180017F94 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x1800312C4 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetWindowColorizationColor(__int64 a1, unsigned int a2)
{
  CDesktopManager *v3; // rsi
  struct CTopLevelWindow::WindowFrame *v5; // rdx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *(_DWORD *)(a1 + 584),
         1,
         (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 595LL) & 0x20) != 0);
  if ( (a2 & 1) == 0 && (a2 & 2) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 584) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 595LL) & 0x20) != 0 )
      a2 |= 1u;
    else
      a2 |= 2u;
  }
  CDesktopManager::GetEffectiveWindowColorizationColor((__int64)v3, (__int64)v5, a2, &v7);
  return v7;
}
