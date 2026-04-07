/*
 * XREFs of ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x1800163FC
 * Callers:
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800222E4 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F490 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F620 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030490 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

char WinSqmIsOptedIn_CachedInDwm(void)
{
  char result; // al
  int IsOptedIn; // eax

  if ( byte_1800C0E96 )
    return byte_1800C0D89;
  IsOptedIn = WinSqmIsOptedIn();
  byte_1800C0E96 = 1;
  result = IsOptedIn != 0;
  byte_1800C0D89 = result;
  return result;
}
