/*
 * XREFs of TpAllocTimer @ 0x180013F90
 * Callers:
 *     RtlCreateTimer @ 0x180011110 (RtlCreateTimer.c)
 *     sub_180082ED0 @ 0x180082ED0 (sub_180082ED0.c)
 * Callees:
 *     sub_18001425C @ 0x18001425C (sub_18001425C.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpAllocTimer(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // edi
  __int64 Heap; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a4;
  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    sub_1801058B8();
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 0x100000) | 8u, 360LL);
    v9 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      result = sub_18001425C(Heap, 0, a3, v4, (__int64)off_180110230, (__int64)off_1801101C0);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v9 + 80) = a2;
        *a1 = v9;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
