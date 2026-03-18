/*
 * XREFs of KeFlushProcessTb @ 0x140070738
 * Callers:
 *     MiDeleteProcessShadow @ 0x1400704F8 (MiDeleteProcessShadow.c)
 *     MiDeleteFinalPageTables @ 0x140070A70 (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x140144C48 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x140159CD8 (HvlFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  if ( (HvlEnlightenments & 1) != 0 )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL);
  return result;
}
