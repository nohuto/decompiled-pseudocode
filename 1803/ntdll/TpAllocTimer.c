/*
 * XREFs of TpAllocTimer @ 0x180058CD0
 * Callers:
 *     sub_1800569F0 @ 0x1800569F0 (sub_1800569F0.c)
 *     sub_18005712C @ 0x18005712C (sub_18005712C.c)
 *     RtlCreateTimer @ 0x180057FF0 (RtlCreateTimer.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180058DCC @ 0x180058DCC (sub_180058DCC.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpAllocTimer(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // ebp
  struct _PEB_LDR_DATA *v7; // r14
  __int64 Heap; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  v7 = Ldr;
  if ( !Ldr
    || !a2
    || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 0x100000) | 8u, 360LL);
    v9 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      result = sub_180058DCC(Heap, 0, v5, v4, (__int64)off_180110170, (__int64)off_1801106E0);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v9 + 80) = a2;
        *(_QWORD *)&v7->Length = v9;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
