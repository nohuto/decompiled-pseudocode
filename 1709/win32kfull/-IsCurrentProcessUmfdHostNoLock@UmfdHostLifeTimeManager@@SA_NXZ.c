/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B0DA8
 * Callers:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B0D48 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00B0D90 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B1074 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00FECF4 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011FBF4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1, __int64 a2)
{
  return UmfdHostLifeTimeManager::s_UmfdHostProcess == (PRKPROCESS)PsGetCurrentProcess(a1, a2);
}
