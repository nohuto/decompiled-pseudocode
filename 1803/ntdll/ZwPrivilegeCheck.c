/*
 * XREFs of ZwPrivilegeCheck @ 0x18009D0B0
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_180044394 @ 0x180044394 (sub_180044394.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D2110 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800E1BF4 @ 0x1800E1BF4 (sub_1800E1BF4.c)
 * Callees:
 *     <none>
 */

__int64 ZwPrivilegeCheck()
{
  __int64 result; // rax

  result = 304LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
