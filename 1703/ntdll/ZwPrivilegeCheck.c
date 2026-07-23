/*
 * XREFs of ZwPrivilegeCheck @ 0x1800A7870
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_180081410 @ 0x180081410 (sub_180081410.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D9180 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800E6ED4 @ 0x1800E6ED4 (sub_1800E6ED4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  NTSTATUS result; // eax

  result = 300;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
