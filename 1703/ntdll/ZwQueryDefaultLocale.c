/*
 * XREFs of ZwQueryDefaultLocale @ 0x1800A55A0
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_18005C0F4 @ 0x18005C0F4 (sub_18005C0F4.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryDefaultLocale()
{
  __int64 result; // rax

  result = 21LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
