/*
 * XREFs of ?IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ @ 0x180077948
 * Callers:
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18006777C (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     IsCreateAppChromePresent @ 0x1800C4704 (IsCreateAppChromePresent.c)
 */

bool __fastcall CDisplay::IsDesktopPlaneSplitEnabled(CDisplay *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_DWORD *)this + 63) == 1297040209
    && *((int *)this + 62) >= 2000
    && CCommonRegistryData::m_fEnableDesktopPlaneSplit )
  {
    return (unsigned __int8)IsCreateAppChromePresent() != 0;
  }
  return v1;
}
