/*
 * XREFs of atexit @ 0x140003A18
 * Callers:
 *     sub_140001000 @ 0x140001000 (sub_140001000.c)
 *     sub_140001010 @ 0x140001010 (sub_140001010.c)
 *     sub_140001020 @ 0x140001020 (sub_140001020.c)
 *     sub_140001030 @ 0x140001030 (sub_140001030.c)
 *     sub_1400010B0 @ 0x1400010B0 (sub_1400010B0.c)
 *     sub_1400010C0 @ 0x1400010C0 (sub_1400010C0.c)
 *     sub_140003A30 @ 0x140003A30 (sub_140003A30.c)
 * Callees:
 *     _onexit_0 @ 0x140003988 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
