/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1800A58E0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180044060 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     sub_18007F8E0 @ 0x18007F8E0 (sub_18007F8E0.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenThreadTokenEx()
{
  __int64 result; // rax

  result = 47LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
