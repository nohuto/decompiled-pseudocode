/*
 * XREFs of IsOpenThemeDataPresent @ 0x1800494F0
 * Callers:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180004688 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800159D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019A90 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180019E30 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180019F50 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001B440 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x18001B940 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E820 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001EE5C (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001FA0C (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180033750 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003AAA4 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003EE58 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003F0E0 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180049FB0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenThemeDataPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800C9C88 == 1 )
    return 1;
  if ( dword_1800C9C88 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800C9C88 = 2 - (v1 != 0);
  return result;
}
