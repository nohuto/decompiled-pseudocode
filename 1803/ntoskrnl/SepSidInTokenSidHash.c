/*
 * XREFs of SepSidInTokenSidHash @ 0x14005E750
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTokenIsOwner @ 0x140063010 (SepTokenIsOwner.c)
 *     SepSidInToken @ 0x140063264 (SepSidInToken.c)
 *     SepMatchCapability @ 0x1400BBCC0 (SepMatchCapability.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     AuthzBasepDeviceMemberOf @ 0x1402C41FC (AuthzBasepDeviceMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405091A8 (SepIsImpersonationAllowedDueToCapability.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     RtlSidHashLookup @ 0x14005E820 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 */

char __fastcall SepSidInTokenSidHash(__int64 a1, void *a2, void *a3, char a4, char a5, char a6, char a7)
{
  void *v8; // rsi
  __int64 v11; // rax
  int v13; // ecx

  v8 = a3;
  if ( !a4 && a7 && a3 && RtlEqualSid(SeAliasAdminsSid, a3) )
    return 0;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, v8) )
    v8 = a2;
  if ( a6 && RtlEqualSid(SeOwnerRightsSid, v8) )
    return 1;
  v11 = RtlSidHashLookup(a1, v8);
  if ( v11
    && (!a5 && v11 == *(_QWORD *)(a1 + 8) && ((*(_DWORD *)(v11 + 8) & 0x10) == 0 || a4)
     || (v13 = *(_DWORD *)(v11 + 8), (v13 & 4) != 0)
     || a4 && (v13 & 0x10) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
