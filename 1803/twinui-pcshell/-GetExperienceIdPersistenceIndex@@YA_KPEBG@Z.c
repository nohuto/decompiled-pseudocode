/*
 * XREFs of ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x1801E5760
 * Callers:
 *     ?SetRegistration@WindowWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1801F3D70 (-SetRegistration@WindowWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExperienceIdPersistenceIndex(LPCWCH lpString1)
{
  __int64 v2; // rbx

  v2 = 1LL;
  while ( CompareStringOrdinal(lpString1, -1, off_180322D20[v2], -1, 1) != 2 )
  {
    if ( (unsigned __int64)++v2 >= 4 )
      return 0LL;
  }
  return v2;
}
