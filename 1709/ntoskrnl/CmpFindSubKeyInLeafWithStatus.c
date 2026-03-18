/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1404814F0
 * Callers:
 *     CmpMarkIndexDirty @ 0x140472FC8 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x140473308 (CmpRemoveSubKeyFromList.c)
 *     CmpAddToLeaf @ 0x1404740BC (CmpAddToLeaf.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405BC634 (CmpFindSubKeyByNameWithStatus.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareInIndex @ 0x140481810 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x140481960 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(__int64 a1, _WORD *a2, unsigned __int16 *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // eax
  unsigned int v6; // r12d
  _DWORD *v7; // rdi
  unsigned __int16 *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r14
  __int16 v11; // cx
  _WORD *v12; // r13
  unsigned int v13; // edx
  _BYTE *v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  __int64 v18; // r15
  WCHAR v19; // cx
  unsigned int v20; // edi
  int v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // edx
  bool v26; // cc
  int v27; // ebp
  int v28; // ebx
  _DWORD *v29; // r14
  int v30; // eax
  int v31; // ecx
  _DWORD *v32; // rax
  __int64 result; // rax
  _WORD *v34; // rbx
  int v35; // eax
  int v36; // [rsp+30h] [rbp-58h]
  int v37; // [rsp+34h] [rbp-54h]
  _WORD *v39; // [rsp+98h] [rbp+10h]

  v39 = a2;
  v5 = (unsigned __int16)a2[1];
  v6 = 0;
  v7 = a4;
  v36 = 0;
  v8 = a3;
  v9 = a1;
  v37 = v5 - 1;
  v10 = (unsigned int)(v5 - 1) >> 1;
  if ( !(_WORD)v5 )
  {
    *a4 = -1;
    *a5 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v11 = *a2;
    *v7 = -1;
    if ( ((v11 - 26220) & 0xFDFF) != 0 )
    {
      v34 = &a2[2 * v10];
      v35 = CmpDoCompareKeyName(v9, v8, *((unsigned int *)v34 + 1));
      v25 = v35;
      if ( v35 == 2 )
      {
LABEL_52:
        v29 = a4;
        goto LABEL_53;
      }
      if ( !v35 )
        *v7 = *((_DWORD *)v34 + 1);
    }
    else
    {
      v12 = &a2[4 * v10];
      if ( v11 != 26220 )
        goto LABEL_57;
      v13 = 4;
      v14 = v12 + 4;
      v15 = 0;
      while ( *v14 )
      {
        ++v15;
        ++v14;
        if ( v15 >= 4 )
          goto LABEL_7;
      }
      v13 = v15;
LABEL_7:
      v16 = *v8 >> 1;
      if ( v16 >= v13 )
        v16 = v13;
      v17 = 0;
      if ( v16 )
      {
        v18 = *((_QWORD *)v8 + 1);
        while ( 1 )
        {
          v19 = *(_WORD *)(v18 + 2LL * v17);
          v20 = *((unsigned __int8 *)v12 + v17 + 8);
          if ( v19 >= 0x61u )
            v21 = v19 <= 0x7Au ? v19 - 32 : RtlUpcaseUnicodeChar(v19);
          else
            v21 = v19;
          if ( v20 >= 0x61 )
            v22 = v20 > 0x7A ? RtlUpcaseUnicodeChar(v20) : v20 - 32;
          else
            v22 = v20;
          v23 = v21 - v22;
          if ( v23 )
            break;
          if ( ++v17 >= v16 )
          {
            v8 = a3;
            v7 = a4;
            v9 = a1;
            goto LABEL_18;
          }
        }
        v9 = a1;
        v26 = v23 <= 0;
        v8 = a3;
        v25 = 1;
        if ( v26 )
          v25 = -1;
      }
      else
      {
LABEL_57:
      {
LABEL_18:
        v24 = CmpDoCompareKeyName(v9, v8, *((unsigned int *)v12 + 1));
        v25 = v24;
        if ( v24 == 2 )
          goto LABEL_52;
      }
        if ( !v24 )
          *v7 = *((_DWORD *)v12 + 1);
      }
    }
    if ( v25 == 2 )
      goto LABEL_52;
    if ( !v25 )
    {
      *a5 = v10;
      return 0LL;
    }
    if ( v25 >= 0 )
    {
      v28 = v37;
      v27 = v10;
      v36 = v10;
    }
    else
    {
      v27 = v36;
      v28 = v10;
      v37 = v10;
    }
    if ( (unsigned int)(v28 - v27) <= 1 )
      break;
    a2 = v39;
    v7 = a4;
    v10 = v27 + ((unsigned int)(v28 - v27) >> 1);
  }
  v29 = a4;
  v30 = CmpCompareInIndex(v9, (_DWORD)v8, v27, (_DWORD)v39, (__int64)a4);
  if ( v30 == 2 )
  {
LABEL_53:
    v32 = a5;
LABEL_54:
    *v32 = 0x80000000;
    result = 3221225626LL;
    *v29 = -1;
    return result;
  }
  if ( !v30 )
  {
    *a5 = v27;
    return 0LL;
  }
  if ( v30 < 0 )
  {
    *a5 = v27;
    return 3221225524LL;
  }
  v31 = CmpCompareInIndex(v9, (_DWORD)v8, v28, (_DWORD)v39, (__int64)a4);
  v32 = a5;
  if ( v31 == 2 )
    goto LABEL_54;
  *a5 = v28;
  if ( v31 )
    return (unsigned int)-1073741772;
  return v6;
}
