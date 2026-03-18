/*
 * XREFs of MiCreateRotateView @ 0x14045D458
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiInsertVadEvent @ 0x140099800 (MiInsertVadEvent.c)
 *     MiGetInPageSupportBlock @ 0x1400FBF70 (MiGetInPageSupportBlock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateRotateView(__int64 a1)
{
  _DWORD *PoolWithTag; // rbx
  void *v3; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x77776D4Du);
  if ( PoolWithTag )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      PoolWithTag[16] = 8;
      *((_QWORD *)PoolWithTag + 1) = v3;
      MiInsertVadEvent(a1, PoolWithTag, 0);
      return 1LL;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
