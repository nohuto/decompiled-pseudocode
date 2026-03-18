/*
 * XREFs of MiWriteWsle @ 0x14013FAB0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiRemoveWsleList @ 0x1400E1950 (MiRemoveWsleList.c)
 *     MiSetPagingOfDriver @ 0x14013F7B4 (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x14013FA7C (MiSetWsleProtection.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x1408BA590 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 */

signed __int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  return MiWriteValidPteVolatile(
           (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           0x80000000,
           a3);
}
