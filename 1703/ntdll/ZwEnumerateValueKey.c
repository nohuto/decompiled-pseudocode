/*
 * XREFs of ZwEnumerateValueKey @ 0x1800A5560
 * Callers:
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
 *     sub_18006E4FC @ 0x18006E4FC (sub_18006E4FC.c)
 *     sub_1800DFC34 @ 0x1800DFC34 (sub_1800DFC34.c)
 *     sub_1800FC568 @ 0x1800FC568 (sub_1800FC568.c)
 *     sub_1800FCB2C @ 0x1800FCB2C (sub_1800FCB2C.c)
 * Callees:
 *     <none>
 */

__int64 ZwEnumerateValueKey()
{
  __int64 result; // rax

  result = 19LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
