/*
 * XREFs of CmpFatalFilter @ 0x14068F830
 * Callers:
 *     CmpQueryKeyName @ 0x1404E3290 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
