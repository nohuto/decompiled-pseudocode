/*
 * XREFs of ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x180077968
 * Callers:
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18006777C (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplay::IsOldQualcommOverlayDriver(CDisplay *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 63) == 1297040209
    && (*((_DWORD *)this + 64) <= 0x46363432u || *(__int64 *)(*((_QWORD *)this + 3) + 352LL) <= 0xB001204360026LL) )
  {
    return 1;
  }
  return v1;
}
