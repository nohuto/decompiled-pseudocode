/*
 * XREFs of MiInitializeColorBaseSession @ 0x14002E4C4
 * Callers:
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeColorBaseSession(__int64 a1)
{
  return MiInitializePageColorBase(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008, 0LL, a1);
}
