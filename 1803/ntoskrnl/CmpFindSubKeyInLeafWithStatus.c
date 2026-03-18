/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1404A8F60
 * Callers:
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpAddToLeaf @ 0x140513600 (CmpAddToLeaf.c)
 *     CmpRemoveSubKeyFromList @ 0x140517418 (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirty @ 0x14057076C (CmpMarkIndexDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1405DDE50 (CmpFindSubKeyByNameWithStatus.c)
 * Callees:
 *     CmpCompareInIndex @ 0x1404A8E10 (CmpCompareInIndex.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x1404A9790 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(__int64 a1, __int64 a2, unsigned __int16 *a3, _DWORD *a4, int *a5)
{
  int v5; // eax
  unsigned __int16 *v6; // rsi
  _DWORD *v7; // rdi
  __int64 v9; // rbp
  __int64 v10; // r15
  __int16 v11; // cx
  __int64 v12; // r13
  unsigned int v13; // edx
  _BYTE *v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ebp
  unsigned int v17; // edi
  __int64 v18; // r14
  WCHAR v19; // cx
  unsigned int v20; // esi
  int v21; // ebx
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // ebx
  int v27; // edi
  unsigned int v28; // r15d
  _DWORD *v29; // r14
  int v30; // eax
  int v31; // ecx
  int *v32; // rax
  __int64 result; // rax
  int v34; // eax
  int v35; // [rsp+30h] [rbp-58h]
  int v37; // [rsp+98h] [rbp+10h]

  v5 = *(unsigned __int16 *)(a2 + 2);
  v6 = a3;
  v7 = a4;
  v37 = 0;
  v9 = a1;
  v35 = v5 - 1;
  v10 = (unsigned int)(v5 - 1) >> 1;
  if ( !(_WORD)v5 )
  {
    *a4 = -1;
    *a5 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v11 = *(_WORD *)a2;
    *v7 = -1;
    if ( ((v11 - 26220) & 0xFDFF) != 0 )
    {
      v34 = CmpDoCompareKeyName(v9, v6, *(unsigned int *)(a2 + 4 * v10 + 4));
      v25 = v34;
      if ( v34 == 2 )
      {
LABEL_52:
        v29 = a4;
        goto LABEL_53;
      }
      if ( !v34 )
        *v7 = *(_DWORD *)(a2 + 4 * v10 + 4);
    }
    else
    {
      v12 = a2 + 8 * v10;
      if ( v11 == 26220 )
      {
        v13 = 4;
        v14 = (_BYTE *)(v12 + 8);
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
        v16 = 0;
        v17 = *v6 >> 1;
        if ( v17 >= v13 )
          v17 = v13;
        if ( v17 )
        {
          v18 = *((_QWORD *)v6 + 1);
          while ( 1 )
          {
            v19 = *(_WORD *)(v18 + 2LL * v16);
            v20 = *(unsigned __int8 *)(v16 + v12 + 8);
            if ( v19 >= 0x61u )
              v21 = v19 <= 0x7Au ? v19 - 32 : RtlUpcaseUnicodeChar(v19);
            else
              v21 = v19;
            if ( v20 >= 0x61 )
              v22 = v20 <= 0x7A ? v20 - 32 : RtlUpcaseUnicodeChar(v20);
            else
              v22 = v20;
            v23 = v21 - v22;
            if ( v23 )
              break;
            if ( ++v16 >= v17 )
            {
              v6 = a3;
              goto LABEL_18;
            }
          }
          v6 = a3;
          v9 = a1;
          v25 = 1;
          if ( v23 <= 0 )
            v25 = -1;
          goto LABEL_26;
        }
LABEL_18:
        v9 = a1;
        v7 = a4;
      }
      v24 = CmpDoCompareKeyName(v9, v6, *(unsigned int *)(v12 + 4));
      v25 = v24;
      if ( v24 == 2 )
        goto LABEL_52;
      if ( !v24 )
        *v7 = *(_DWORD *)(v12 + 4);
    }
LABEL_26:
    if ( v25 == 2 )
      goto LABEL_52;
    if ( !v25 )
      break;
    v26 = v37;
    if ( v25 >= 0 )
    {
      v26 = v10;
      LODWORD(v10) = v35;
    }
    v27 = v10;
    v35 = v10;
    v28 = v10 - v26;
    v37 = v26;
    if ( v28 <= 1 )
    {
      v29 = a4;
      v30 = CmpCompareInIndex(v9, v6, v26, (__int16 *)a2, a4);
      if ( v30 != 2 )
      {
        if ( !v30 )
        {
          *a5 = v26;
          return 0LL;
        }
        if ( v30 < 0 )
        {
          *a5 = v26;
          return 3221225524LL;
        }
        v31 = CmpCompareInIndex(v9, v6, v27, (__int16 *)a2, a4);
        v32 = a5;
        if ( v31 != 2 )
        {
          *a5 = v27;
          if ( !v31 )
            return 0LL;
          return 3221225524LL;
        }
LABEL_54:
        *v32 = 0x80000000;
        result = 3221225626LL;
        *v29 = -1;
        return result;
      }
LABEL_53:
      v32 = a5;
      goto LABEL_54;
    }
    v7 = a4;
    v10 = v26 + (v28 >> 1);
  }
  *a5 = v10;
  return 0LL;
}
