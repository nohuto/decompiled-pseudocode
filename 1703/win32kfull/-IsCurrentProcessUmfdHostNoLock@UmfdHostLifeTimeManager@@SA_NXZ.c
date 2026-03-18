/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00227D8
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00226A8 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0022778 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C00227C0 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0114238 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C029D2CC (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1)
{
  return UmfdHostLifeTimeManager::s_UmfdHostProcess == (PRKPROCESS)PsGetCurrentProcess(a1);
}
