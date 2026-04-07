/*
 * XREFs of ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18003DD64
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D8C8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003BE00 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool CDesktopManager::IsHighContrastMode(void)
{
  bool result; // al
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  char v2; // [rsp+24h] [rbp-14h]

  pvParam = 16;
  if ( !SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
    return 0;
  result = 1;
  if ( (v2 & 1) == 0 )
    return 0;
  return result;
}
