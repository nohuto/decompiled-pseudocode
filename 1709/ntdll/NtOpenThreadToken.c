/*
 * XREFs of NtOpenThreadToken @ 0x1800A0540
 * Callers:
 *     RtlpTpRevertCapture @ 0x18001197C (RtlpTpRevertCapture.c)
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 *     RtlAdjustPrivilege @ 0x18007C820 (RtlAdjustPrivilege.c)
 *     BaseGetNamedObjectDirectory @ 0x18010E86C (BaseGetNamedObjectDirectory.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadToken()
{
  __int64 result; // rax

  result = 36LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
