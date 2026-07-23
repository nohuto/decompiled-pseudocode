/*
 * XREFs of sub_180030D2C @ 0x180030D2C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180030CC8 @ 0x180030CC8 (sub_180030CC8.c)
 *     sub_180030E7C @ 0x180030E7C (sub_180030E7C.c)
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     sub_180035DEC @ 0x180035DEC (sub_180035DEC.c)
 */

__int64 __fastcall sub_180030D2C(__int64 a1)
{
  bool v2; // cc
  wchar_t *Heap; // r15
  __int64 v4; // rax
  int v5; // edi
  char v6; // si
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  int v13; // [rsp+20h] [rbp-38h] BYREF
  wchar_t *v14; // [rsp+28h] [rbp-30h]
  __int16 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0;
  if ( !a1 )
    return 3221225473LL;
  v2 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v2 )
    return 3221225473LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap )
    return 3221225495LL;
  v4 = *(unsigned __int16 *)(a1 + 4);
  v5 = v4 - 1;
  if ( (int)v4 - 1 >= 0 )
  {
    v6 = v4 - 1;
    v7 = 6 * v4 - 6;
    v8 = 6LL * v5;
    do
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( !*(_WORD *)(v7 + v9) )
        goto LABEL_13;
      v14 = Heap;
      v13 = 11141120;
      if ( (int)sub_180035DEC(qword_18015D000, v8 + v9, &v13) < 0 )
        goto LABEL_13;
      if ( *((_DWORD *)qword_18015D000 + 30) < 0x3E8u )
      {
        LOBYTE(v10) = 1;
        v11 = sub_1800352EC(qword_18015D000, v14, v10, &v15);
      }
      else
      {
        if ( (int)sub_180030E7C(qword_18015D000, v14) >= 0 )
          goto LABEL_12;
        v11 = sub_180030CC8((__int64)qword_18015D000, v14);
      }
      if ( v11 >= 0 )
LABEL_12:
        *(_QWORD *)(a1 + 32) |= 1LL << v6;
LABEL_13:
      --v6;
      v8 -= 6LL;
      v7 -= 6LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
