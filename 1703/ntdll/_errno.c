/*
 * XREFs of _errno @ 0x180088F50
 * Callers:
 *     sub_18009796C @ 0x18009796C (sub_18009796C.c)
 *     mbstowcs @ 0x180099970 (mbstowcs.c)
 *     sub_18009AFFC @ 0x18009AFFC (sub_18009AFFC.c)
 *     sub_18009BD48 @ 0x18009BD48 (sub_18009BD48.c)
 *     wcstombs @ 0x18009C000 (wcstombs.c)
 *     sub_18009C1C4 @ 0x18009C1C4 (sub_18009C1C4.c)
 *     sub_18009CCFC @ 0x18009CCFC (sub_18009CCFC.c)
 *     sub_18009D700 @ 0x18009D700 (sub_18009D700.c)
 *     sub_18009E7B8 @ 0x18009E7B8 (sub_18009E7B8.c)
 *     sub_18009EAB4 @ 0x18009EAB4 (sub_18009EAB4.c)
 *     sub_18009FB60 @ 0x18009FB60 (sub_18009FB60.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
