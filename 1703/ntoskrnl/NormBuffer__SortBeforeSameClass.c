/*
 * XREFs of NormBuffer__SortBeforeSameClass @ 0x14023FE80
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x14023F8AC (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x14023F950 (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__PageLookup @ 0x1406EE9D4 (Normalization__PageLookup.c)
 *     Normalization__TableLookup @ 0x1406EE9EC (Normalization__TableLookup.c)
 */

char __fastcall NormBuffer__SortBeforeSameClass(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned __int16 *v7; // rdx
  unsigned __int16 *v8; // r11
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int16 *v17; // r11
  unsigned __int16 *v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[5];
  v4 = a1[10];
  a1[13] = v2;
  if ( v2 != v4 )
  {
    v19 = (unsigned __int16 *)(v2 - 2);
    LODWORD(v2) = NormBuffer__GetCurrentOutputChar((__int64)a1, &v19);
    v7 = (unsigned __int16 *)(v6 - 2);
    v8 = (unsigned __int16 *)(v6 - 4);
    if ( *(int *)(v5 + 88) <= 0xFFFF )
      v8 = v7;
    v9 = v2;
    if ( v19 != v8 )
    {
      v10 = *(_QWORD *)(v5 + 112);
      do
      {
        LOBYTE(v11) = Normalization__PageLookup(v10, v9);
        LOBYTE(v2) = Normalization__TableLookup(v13, v12, v11) & 0x3F;
        if ( (unsigned __int8)v2 < a2 )
          break;
        *(_QWORD *)(v16 + 104) = v15;
        v19 = (unsigned __int16 *)(v15 - 2);
        LODWORD(v2) = NormBuffer__GetCurrentOutputChar(v14, &v19);
        v9 = v2;
      }
      while ( v19 != v17 );
    }
  }
  return v2;
}
