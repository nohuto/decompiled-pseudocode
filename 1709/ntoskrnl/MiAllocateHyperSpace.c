/*
 * XREFs of MiAllocateHyperSpace @ 0x1402303F4
 * Callers:
 *     MiGetPteMappingPair @ 0x140234BEC (MiGetPteMappingPair.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 */

unsigned __int64 __fastcall MiAllocateHyperSpace(unsigned __int64 a1)
{
  unsigned __int64 HyperPte; // rbx
  unsigned __int64 result; // rax

  HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
  if ( 64 - (HyperPte & 0xFFF) > a1 )
  {
    result = (HyperPte & 0xFFFFFFFFFFFFF000uLL) + ((HyperPte & 0xFFF) << 12);
  }
  else
  {
    MiFlushHyperSpace();
    HyperPte &= 0xFFFFFFFFFFFFF000uLL;
    result = HyperPte;
  }
  KeGetCurrentPrcb()->HyperPte = (void *)(HyperPte + a1);
  return result;
}
