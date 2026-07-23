/*
 * XREFs of sub_1800F0D74 @ 0x1800F0D74
 * Callers:
 *     sub_1800F0670 @ 0x1800F0670 (sub_1800F0670.c)
 *     sub_1800F07E4 @ 0x1800F07E4 (sub_1800F07E4.c)
 *     sub_1800F0D74 @ 0x1800F0D74 (sub_1800F0D74.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800F0624 @ 0x1800F0624 (sub_1800F0624.c)
 *     sub_1800F0D74 @ 0x1800F0D74 (sub_1800F0D74.c)
 */

int __fastcall sub_1800F0D74(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *Heap; // rax
  unsigned __int64 v14; // [rsp+50h] [rbp+8h]
  __int64 v16; // [rsp+60h] [rbp+18h]
  __int64 v17; // [rsp+68h] [rbp+20h]

  v17 = a4;
  v16 = a3;
  v5 = a2 + a3 - 1;
  if ( v5 >= a1[1] && a2 <= a1[2] )
  {
    v6 = a2 - a1[1];
    if ( a2 <= a1[1] )
      v7 = 0LL;
    else
      v7 = v6 / *a1;
    v5 = (v6 + a3 - 1) / *a1;
    v8 = (v6 + a3 - 1) % *a1;
    if ( v5 > 0xFF )
      v5 = 255LL;
    v14 = v5;
    if ( v7 <= v5 )
    {
      v9 = v7;
      v10 = (__int64)&a1[v7 + 7];
      while ( *a1 == 4096LL )
      {
        if ( !a4 )
        {
          *((_BYTE *)a1 + (v9 >> 3) + 24) |= 1 << (v9 & 7);
LABEL_21:
          v5 = v14;
          goto LABEL_22;
        }
        if ( *(_QWORD *)v10 && *(_QWORD *)v10 != a4 )
        {
          DbgPrint("Error\n", v8);
          a4 = v17;
          v5 = v14;
        }
        *(_QWORD *)v10 = a4;
LABEL_22:
        ++v7;
        v10 += 8LL;
        v9 = v7;
        if ( v7 > v5 )
          return v5;
        a3 = v16;
      }
      v11 = *(_QWORD *)v10;
      if ( !*(_QWORD *)v10 )
      {
        Heap = RtlAllocateHeap(qword_18015AA70, 0, 0x840uLL);
        *(_QWORD *)v10 = Heap;
        if ( !Heap )
        {
          LODWORD(v5) = DbgPrint("Not enough memory to complete\n");
          return v5;
        }
        sub_1800F0624(Heap, a1);
        a4 = v17;
        a3 = v16;
        *(_QWORD *)(*(_QWORD *)v10 + 8LL) = a1[1] + v9 * *a1;
        *(_QWORD *)(*(_QWORD *)v10 + 16LL) = a1[1] - 1LL + *a1 * (v9 + 1);
        v11 = *(_QWORD *)v10;
      }
      sub_1800F0D74(v11, a2, a3, a4);
      a4 = v17;
      goto LABEL_21;
    }
  }
  return v5;
}
