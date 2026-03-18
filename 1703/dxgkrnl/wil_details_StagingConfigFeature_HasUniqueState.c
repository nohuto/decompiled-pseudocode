/*
 * XREFs of wil_details_StagingConfigFeature_HasUniqueState @ 0x1C00358B0
 * Callers:
 *     wil_details_StagingConfig_QueryFeatureState @ 0x1C00358E8 (wil_details_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall wil_details_StagingConfigFeature_HasUniqueState(_DWORD *a1)
{
  return *a1 && (((a1[1] | ((unsigned int)(a1[1] | (a1[1] >> 2)) >> 2)) & 0x300) != 0 || (a1[1] & 0x3F000000) != 0);
}
