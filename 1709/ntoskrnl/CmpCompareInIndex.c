/*
 * XREFs of CmpCompareInIndex @ 0x140481810
 * Callers:
 *     CmpAddToLeaf @ 0x1404740BC (CmpAddToLeaf.c)
 *     CmpFindSubKeyInRoot @ 0x14047FAD0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404814F0 (CmpFindSubKeyInLeafWithStatus.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x140481960 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpCompareInIndex(__int64 a1, unsigned __int16 *a2, int a3, __int16 *a4, _DWORD *a5)
{
  __int16 v5; // r10
  _DWORD *v7; // rdi
  bool v9; // zf
  __int16 *v10; // r14
  __int64 v11; // rdi
  _BYTE *v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ebp
  __int64 v15; // r15
  WCHAR v16; // cx
  unsigned int v17; // esi
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 result; // rax
  int v24; // eax
  __int16 *v25; // rbx
  unsigned int v26; // eax

  v5 = *a4;
  v7 = a5;
  v9 = ((*a4 - 26220) & 0xFDFF) == 0;
  *a5 = -1;
  if ( !v9 )
  {
    v25 = &a4[2 * a3];
    v26 = CmpDoCompareKeyName(a1, a2, *((unsigned int *)v25 + 1));
    v22 = v26;
    if ( v26 != 2 )
    {
      if ( v26 )
        return v22;
      v24 = *((_DWORD *)v25 + 1);
      goto LABEL_31;
    }
    return 2LL;
  }
  v10 = &a4[4 * a3];
  if ( v5 != 26220 )
  {
LABEL_17:
    v21 = CmpDoCompareKeyName(a1, a2, *((unsigned int *)v10 + 1));
    v22 = v21;
    if ( v21 != 2 )
    {
      if ( v21 )
        return v22;
      v24 = *((_DWORD *)v10 + 1);
LABEL_31:
      *v7 = v24;
      return v22;
    }
    return 2LL;
  }
  v11 = 0LL;
  v12 = v10 + 4;
  v13 = 0;
  v14 = 4;
  while ( *v12 )
  {
    ++v13;
    ++v12;
    if ( v13 >= 4 )
      goto LABEL_6;
  }
  v14 = v13;
LABEL_6:
  if ( *a2 >> 1 < v14 )
    v14 = *a2 >> 1;
  if ( !v14 )
  {
LABEL_16:
    v7 = a5;
    goto LABEL_17;
  }
  v15 = *((_QWORD *)a2 + 1);
  while ( 1 )
  {
    v16 = *(_WORD *)(v15 + 2 * v11);
    v17 = *((unsigned __int8 *)v10 + v11 + 8);
    if ( v16 >= 0x61u )
      v18 = v16 <= 0x7Au ? v16 - 32 : RtlUpcaseUnicodeChar(v16);
    else
      v18 = v16;
    if ( v17 >= 0x61 )
      v19 = v17 <= 0x7A ? v17 - 32 : RtlUpcaseUnicodeChar(v17);
    else
      v19 = v17;
    v20 = v18 - v19;
    if ( v20 )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v14 )
      goto LABEL_16;
  }
  result = 1LL;
  if ( v20 <= 0 )
    return 0xFFFFFFFFLL;
  return result;
}
