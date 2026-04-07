/*
 * XREFs of IsOpenThemeDataPresent @ 0x180045BAC
 * Callers:
 *     ??0CWindowData@@QEAA@XZ @ 0x180010BB0 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019C60 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180019FD0 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001A0F0 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001B5D0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x18001BB00 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E690 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001ED04 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x1800312C4 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180035770 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180037E40 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003BB78 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003BE00 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180046660 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenThemeDataPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800BECF0 == 1 )
    return 1;
  if ( dword_1800BECF0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800BECF0 = 2 - (v1 != 0);
  return result;
}
