/*
 * XREFs of longjmp @ 0x1401694A0
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140024760 (KeCheckStackAndTargetAddress.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
