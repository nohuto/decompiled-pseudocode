/*
 * XREFs of ZwOpenThreadToken @ 0x18009AF40
 * Callers:
 *     sub_180058F2C @ 0x180058F2C (sub_180058F2C.c)
 *     RtlCheckSandboxedToken @ 0x18006B8E0 (RtlCheckSandboxedToken.c)
 *     RtlAdjustPrivilege @ 0x18007B4A0 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenThreadToken()
{
  __int64 result; // rax

  result = 36LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
