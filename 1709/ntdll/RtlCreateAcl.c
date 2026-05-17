/*
 * XREFs of RtlCreateAcl @ 0x1800558B0
 * Callers:
 *     RtlCheckTokenCapability @ 0x180053B40 (RtlCheckTokenCapability.c)
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1800554E4 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x1800569A0 (RtlpCombineAcls.c)
 *     RtlCreateAndSetSD @ 0x18005B390 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 *     RtlDefaultNpAcl @ 0x1800881D0 (RtlDefaultNpAcl.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008AB7C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpComputeMergedAcl2 @ 0x18008EF40 (RtlpComputeMergedAcl2.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53C0 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800E6148 (RtlpCreateServerAcl.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAcl(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a2 < 8 )
    return 3221225507LL;
  if ( (unsigned int)(a3 - 2) > 2 || a2 > 0xFFFC )
    return 3221225485LL;
  result = 0LL;
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = 0;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
