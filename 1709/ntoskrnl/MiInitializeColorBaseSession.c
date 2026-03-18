/*
 * XREFs of MiInitializeColorBaseSession @ 0x140123BEC
 * Callers:
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 */

unsigned __int8 __fastcall MiInitializeColorBaseSession(__int64 a1)
{
  return MiInitializePageColorBase(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008, 0, a1);
}
