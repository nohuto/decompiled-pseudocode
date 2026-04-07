/*
 * XREFs of ?wil_details_StagingConfigFeature_HasUniqueState@@YAHPEBUwil_details_StagingConfigFeature@@@Z @ 0x1800689AC
 * Callers:
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x18003F82C (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18003F874 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall wil_details_StagingConfigFeature_HasUniqueState(const struct wil_details_StagingConfigFeature *a1)
{
  return *(_DWORD *)a1
      && (((*((_DWORD *)a1 + 1) | ((unsigned int)(*((_DWORD *)a1 + 1) | (*((_DWORD *)a1 + 1) >> 2)) >> 2)) & 0x300) != 0
       || (*((_DWORD *)a1 + 1) & 0x3F000000) != 0);
}
