/*
 * XREFs of RtlSidHashInitialize @ 0x140093A10
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     SepTokenFromAccessInformation @ 0x1400883A4 (SepTokenFromAccessInformation.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x14046EA9C (SepCopyTokenAccessInformation.c)
 *     SepCreateClaimAttributes @ 0x14046F3A8 (SepCreateClaimAttributes.c)
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     CmpBuildAdminInformation @ 0x14056AEC0 (CmpBuildAdminInformation.c)
 *     SepDuplicateClaimAttributes @ 0x1406F9644 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __cdecl RtlSidHashInitialize(
        PSID_AND_ATTRIBUTES SidAttr,
        ULONG SidCount,
        PSID_AND_ATTRIBUTES_HASH SidAttrHash)
{
  __int64 v6; // rax
  __int64 v7; // r9
  _BYTE *Sid; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx

  if ( !SidAttrHash )
    return -1073741811;
  memset(SidAttrHash, 0, sizeof(_SID_AND_ATTRIBUTES_HASH));
  if ( SidAttr && SidCount )
  {
    SidAttrHash->SidAttr = SidAttr;
    SidAttrHash->SidCount = SidCount;
    if ( SidCount > 0x40 )
      SidCount = 64;
    v6 = 1LL;
    v7 = SidCount;
    do
    {
      Sid = SidAttr->Sid;
      ++SidAttr;
      v9 = (unsigned __int8)Sid[4 * (unsigned __int8)Sid[1] + 4];
      v10 = Sid[4 * (unsigned __int8)Sid[1] + 4] & 0xF;
      SidAttrHash->Hash[v10] |= v6;
      SidAttrHash->Hash[(v9 >> 4) + 16] |= v6;
      v6 = __ROL8__(v6, 1);
      --v7;
    }
    while ( v7 );
  }
  return 0;
}
