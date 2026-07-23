/*
 * XREFs of SepSidInTokenSidHash @ 0x140091F00
 * Callers:
 *     SepMatchCapability @ 0x140027230 (SepMatchCapability.c)
 *     SepTokenIsOwner @ 0x14003E128 (SepTokenIsOwner.c)
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x140090270 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140090C10 (SepMaximumAccessCheck.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepSidInToken @ 0x14012B964 (SepSidInToken.c)
 *     SepMaximumAccessCheckEx @ 0x1401331B0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401332E0 (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x14024687C (SeMaximumAuditMask.c)
 *     AuthzBasepDeviceMemberOf @ 0x140264250 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x140264368 (AuthzBasepMemberOf.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405600D0 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlSidHashLookup @ 0x1400938C0 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
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
  bool result; // al
  ULONG Attributes; // ecx

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
