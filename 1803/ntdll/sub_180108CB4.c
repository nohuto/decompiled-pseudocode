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

__int64 __fastcall sub_180108CB4(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  char *Heap; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  _DWORD *v11; // rsi
  char *v12; // r14
  _PEB_LDR_DATA *v13; // rcx
  unsigned __int32 v15; // [rsp+20h] [rbp-28h]
  _PEB_LDR_DATA *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v10 = -1073741801;
LABEL_9:
    v15 = v10;
    goto LABEL_10;
  }
  v10 = sub_180059230(
          (volatile signed __int32 **)&qword_18015D3B8,
          (PPEB_LDR_DATA)&stru_18015D3B0,
          (volatile signed __int32 **)&v16);
  v15 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *((_QWORD *)Heap + 8) = sub_180108E80;
    v11 = Heap + 72;
    v12 = Heap + 76;
    if ( v16 )
    {
      sub_180024854((__int64)v16, (_DWORD *)Heap + 18, (BYTE *)Heap + 76);
    }
    else
    {
      *v11 = 0;
      *v12 = 0;
    }
    *((_QWORD *)Heap + 5) = 0LL;
    *((_QWORD *)Heap + 7) = Heap + 48;
    *((_QWORD *)Heap + 6) = Heap + 48;
    *((_QWORD *)Heap + 1) = off_1801106C0;
    *((_DWORD *)Heap + 4) = *v11;
    Heap[20] = *v12;
    v13 = v16;
    *((_QWORD *)Heap + 10) = v16;
    v10 = sub_18005756C(a3, (__int64)(Heap + 8), v13);
    v15 = v10;
    if ( v10 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      *((_QWORD *)Heap + 12) = Heap + 96;
      *((_QWORD *)Heap + 13) = 0LL;
      *((_QWORD *)Heap + 14) = 0LL;
      *a1 = Heap;
      v10 = 0;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v10 < 0 )
  {
    if ( v16 )
      sub_1800484B8(v16, v6, v8, v9);
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v15;
    }
  }
  return (unsigned int)v10;
}
