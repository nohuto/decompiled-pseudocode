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

unsigned __int64 __fastcall sub_1800F0D74(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *Heap; // rax
  unsigned __int64 v13; // [rsp+50h] [rbp+8h]
  __int64 v15; // [rsp+60h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v15 = a3;
  result = a2 + a3 - 1;
  if ( result >= a1[1] && a2 <= a1[2] )
  {
    v6 = a2 - a1[1];
    if ( a2 <= a1[1] )
      v7 = 0LL;
    else
      v7 = v6 / *a1;
    result = (v6 + a3 - 1) / *a1;
    v8 = (v6 + a3 - 1) % *a1;
    if ( result > 0xFF )
      result = 255LL;
    v13 = result;
    if ( v7 <= result )
    {
      v9 = v7;
      v10 = (__int64)&a1[v7 + 7];
      while ( *a1 == 4096LL )
      {
        if ( !a4 )
        {
          *((_BYTE *)a1 + (v9 >> 3) + 24) |= 1 << (v9 & 7);
LABEL_21:
          result = v13;
          goto LABEL_22;
        }
        if ( *(_QWORD *)v10 )
        {
          if ( *(_QWORD *)v10 != a4 )
          {
            DbgPrint("Error\n", v8);
            a4 = v16;
            result = v13;
          }
        }
        *(_QWORD *)v10 = a4;
LABEL_22:
        ++v7;
        v10 += 8LL;
        v9 = v7;
        if ( v7 > result )
          return result;
        a3 = v15;
      }
      v11 = *(_QWORD *)v10;
      if ( !*(_QWORD *)v10 )
      {
        Heap = (_QWORD *)RtlAllocateHeap(qword_18015AA70, 0, 2112LL);
        *(_QWORD *)v10 = Heap;
        if ( !Heap )
          return DbgPrint("Not enough memory to complete\n");
        sub_1800F0624(Heap, a1);
        a4 = v16;
        a3 = v15;
        *(_QWORD *)(*(_QWORD *)v10 + 8LL) = a1[1] + v9 * *a1;
        *(_QWORD *)(*(_QWORD *)v10 + 16LL) = a1[1] - 1LL + *a1 * (v9 + 1);
        v11 = *(_QWORD *)v10;
      }
      sub_1800F0D74(v11, a2, a3, a4);
      a4 = v16;
      goto LABEL_21;
    }
  }
  return result;
}
