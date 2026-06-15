/*
 * XREFs of ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14006012C
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140060150 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x1400602A0 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x1400603A0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140061120 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x14005BB60 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 */

bool __fastcall CSpatialCrossProcessBaseEndpoint::IsValidFlags(CSpatialCrossProcessBaseEndpoint *this)
{
  return (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)this) & 0xFFFFFF81) == 1;
}
