/*
 * XREFs of sub_180004B3C @ 0x180004B3C
 * Callers:
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x1800836A0 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall sub_180004B3C(__int64 a1)
{
  PVOID Heap; // rax
  int v3; // eax
  ULONG CompressBufferWorkSpaceSize; // [rsp+40h] [rbp+8h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  RtlGetCompressionWorkSpaceSize(3u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, CompressBufferWorkSpaceSize);
  *(_QWORD *)(a1 + 432) = Heap;
  if ( !Heap )
    return -1073741801;
  v3 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 448) = 2 * v3;
  RegionSize = (unsigned int)(2 * v3);
  return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 440), 0LL, &RegionSize, 0x1000u, 4u);
}
