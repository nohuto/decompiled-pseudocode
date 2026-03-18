/*
 * XREFs of MiWriteWsle @ 0x1400E6D40
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiSetPagingOfDriver @ 0x1400DDBDC (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x1400E5A4C (MiSetWsleProtection.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140849240 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2)
{
  return MiWriteValidPteVolatile(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
}
