/*
 * XREFs of GetWindowBorders @ 0x1C00C285C
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C003BC28 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020C454 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0040F94 (GetWindowBordersWithCompatFlags2.c)
 *     GetAppCompatFlags2WithDPIAware @ 0x1C00C30C8 (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 __fastcall GetWindowBorders(unsigned int a1, int a2)
{
  unsigned int AppCompatFlags2WithDPIAware; // eax
  __int64 v5; // r8

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  if ( (AppCompatFlags2WithDPIAware & 0x2000000) != 0 )
    v5 = *(unsigned __int16 *)(gpsi + 8678LL);
  else
    v5 = 96LL;
  return GetWindowBordersWithCompatFlags2(a1, a2, v5, 0, AppCompatFlags2WithDPIAware, v5);
}
