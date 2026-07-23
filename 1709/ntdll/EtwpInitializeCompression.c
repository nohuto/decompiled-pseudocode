/*
 * XREFs of EtwpInitializeCompression @ 0x180083404
 * Callers:
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x1800834A0 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall EtwpInitializeCompression(__int64 a1)
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
