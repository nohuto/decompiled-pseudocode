/*
 * XREFs of longjmp @ 0x180099940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009C17C @ 0x18009C17C (sub_18009C17C.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  sub_18009C17C();
  sub_1800AB950(Buf, (unsigned int)Value);
}
