/*
 * XREFs of NtDuplicateToken @ 0x1800A0900
 * Callers:
 *     TppCritSetThread @ 0x18000B5F4 (TppCritSetThread.c)
 *     RtlpTpInitializeData @ 0x180011910 (RtlpTpInitializeData.c)
 *     RtlCheckTokenMembershipEx @ 0x18002C230 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180053B40 (RtlCheckTokenCapability.c)
 *     RtlpNewSecurityObject @ 0x180053F0C (RtlpNewSecurityObject.c)
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 *     RtlImpersonateSelfEx @ 0x18007C340 (RtlImpersonateSelfEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE Type,
        PHANDLE NewTokenHandle)
{
  NTSTATUS result; // eax

  result = 66;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
