/*
 * XREFs of RtlEnableThreadProfiling @ 0x1800D4520
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlEnableThreadProfiling(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  void *Heap; // rax
  unsigned __int64 v8; // rbx
  int v9; // edi

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    return 3221225713LL;
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 448LL);
  v8 = (unsigned __int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x1C0uLL);
  *(_DWORD *)v8 = 65984;
  *(_QWORD *)(v8 + 32) = a3;
  v9 = ZwSetInformationThread();
  if ( v9 < 0 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  else
    *a4 = v8;
  return (unsigned int)v9;
}
