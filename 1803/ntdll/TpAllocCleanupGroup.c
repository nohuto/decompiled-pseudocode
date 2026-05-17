/*
 * XREFs of TpAllocCleanupGroup @ 0x18007E350
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpAllocCleanupGroup(_QWORD *a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  __int64 Heap; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 result; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+40h] [rbp+8h]

  if ( !a1 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  else
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 | 8u, 80LL);
    v6 = (_QWORD *)Heap;
    v10 = Heap;
    if ( Heap )
    {
      *(_DWORD *)Heap = 1;
      *(_DWORD *)(Heap + 4) = 0;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_QWORD *)(Heap + 56) = 0LL;
      v7 = (_QWORD *)(Heap + 16);
      v7[1] = v7;
      *v7 = v7;
      v6[9] = v6 + 8;
      v6[8] = v6 + 8;
      result = 0LL;
      v6[4] = 0LL;
      v6[5] = 0LL;
      v6[6] = 0LL;
      v9 = 0;
      *a1 = v6;
    }
    else
    {
      result = 3221225495LL;
      v9 = -1073741801;
    }
    if ( (int)result < 0 )
    {
      if ( v6 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050, v10);
        return v9;
      }
    }
  }
  return result;
}
