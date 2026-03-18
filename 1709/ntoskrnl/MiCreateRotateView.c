/*
 * XREFs of MiCreateRotateView @ 0x14044DE28
 * Callers:
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x14002A960 (MiGetInPageSupportBlock.c)
 *     MiInsertVadEvent @ 0x1400A59A0 (MiInsertVadEvent.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
