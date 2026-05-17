/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x1800574E0
 * Callers:
 *     RtlCheckTokenCapability @ 0x180053B40 (RtlCheckTokenCapability.c)
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x18005B390 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 *     RtlpSysVolTakeOwnership @ 0x18008A1B0 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008AB7C (RtlpSysVolCreateSecurityDescriptor.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlCreateSecurityDescriptor(_BYTE *a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  memset(a1, 0, 0x28uLL);
  result = 0LL;
  *a1 = 1;
  return result;
}
