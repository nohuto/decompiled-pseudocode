/*
 * XREFs of floorf_0 @ 0x180046748
 * Callers:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800098D4 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E690 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001F690 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002F548 (-RoundToNearestInt@@YAHM@Z.c)
 *     DwmpCalculateColorizationColor @ 0x180035FBC (DwmpCalculateColorizationColor.c)
 *     PacksRGBColor @ 0x18006FD8C (PacksRGBColor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
