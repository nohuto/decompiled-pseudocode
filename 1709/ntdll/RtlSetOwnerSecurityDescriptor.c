/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x180057480
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x18002C230 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180053B40 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x18005B390 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 *     RtlpSysVolTakeOwnership @ 0x18008A1B0 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008ACD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetOwnerSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // cx
  __int64 v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 < 0 )
    return 3221225593LL;
  v5 = 0LL;
  if ( a2 )
    v5 = a2;
  *(_QWORD *)(a1 + 8) = v5;
  v6 = v4 & 0xFFFE;
  *(_WORD *)(a1 + 2) = v6;
  if ( a3 )
    *(_WORD *)(a1 + 2) = v6 | 1;
  return 0LL;
}
