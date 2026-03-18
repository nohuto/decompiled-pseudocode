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

bool __fastcall SepSidInTokenSidHash(__int64 a1, void *a2, void *a3, char a4, char a5, char a6)
{
  void *v7; // rbx
  __int64 v10; // rax
  bool result; // al
  int v12; // ecx

  v7 = a3;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, a3) )
    v7 = a2;
  result = 1;
  if ( !a6 || !RtlEqualSid(SeOwnerRightsSid, v7) )
  {
    v10 = RtlSidHashLookup(a1, v7);
    if ( !v10 )
      return 0;
    if ( a5 || v10 != *(_QWORD *)(a1 + 8) || (*(_DWORD *)(v10 + 8) & 0x10) != 0 && !a4 )
    {
      v12 = *(_DWORD *)(v10 + 8);
      if ( (v12 & 4) == 0 && (!a4 || (v12 & 0x10) == 0) )
        return 0;
    }
  }
  return result;
}
