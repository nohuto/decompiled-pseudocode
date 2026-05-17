/*
 * XREFs of ZwOpenThreadTokenEx @ 0x18009B0A0
 * Callers:
 *     RtlCheckTokenCapability @ 0x180030720 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180035010 (RtlCheckTokenMembershipEx.c)
 *     sub_180078DB0 @ 0x180078DB0 (sub_180078DB0.c)
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
