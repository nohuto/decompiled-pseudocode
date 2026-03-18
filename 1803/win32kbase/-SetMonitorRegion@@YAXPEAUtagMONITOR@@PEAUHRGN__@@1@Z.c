/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A8988
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0033A78 (GetMonitorDC.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C001E320 (GreSetRectRgn.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x1C00347B0 (GreOffsetRgn.c)
 *     GetMonitorRect @ 0x1C0057744 (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0057840 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C00599F8 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  _OWORD *MonitorRect; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  MonitorRegionForDpi = GetMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegionForDpi, 1) )
  {
    MonitorRect = GetMonitorRect(&v9, (__int64)a1);
    GreOffsetRgn(a2, -*(_DWORD *)MonitorRect, -HIDWORD(*(_QWORD *)MonitorRect));
  }
  else
  {
    GreSetRectRgn(a2, 0, 0, 0, 0);
  }
}
