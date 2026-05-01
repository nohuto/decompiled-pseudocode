/*
 * XREFs of atexit @ 0x180026090
 * Callers:
 *     _dynamic_initializer_for__g_pProxy__ @ 0x180001000 (_dynamic_initializer_for__g_pProxy__.c)
 * Callees:
 *     _onexit_0 @ 0x180026000 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
