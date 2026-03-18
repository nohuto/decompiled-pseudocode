/*
 * XREFs of MiFindPagesForMdl @ 0x1400B38D4
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocateMdlPagesByLists @ 0x14005105C (MiAllocateMdlPagesByLists.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 */

unsigned __int64 __fastcall MiFindPagesForMdl(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        unsigned __int16 a9)
{
  __int64 v9; // rbp
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int16 *v13; // rdx
  int v14; // ebx
  unsigned __int64 v15; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v17; // r15
  int v18; // r8d
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r14
  __int64 v22; // r10
  __int64 v23; // rdx
  unsigned __int64 v24; // rbp
  bool v25; // cf
  unsigned __int16 v26; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-58h]
  unsigned __int64 v29; // [rsp+78h] [rbp-50h]

  v9 = a2;
  v28 = BugCheckParameter3;
  v10 = 0LL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    a3 &= ~2u;
    v26 = 0;
LABEL_3:
    v11 = &v26;
    goto LABEL_4;
  }
  if ( (a3 & 2) != 0 )
  {
    v26 = a9;
    goto LABEL_3;
  }
  v11 = (unsigned __int16 *)((char *)qword_1403CB6A0 + 2 * a9 * (unsigned __int16)KeNumberNodes);
  v10 = &v11[(unsigned __int16)KeNumberNodes];
LABEL_4:
  v12 = *(unsigned int *)(a2 + 40);
  v13 = v11 + 1;
  if ( v11 != &v26 )
    v13 = v10;
  v14 = a3 | 0x4000000;
  v29 = (unsigned __int64)v13;
  if ( (a3 & 0x100) == 0 )
    v14 = a3;
  v15 = v12 >> 12;
  if ( (v14 & 0x10052) != 0x10000 )
    goto LABEL_11;
  result = MiAllocateMdlPagesByLists(a1, v9, v14, a4, a7, a5 - v15, a9);
  v15 = (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12;
  if ( (_DWORD)result != 1 )
  {
    v14 &= ~0x10000u;
LABEL_11:
    v17 = -1LL;
    v18 = v14 & 0x40;
    if ( (v14 & 0x40) != 0 && (KeFeatureBits & 0x2000000000LL) != 0 )
      v17 = 0x40000LL;
    v19 = a7;
    v20 = a6;
    v21 = a7;
    v22 = a1;
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = *v11;
        result = *(_QWORD *)(v22 + 16);
        if ( !*(_QWORD *)(1984 * v23 + result + 1808) && (_DWORD)InitializationPhase )
          goto LABEL_54;
        if ( (v14 & 0x20) != 0 )
          break;
        result = MiFindContiguousPages(
                   v22,
                   v20,
                   v21,
                   0,
                   a5 - v15,
                   a4,
                   v23,
                   0x80000000,
                   v14 | 0x60002000u,
                   v9,
                   (__int64)&v27);
        v15 = (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12;
        if ( v15 == a5 )
          return result;
        if ( !a8 )
          goto LABEL_52;
        result = v20 + a8;
        if ( v20 + a8 <= v20 || result > v28 )
          goto LABEL_52;
        v20 += a8;
        if ( v21 + a8 <= v21 || v21 + a8 > v28 )
          v21 = v28;
        else
          v21 += a8;
        v18 = v14 & 0x40;
        v22 = a1;
        v19 = a7;
      }
      v27 = -1LL;
      if ( !a8 )
        break;
      v24 = a8;
      if ( !v18 || a5 - v15 < v17 )
        goto LABEL_38;
      result = MiFindContiguousPages(v22, v20, v21, a8, v17, a4, v23, 0x80000000, v14 | 0x60000000u, a2, (__int64)&v27);
      if ( (result & 0x80000000) != 0LL )
      {
        if ( a8 == v17 )
          result = 3221225659LL;
      }
      else
      {
        v24 = v17;
      }
      if ( (result & 0x80000000) == 0LL )
        goto LABEL_40;
      if ( (_DWORD)result != -1073741637 )
      {
        LODWORD(v22) = a1;
        goto LABEL_38;
      }
LABEL_39:
      if ( (result & 0x80000000) != 0LL )
      {
LABEL_52:
        v19 = a7;
        v18 = v14 & 0x40;
LABEL_53:
        v22 = a1;
LABEL_54:
        if ( (v14 & 2) != 0 )
          return result;
        if ( (unsigned __int64)++v11 >= v29 )
          return result;
        v20 = a6;
        v21 = v19;
LABEL_24:
        v9 = a2;
      }
      else
      {
LABEL_40:
        v15 += v24;
        if ( v15 == a5 )
          return result;
        v18 = v14 & 0x40;
        v22 = a1;
        v19 = a7;
        if ( (v14 & 0x40) != 0 )
          goto LABEL_24;
        v21 = v27 - 1;
        result = v27 - v20;
        v25 = v27 - v20 < v24;
        v9 = a2;
        if ( v25 )
          goto LABEL_53;
      }
    }
    v24 = a5 - v15;
LABEL_38:
    result = MiFindContiguousPages(v22, v20, v21, a8, v24, a4, *v11, 0x80000000, v14 | 0x60000000u, a2, (__int64)&v27);
    goto LABEL_39;
  }
  return result;
}
