/*
 * XREFs of MiGetPteMappingPair @ 0x14026D4A0
 * Callers:
 *     MiSlowRotateCopy @ 0x140258394 (MiSlowRotateCopy.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x1400C613C (MiCreatePteCopyList.c)
 *     MiAllocateHyperSpace @ 0x1401406F0 (MiAllocateHyperSpace.c)
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
