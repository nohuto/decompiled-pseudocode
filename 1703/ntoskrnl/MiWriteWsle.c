/*
 * XREFs of MiWriteWsle @ 0x14006D3C8
 * Callers:
 *     MiSetPagingOfDriver @ 0x14006D120 (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x14006D394 (MiSetWsleProtection.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiRemoveWsle @ 0x1400D4A00 (MiRemoveWsle.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140818ED0 (MiCreatePteWsle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2)
{
  return MiWriteValidPteVolatile(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
}
