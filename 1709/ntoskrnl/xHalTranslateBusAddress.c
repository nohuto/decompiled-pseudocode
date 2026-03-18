/*
 * XREFs of xHalTranslateBusAddress @ 0x1401E9670
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __noreturn xHalTranslateBusAddress()
{
  KeBugCheckEx(0x5Cu, 0LL, 0LL, 0LL, 7uLL);
}
