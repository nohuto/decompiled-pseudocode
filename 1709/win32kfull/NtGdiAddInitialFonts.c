/*
 * XREFs of NtGdiAddInitialFonts @ 0x1C00BF650
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00BF6A8 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall NtGdiAddInitialFonts(__int64 a1, __int64 a2)
{
  bool v2; // al

  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    return 3221225506LL;
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  v2 = UmfdHostLifeTimeManager::AddInitialFonts();
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  return !v2 ? 0xC0000017 : 0;
}
