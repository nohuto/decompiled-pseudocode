/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x140501DA0
 * Callers:
 *     CmpMarkIndexDirty @ 0x1404D114C (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1404D1F10 (CmpRemoveSubKeyFromList.c)
 *     CmpAddToLeaf @ 0x1404D2940 (CmpAddToLeaf.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404D2CDC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 * Callees:
 *     CmpDoCompareKeyName @ 0x1404D2F90 (CmpDoCompareKeyName.c)
 *     CmpCompareInIndex @ 0x140501AE0 (CmpCompareInIndex.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(
        __int64 a1,
        __int16 *a2,
        const UNICODE_STRING *a3,
        _DWORD *a4,
        int *a5)
{
  int v5; // eax
  const UNICODE_STRING *v6; // rdi
  _DWORD *v7; // rsi
  __int64 v8; // r15
  int v9; // r12d
  __int64 v10; // r14
  __int16 v11; // cx
  __int16 *v12; // r13
  unsigned int v13; // edx
  _BYTE *v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  wchar_t *Buffer; // r15
  WCHAR v19; // cx
  unsigned int v20; // edi
  int v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // edx
  int v26; // esi
  _DWORD *v27; // r14
  int v28; // eax
  int v29; // ecx
  int *v30; // rax
  __int64 result; // rax
  __int16 *v32; // rbx
  int v33; // eax
  int v34; // [rsp+30h] [rbp-58h]
  __int16 *v36; // [rsp+98h] [rbp+10h]

  v36 = a2;
  v5 = (unsigned __int16)a2[1];
  v6 = a3;
  v7 = a4;
  v8 = a1;
  v34 = 0;
  v9 = v5 - 1;
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
      v32 = &a2[2 * v10];
      v33 = CmpDoCompareKeyName(v8, v6, *((unsigned int *)v32 + 1));
      v25 = v33;
      if ( v33 == 2 )
      {
LABEL_52:
        v27 = a4;
        goto LABEL_53;
      }
      if ( !v33 )
        *v7 = *((_DWORD *)v32 + 1);
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
      v16 = v6->Length >> 1;
      if ( v16 >= v13 )
        v16 = v13;
      v17 = 0;
      if ( v16 )
      {
        Buffer = v6->Buffer;
        while ( 1 )
        {
          v19 = Buffer[v17];
          v20 = *((unsigned __int8 *)v12 + v17 + 8);
          if ( v19 >= 0x61u )
            v21 = v19 > 0x7Au ? RtlUpcaseUnicodeChar(v19) : v19 - 32;
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
            v6 = a3;
            v7 = a4;
            v8 = a1;
            goto LABEL_18;
          }
        }
        v6 = a3;
        v8 = a1;
        v25 = 1;
        if ( v23 <= 0 )
          v25 = -1;
      }
      else
      {
LABEL_57:
      {
LABEL_18:
        v24 = CmpDoCompareKeyName(v8, v6, *((unsigned int *)v12 + 1));
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
      break;
    if ( v25 < 0 )
    {
      v26 = v34;
      v9 = v10;
    }
    else
    {
      v26 = v10;
      v34 = v10;
    }
    if ( (unsigned int)(v9 - v26) <= 1 )
    {
      v27 = a4;
      v28 = CmpCompareInIndex(v8, v6, v26, v36, a4);
      if ( v28 != 2 )
      {
        if ( !v28 )
        {
          *a5 = v26;
          return 0LL;
        }
        if ( v28 < 0 )
        {
          *a5 = v26;
          return 3221225524LL;
        }
        v29 = CmpCompareInIndex(v8, v6, v9, v36, a4);
        v30 = a5;
        if ( v29 != 2 )
        {
          *a5 = v9;
          if ( !v29 )
            return 0LL;
          return 3221225524LL;
        }
LABEL_54:
        *v30 = 0x80000000;
        result = 3221225626LL;
        *v27 = -1;
        return result;
      }
LABEL_53:
      v30 = a5;
      goto LABEL_54;
    }
    a2 = v36;
    v10 = v26 + ((unsigned int)(v9 - v26) >> 1);
    v7 = a4;
  }
  *a5 = v10;
  return 0LL;
}
