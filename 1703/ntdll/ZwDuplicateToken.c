/*
 * XREFs of ZwDuplicateToken @ 0x1800A5B40
 * Callers:
 *     sub_180012D28 @ 0x180012D28 (sub_180012D28.c)
 *     sub_180013164 @ 0x180013164 (sub_180013164.c)
 *     RtlCheckTokenMembershipEx @ 0x180044060 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 *     RtlImpersonateSelfEx @ 0x18007F940 (RtlImpersonateSelfEx.c)
 * Callees:
 *     <none>
 */

__int64 ZwDuplicateToken()
{
  __int64 result; // rax

  result = 66LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
