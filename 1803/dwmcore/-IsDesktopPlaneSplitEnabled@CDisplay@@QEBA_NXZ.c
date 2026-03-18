/*
 * XREFs of ?IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ @ 0x1800B75A8
 * Callers:
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18007A040 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800C6EC0 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     IsCreateAppChromePresent @ 0x1800DCAB4 (IsCreateAppChromePresent.c)
 */

bool __fastcall CDisplay::IsDesktopPlaneSplitEnabled(CDisplay *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_DWORD *)this + 68) == 1297040209
    && *((int *)this + 67) >= 2000
    && CCommonRegistryData::m_fEnableDesktopPlaneSplit )
  {
    return (unsigned __int8)IsCreateAppChromePresent() != 0;
  }
  return v1;
}
