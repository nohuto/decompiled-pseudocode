/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C005C980
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 * Callees:
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1C00569D0 (GreOffsetRgn.c)
 *     GetMonitorRect @ 0x1C005955C (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0059B24 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C005CA00 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, struct HOBJ__ *a2, HRGN a3)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  _OWORD *MonitorRect; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  MonitorRegionForDpi = GetMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
  if ( (unsigned int)GreCombineRgn((HRGN)a2, a3, MonitorRegionForDpi, 1) )
  {
    MonitorRect = GetMonitorRect(&v9, (__int64)a1);
    GreOffsetRgn(a2, -*(_DWORD *)MonitorRect, -HIDWORD(*(_QWORD *)MonitorRect));
  }
  else
  {
    GreSetRectRgn(a2, 0, 0, 0, 0);
  }
}
