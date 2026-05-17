/*
 * XREFs of longjmp @ 0x18008ED90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800913BC @ 0x1800913BC (sub_1800913BC.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  sub_1800913BC();
  sub_1800A1270(Buf, (unsigned int)Value);
}
