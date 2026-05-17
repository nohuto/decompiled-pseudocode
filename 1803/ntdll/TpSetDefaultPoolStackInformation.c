/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x180048900
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 *     sub_18004865C @ 0x18004865C (sub_18004865C.c)
 *     TpSetPoolStackInformation @ 0x180048A20 (TpSetPoolStackInformation.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1, char *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rcx
  _QWORD *Heap; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+20h] [rbp-18h]
  char v13; // [rsp+40h] [rbp+8h]

  v13 = 0;
  v12 = 0;
  if ( !a1 )
    return 3221225485LL;
  v5 = qword_18015D048;
  if ( !qword_18015D048 || *(_QWORD *)(qword_18015D048 + 8) < a1[1] || *(_QWORD *)qword_18015D048 < *a1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3B0, (unsigned __int64)a2, a3, a4);
    Heap = (_QWORD *)qword_18015D048;
    if ( qword_18015D048
      || (Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 786432) | 8u, 16LL),
          (qword_18015D048 = (__int64)Heap) != 0) )
    {
      v7 = a1[1];
      if ( Heap[1] < v7 )
      {
        Heap[1] = v7;
        v13 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v13 = 1;
      }
    }
    else
    {
      v12 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&qword_18015D3B0);
  }
  if ( v13 && v12 >= 0 )
  {
    v8 = sub_18004865C(v5, a2, (__int64)a3, a4);
    if ( v8 )
    {
      v12 = TpSetPoolStackInformation(v8, qword_18015D048);
      sub_180047198((const void **)&qword_18015D3B8, (unsigned __int64)&qword_18015D3B0, v9, v10);
    }
  }
  return (unsigned int)v12;
}
