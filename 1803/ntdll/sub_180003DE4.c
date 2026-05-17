/*
 * XREFs of sub_180003DE4 @ 0x180003DE4
 * Callers:
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x18007EBD0 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall sub_180003DE4(__int64 a1)
{
  __int64 Heap; // rax
  int v3; // eax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  RtlGetCompressionWorkSpaceSize(3LL, &v5, &v6);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  *(_QWORD *)(a1 + 432) = Heap;
  if ( !Heap )
    return 3221225495LL;
  v3 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 448) = 2 * v3;
  v7 = (unsigned int)(2 * v3);
  return ZwAllocateVirtualMemory(-1LL, a1 + 440, 0LL, &v7, 4096, 4);
}
