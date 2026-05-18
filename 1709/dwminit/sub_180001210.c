/*
 * XREFs of sub_180001210 @ 0x180001210
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800096E4 (memset_0.c)
 */

int sub_180001210()
{
  memset_0(&wil::details::g_threadFailureCallbacks, 0, 0x50uLL);
  return atexit((void (__cdecl *)())sub_180009BF0);
}
