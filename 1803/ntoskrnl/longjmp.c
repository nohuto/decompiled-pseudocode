/*
 * XREFs of longjmp @ 0x140187620
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x14012F7E0 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1401A71F0 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
