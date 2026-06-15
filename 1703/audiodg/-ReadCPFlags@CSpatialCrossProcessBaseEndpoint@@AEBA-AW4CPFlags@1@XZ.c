/*
 * XREFs of ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058CA4
 * Callers:
 *     ?IsProperlyInitialized@CSpatialCrossProcessClientEndpoint@@MEAAJXZ @ 0x140058B40 (-IsProperlyInitialized@CSpatialCrossProcessClientEndpoint@@MEAAJXZ.c)
 *     ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14005B588 (-CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005BBC8 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005CF10 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D360 (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005D970 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F240 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ReadCPFlags(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 880);
  v2 = 0;
  if ( v1 )
    return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 64), 0, 0);
  return v2;
}
