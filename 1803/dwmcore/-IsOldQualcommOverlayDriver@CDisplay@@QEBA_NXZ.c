/*
 * XREFs of ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800B75FC
 * Callers:
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18007A040 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800C6EC0 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsOldQualcommOverlayDriver(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 68) == 1297040209 && *((int *)this + 67) <= 2200 && *((_DWORD *)this + 69) == 1177957426 )
    return *(_QWORD *)(*((_QWORD *)this + 3) + 352LL) <= 0xB001204360026LL;
  return result;
}
