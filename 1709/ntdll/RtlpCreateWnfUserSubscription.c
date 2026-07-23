/*
 * XREFs of RtlpCreateWnfUserSubscription @ 0x18006E008
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006DBB4 (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpCreateWnfUserSubscription(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  _QWORD *Heap; // rax
  _QWORD *v12; // rbx
  struct _TEB *v13; // rax
  void *SubProcessTag; // rcx
  __int64 result; // rax

  *a1 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA8uLL);
  v12 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0xA8uLL);
  *(_DWORD *)v12 = 11012372;
  v13 = NtCurrentTeb();
  *a1 = v12;
  SubProcessTag = v13->SubProcessTag;
  v12[3] = 0LL;
  v12[11] = 0LL;
  *((_DWORD *)v12 + 24) = 0;
  v12[13] = 0LL;
  v12[14] = 0LL;
  v12[19] = 0LL;
  *((_DWORD *)v12 + 40) = 0;
  v12[9] = a5;
  *((_DWORD *)v12 + 15) = a6;
  *((_DWORD *)v12 + 16) = a7;
  result = 0LL;
  v12[6] = SubProcessTag;
  v12[4] = a3;
  v12[5] = a4;
  *((_DWORD *)v12 + 14) = a2;
  *((_DWORD *)v12 + 20) = 1;
  return result;
}
