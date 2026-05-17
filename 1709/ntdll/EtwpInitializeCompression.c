/*
 * XREFs of EtwpInitializeCompression @ 0x180083404
 * Callers:
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x1800834A0 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
{
  __int64 Heap; // rax
  int v3; // eax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  RtlGetCompressionWorkSpaceSize(3LL, &v5, &v6);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  *(_QWORD *)(a1 + 432) = Heap;
  if ( !Heap )
    return 3221225495LL;
  v3 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 448) = 2 * v3;
  v7 = (unsigned int)(2 * v3);
  return ZwAllocateVirtualMemory(-1LL, a1 + 440, 0LL, &v7, 4096, 4);
}
