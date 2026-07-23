/*
 * XREFs of SepSidInTokenSidHash @ 0x140068A00
 * Callers:
 *     SepTokenIsOwner @ 0x1400151D0 (SepTokenIsOwner.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheck @ 0x14007D5C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14007DC40 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepSidInToken @ 0x1400D5100 (SepSidInToken.c)
 *     SepMatchCapability @ 0x14011D480 (SepMatchCapability.c)
 *     SepMaximumAccessCheckEx @ 0x140142AD0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140142BF0 (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x14025DFC0 (SeMaximumAuditMask.c)
 *     AuthzBasepDeviceMemberOf @ 0x14028E584 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x14028E6B4 (AuthzBasepMemberOf.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405132F0 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlSidHashLookup @ 0x14006A190 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 */

bool __fastcall SepSidInTokenSidHash(
        PSID_AND_ATTRIBUTES_HASH SidAttrHash,
        void *a2,
        void *a3,
        char a4,
        char a5,
        char a6)
{
  void *v7; // rbx
  PSID_AND_ATTRIBUTES v10; // rax
  ULONG Attributes; // ecx
  bool result; // al

  v7 = a3;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, a3) )
    v7 = a2;
  result = 1;
  if ( !a6 || !RtlEqualSid(SeOwnerRightsSid, v7) )
  {
    v10 = RtlSidHashLookup(SidAttrHash, v7);
    if ( !v10 )
      return 0;
    if ( a5 || v10 != SidAttrHash->SidAttr || (v10->Attributes & 0x10) != 0 && !a4 )
    {
      Attributes = v10->Attributes;
      if ( (Attributes & 4) == 0 && (!a4 || (Attributes & 0x10) == 0) )
        return 0;
    }
  }
  return result;
}
