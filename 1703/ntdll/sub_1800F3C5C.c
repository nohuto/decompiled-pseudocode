/*
 * XREFs of sub_1800F3C5C @ 0x1800F3C5C
 * Callers:
 *     sub_1800F3580 @ 0x1800F3580 (sub_1800F3580.c)
 *     sub_1800F36F0 @ 0x1800F36F0 (sub_1800F36F0.c)
 *     sub_1800F3C5C @ 0x1800F3C5C (sub_1800F3C5C.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800F353C @ 0x1800F353C (sub_1800F353C.c)
 *     sub_1800F3C5C @ 0x1800F3C5C (sub_1800F3C5C.c)
 */

int __fastcall sub_1800F3C5C(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdi
  _QWORD *Heap; // rax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h]
  __int64 v14; // [rsp+50h] [rbp+18h]
  __int64 v15; // [rsp+58h] [rbp+20h]

  v15 = a4;
  v14 = a3;
  v5 = a1[1];
  v6 = a2 + a3 - 1;
  if ( v6 >= v5 && a2 <= a1[2] )
  {
    if ( a2 <= v5 )
      v8 = 0LL;
    else
      v8 = (a2 - v5) / *a1;
    v6 = (a3 + a2 - v5 - 1) / *a1;
    v9 = (a3 + a2 - v5 - 1) % *a1;
    if ( v6 > 0xFF )
      v6 = 255LL;
    v13 = v6;
    if ( v8 <= v6 )
    {
      v10 = &a1[v8 + 7];
      while ( *a1 == 4096LL )
      {
        if ( !a4 )
        {
          v9 = v8 >> 3;
          *((_BYTE *)a1 + (v8 >> 3) + 24) |= 1 << (v8 & 7);
LABEL_21:
          v6 = v13;
          goto LABEL_22;
        }
        if ( *v10 && *v10 != a4 )
        {
          DbgPrint("Error\n", v9);
          a4 = v15;
          v6 = v13;
        }
        *v10 = a4;
LABEL_22:
        ++v8;
        ++v10;
        if ( v8 > v6 )
          return v6;
        a3 = v14;
      }
      if ( !*v10 )
      {
        Heap = RtlAllocateHeap(qword_180159A28, 0, 0x840uLL);
        *v10 = Heap;
        if ( !Heap )
        {
          LODWORD(v6) = DbgPrint("Not enough memory to complete\n");
          return v6;
        }
        sub_1800F353C(Heap, a1);
        a4 = v15;
        a3 = v14;
        *(_QWORD *)(*v10 + 8LL) = a1[1] + v8 * *a1;
        *(_QWORD *)(*v10 + 16LL) = a1[1] - 1LL + *a1 * (v8 + 1);
      }
      sub_1800F3C5C(*v10, a2, a3, a4);
      a4 = v15;
      goto LABEL_21;
    }
  }
  return v6;
}
