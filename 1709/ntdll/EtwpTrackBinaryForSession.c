/*
 * XREFs of EtwpTrackBinaryForSession @ 0x18010A50C
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180067534 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlCompareMemory @ 0x1800A4640 (RtlCompareMemory.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, __int64 a3)
{
  size_t v3; // r13
  __int64 *v4; // r14
  __int64 *v5; // rbx
  unsigned int v6; // edi
  size_t v10; // rcx
  __int64 Heap; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rsi
  __int64 *i; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax

  v3 = *(unsigned __int16 *)a2;
  v4 = (__int64 *)(a1 + 480);
  v5 = *(__int64 **)(a1 + 480);
  v6 = 0;
  if ( v5 == (__int64 *)(a1 + 480) )
  {
LABEL_7:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v3 + 46));
    if ( !Heap )
      return 14;
    *(_DWORD *)(Heap + 40) = v3 + 2;
    memmove((void *)(Heap + 44), a2[1], v3);
    v12 = Heap + 24;
    *(_WORD *)(v3 + Heap + 44) = 0;
    *(_QWORD *)(Heap + 32) = Heap + 24;
    *(_QWORD *)(Heap + 24) = Heap + 24;
    *(_DWORD *)(Heap + 16) = 0;
    v13 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
    if ( !v13 )
      return 14;
    *(_OWORD *)(v13 + 16) = *(_OWORD *)a3;
    v14 = *(_QWORD *)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
      __fastfail(3u);
    *(_QWORD *)v13 = v14;
    *(_QWORD *)(v13 + 8) = v12;
    *(_QWORD *)(v14 + 8) = v13;
    *(_QWORD *)v12 = v13;
    *(_DWORD *)(Heap + 16) = 1;
    *(_DWORD *)(a1 + 332) |= 0x10u;
    v20 = *v4;
    if ( *(__int64 **)(*v4 + 8) != v4 )
      __fastfail(3u);
    *(_QWORD *)Heap = v20;
    *(_QWORD *)(Heap + 8) = v4;
    *(_QWORD *)(v20 + 8) = Heap;
    *v4 = Heap;
    goto LABEL_25;
  }
  v10 = v3 + 2;
  while ( *((_DWORD *)v5 + 10) != v10 )
  {
LABEL_6:
    v5 = (__int64 *)*v5;
    if ( v5 == v4 )
      goto LABEL_7;
  }
  if ( RtlCompareMemory((char *)v5 + 44, a2[1], v3) != v3 )
  {
    v10 = v3 + 2;
    goto LABEL_6;
  }
  v15 = v5 + 3;
  for ( i = (__int64 *)v5[3]; i != v15; i = (__int64 *)*i )
  {
    v17 = *(_QWORD *)a3 - i[2];
    if ( *(_QWORD *)a3 == i[2] )
      v17 = *(_QWORD *)(a3 + 8) - i[3];
    if ( !v17 )
      return v6;
  }
  v18 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
  if ( v18 )
  {
    *(_OWORD *)(v18 + 16) = *(_OWORD *)a3;
    v19 = *v15;
    if ( *(__int64 **)(*v15 + 8) != v15 )
      __fastfail(3u);
    *(_QWORD *)v18 = v19;
    *(_QWORD *)(v18 + 8) = v15;
    *(_QWORD *)(v19 + 8) = v18;
    *v15 = v18;
    ++*((_DWORD *)v5 + 4);
LABEL_25:
    *(_DWORD *)(a1 + 332) |= 0x10u;
    return v6;
  }
  return 14;
}
