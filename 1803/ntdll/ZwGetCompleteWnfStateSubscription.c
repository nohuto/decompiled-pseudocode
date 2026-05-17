/*
 * XREFs of ZwGetCompleteWnfStateSubscription @ 0x18009C7F0
 * Callers:
 *     sub_180049F90 @ 0x180049F90 (sub_180049F90.c)
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 *     sub_1800D8F60 @ 0x1800D8F60 (sub_1800D8F60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetCompleteWnfStateSubscription()
{
  __int64 result; // rax

  result = 234LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
