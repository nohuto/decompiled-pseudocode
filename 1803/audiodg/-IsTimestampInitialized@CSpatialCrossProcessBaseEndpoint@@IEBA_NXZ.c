/*
 * XREFs of ?IsTimestampInitialized@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005EC04
 * Callers:
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005E700 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005D2F0 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 */

char __fastcall CSpatialCrossProcessBaseEndpoint::IsTimestampInitialized(CSpatialCrossProcessBaseEndpoint *this)
{
  bool Flags; // al
  char v2; // cl
  int v4; // [rsp+38h] [rbp+10h] BYREF

  Flags = CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
            this,
            (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v4);
  v2 = 0;
  if ( Flags )
    return (v4 & 4) != 0;
  return v2;
}
