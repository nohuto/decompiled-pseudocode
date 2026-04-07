/*
 * XREFs of ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x18006EE44
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004246C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z @ 0x180042544 (-wil_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHW4wil_FeatureStore@@PEAH@Z.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18006EE14 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800845A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_HasTestState(int a1, int a2, _OWORD *a3)
{
  unsigned int v3; // ebx
  struct wil_details_FeatureTestState *i; // rax
  __int128 v8; // xmm1

  v3 = 0;
  if ( g_wil_details_testStates )
  {
    AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
    for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
    {
      if ( *((_DWORD *)i + 1) == a1 && *(_DWORD *)i == a2 )
      {
        v3 = 1;
        v8 = *((_OWORD *)i + 1);
        *a3 = *(_OWORD *)i;
        a3[1] = v8;
        break;
      }
    }
    ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
  }
  return v3;
}
