/*
 * XREFs of vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0116020
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     bSetDevPreviewRect @ 0x1C02668BC (bSetDevPreviewRect.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vSpDwmGetMiniWinInfoForNonWindowSprite(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned __int64 result; // rax

  if ( a2 )
  {
    v2 = *a2;
    *(_OWORD *)a1 = *a2;
    *(_OWORD *)(a1 + 16) = v2;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = 0;
  result = gdwRitInputDesktopId;
  *(_QWORD *)(a1 + 48) = gdwRitInputDesktopId;
  return result;
}
