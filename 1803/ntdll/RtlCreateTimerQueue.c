/*
 * XREFs of RtlCreateTimerQueue @ 0x180056500
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800588B4 @ 0x1800588B4 (sub_1800588B4.c)
 *     sub_180058F2C @ 0x180058F2C (sub_180058F2C.c)
 */

__int64 __fastcall RtlCreateTimerQueue(__int64 *a1)
{
  int v2; // ebx
  __int64 Heap; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h]

  v7 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a1 = 0LL;
  v2 = sub_180058F2C(&v7, 0LL);
  if ( v2 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 48LL);
    v4 = Heap;
    v8 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_QWORD *)(Heap + 16) = 0LL;
      v5 = (_QWORD *)(Heap + 24);
      v5[1] = v5;
      *v5 = v5;
      *(_QWORD *)(v4 + 40) = 0LL;
      *a1 = v4;
      v2 = 0;
    }
    else
    {
      v2 = -1073741801;
    }
  }
  sub_1800588B4(v7);
  return (unsigned int)v2;
}
