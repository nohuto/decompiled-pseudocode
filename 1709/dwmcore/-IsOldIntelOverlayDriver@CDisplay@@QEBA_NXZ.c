/*
 * XREFs of ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x180077980
 * Callers:
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18006777C (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsOldIntelOverlayDriver(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 63) == 32902 )
    return *(_QWORD *)(*((_QWORD *)this + 3) + 352LL) <= 0x140013000F112DLL;
  return result;
}
