/*
 * XREFs of ZwAccessCheck @ 0x1800A5300
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180044060 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheck()
{
  __int64 result; // rax

  result = 0LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
