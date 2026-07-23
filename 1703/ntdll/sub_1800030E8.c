/*
 * XREFs of sub_1800030E8 @ 0x1800030E8
 * Callers:
 *     sub_18005DB48 @ 0x18005DB48 (sub_18005DB48.c)
 * Callees:
 *     sub_18000316C @ 0x18000316C (sub_18000316C.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

_QWORD *__fastcall sub_1800030E8(__int64 a1, unsigned int a2, int a3)
{
  _QWORD *Heap; // rax
  _QWORD *v7; // rbx
  _QWORD *result; // rax

  if ( a1 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x48uLL);
    v7 = Heap;
    if ( Heap )
    {
      if ( (unsigned int)sub_18000316C(Heap, a1, a2) )
      {
        result = v7;
        v7[2] = -1LL;
        *(_DWORD *)v7 = a3 & 0xFFFFFFFB;
        return result;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    RtlSetLastWin32Error(87);
  }
  return 0LL;
}
