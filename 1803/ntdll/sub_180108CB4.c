/*
 * XREFs of sub_180108CB4 @ 0x180108CB4
 * Callers:
 *     sub_180109250 @ 0x180109250 (sub_180109250.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     sub_1800484B8 @ 0x1800484B8 (sub_1800484B8.c)
 *     sub_18005756C @ 0x18005756C (sub_18005756C.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 */

__int64 __fastcall sub_180108CB4(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned __int64 Heap; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  _DWORD *v11; // rsi
  _BYTE *v12; // r14
  struct _PEB_LDR_DATA *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  struct _PEB_LDR_DATA *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 184LL);
  if ( !Heap )
  {
    v10 = -1073741801;
LABEL_9:
    v15 = v10;
    goto LABEL_10;
  }
  v10 = sub_180059230(
          (volatile signed __int32 **)&qword_18015D3B8,
          (char *)&qword_18015D3B0,
          (volatile signed __int32 **)&v16,
          v9);
  v15 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *(_QWORD *)(Heap + 64) = sub_180108E80;
    v11 = (_DWORD *)(Heap + 72);
    v12 = (_BYTE *)(Heap + 76);
    if ( v16 )
    {
      sub_180024854((__int64)v16, (_DWORD *)(Heap + 72), (BYTE *)(Heap + 76));
    }
    else
    {
      *v11 = 0;
      *v12 = 0;
    }
    *(_QWORD *)(Heap + 40) = 0LL;
    *(_QWORD *)(Heap + 56) = Heap + 48;
    *(_QWORD *)(Heap + 48) = Heap + 48;
    *(_QWORD *)(Heap + 8) = off_1801106C0;
    *(_DWORD *)(Heap + 16) = *v11;
    *(_BYTE *)(Heap + 20) = *v12;
    v13 = v16;
    *(_QWORD *)(Heap + 80) = v16;
    v10 = sub_18005756C(a3, Heap + 8, v13, v9);
    v15 = v10;
    if ( v10 >= 0 )
    {
      ++*(_DWORD *)(Heap + 88);
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 104) = 0LL;
      *(_QWORD *)(Heap + 112) = 0LL;
      *a1 = Heap;
      v10 = 0;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v10 < 0 )
  {
    if ( v16 )
      sub_1800484B8((__int64)v16, v6, v8, v9);
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v15;
    }
  }
  return (unsigned int)v10;
}
