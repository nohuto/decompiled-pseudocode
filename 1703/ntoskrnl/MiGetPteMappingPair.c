/*
 * XREFs of MiGetPteMappingPair @ 0x140225D84
 * Callers:
 *     MiSlowRotateCopy @ 0x140214204 (MiSlowRotateCopy.c)
 * Callees:
 *     MiAllocateHyperSpace @ 0x14000BC08 (MiAllocateHyperSpace.c)
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 */

__int64 __fastcall MiGetPteMappingPair(int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al

  if ( a1 != 1 || (result = MiCreatePteCopyList(2uLL, 2uLL, a2), !*(_DWORD *)(a2 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a2 + 8) = CurrentIrql;
    result = ((MiAllocateHyperSpace(2uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = result;
    *(_BYTE *)(a2 + 9) = 1;
  }
  return result;
}
