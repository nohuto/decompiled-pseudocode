/*
 * XREFs of iswdigit @ 0x180099590
 * Callers:
 *     sub_18003EF60 @ 0x18003EF60 (sub_18003EF60.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
