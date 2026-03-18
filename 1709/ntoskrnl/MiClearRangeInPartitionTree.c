/*
 * XREFs of MiClearRangeInPartitionTree @ 0x140236CD0
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x140236664 (MiAddMdlToPartitionTree.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiClearRangeInPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  signed __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  char v18; // cl
  __int64 v19; // [rsp+58h] [rbp+10h]

  v3 = a2;
  v5 = a2 & 0x7FFFFFFFFFFC0000LL | v19 & 0x8000000000000000uLL;
  v6 = a3;
  result = a2 - (a2 & 0x7FFFFFFFFFFC0000LL);
  v8 = (result + a3 + 0x3FFFF) >> 18;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *a1;
      if ( *a1 )
      {
        v10 = v5 & 0x7FFFFFFFFFFFFFFFLL;
        do
        {
          v11 = *(_QWORD *)(v9 + 24) & 0x7FFFFFFFFFFFFFFFLL;
          if ( v10 < v11 )
          {
            v9 = *(_QWORD *)v9;
          }
          else
          {
            if ( v10 <= v11 )
              break;
            v9 = *(_QWORD *)(v9 + 8);
          }
        }
        while ( v9 );
      }
      v12 = *(_QWORD *)(v9 + 24) & 0x7FFFFFFFFFFFFFFFLL;
      v13 = v12 - v3 + 0x40000;
      if ( v13 > v6 )
        v13 = v6;
      RtlClearBitsEx(v9 + 32, v3 - v12, v13);
      v14 = *(_QWORD *)(v9 + 32);
      v15 = v14 - 1;
      if ( !v14 )
        goto LABEL_22;
      if ( v14 <= 1 )
        break;
      v16 = *(_QWORD **)(v9 + 40);
      v17 = &v16[v15 >> 6];
      if ( v16 != v17 )
      {
        while ( !*v16 )
        {
          if ( ++v16 == v17 )
          {
            v18 = ~(_BYTE)v15;
            goto LABEL_20;
          }
        }
        goto LABEL_22;
      }
      v18 = 64 - v14;
LABEL_20:
      if ( (*v16 & (0xFFFFFFFFFFFFFFFFuLL >> v18)) == 0 )
        goto LABEL_21;
LABEL_22:
      v3 += v13;
      result = (v5 ^ (v5 + 0x40000)) & 0x7FFFFFFFFFFFFFFFLL;
      v6 -= v13;
      v5 ^= result;
      if ( !--v8 )
        return result;
    }
    if ( _bittest64(*(const signed __int64 **)(v9 + 40), 0) )
      goto LABEL_22;
LABEL_21:
    RtlAvlRemoveNode(a1, v9);
    ExFreePoolWithTag(*(PVOID *)(v9 + 40), 0);
    ExFreePoolWithTag((PVOID)v9, 0);
    goto LABEL_22;
  }
  return result;
}
