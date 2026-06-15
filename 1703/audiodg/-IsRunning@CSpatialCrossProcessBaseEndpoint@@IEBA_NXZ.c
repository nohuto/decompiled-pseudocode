/*
 * XREFs of ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D334
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D380 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D4D0 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D5D0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x14005E7B0 (-GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F068 (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 *     ?GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14005F1D0 (-GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F240 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 *     ?GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x14005F550 (-GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 * Callees:
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005CF10 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 */

char __fastcall CSpatialCrossProcessBaseEndpoint::IsRunning(CSpatialCrossProcessBaseEndpoint *this)
{
  bool Flags; // al
  char v2; // cl
  int v4; // [rsp+38h] [rbp+10h] BYREF

  Flags = CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
            this,
            (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v4);
  v2 = 0;
  if ( Flags )
    return (v4 & 2) != 0;
  return v2;
}
