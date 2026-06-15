/*
 * XREFs of ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D360
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D380 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D4D0 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D5D0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005E300 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058CA4 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 */

bool __fastcall CSpatialCrossProcessBaseEndpoint::IsValidFlags(CSpatialCrossProcessBaseEndpoint *this)
{
  return (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)this) & 0xFFFFFF81) == 1;
}
