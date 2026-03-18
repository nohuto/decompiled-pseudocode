/*
 * XREFs of PnpRegMultiSzToUnicodeStrings @ 0x140844CE4
 * Callers:
 *     PiInitCacheGroupInformation @ 0x140844C14 (PiInitCacheGroupInformation.c)
 * Callees:
 *     PnpFreeUnicodeStringList @ 0x14015199C (PnpFreeUnicodeStringList.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRegMultiSzToUnicodeStrings(_DWORD *a1, PVOID **a2, unsigned int *a3)
{
  PVOID **v3; // r12
  _WORD *v5; // rcx
  _WORD *v6; // rdi
  unsigned int v7; // edx
  _WORD *v8; // rax
  unsigned int v9; // eax
  PVOID *PoolWithTag; // rax
  unsigned int v11; // ebp
  _WORD *v12; // rbx
  const void *v13; // r15
  _WORD *v14; // rsi
  unsigned int v16; // r14d
  PVOID v17; // rax
  PVOID *v18; // r12
  __int64 v19; // r13
  PVOID *v20; // rcx
  unsigned int v21; // ebx
  PVOID v22; // rax
  PVOID *v23; // rdi
  unsigned int v24; // [rsp+60h] [rbp+8h]

  v3 = a2;
  if ( a1[1] != 7 )
    return 3221225485LL;
  v5 = (_WORD *)((char *)a1 + (unsigned int)a1[2]);
  v6 = (_WORD *)((char *)v5 + (unsigned int)a1[3]);
  v7 = 0;
  if ( v5 != v6 )
  {
    v8 = v5 + 1;
    do
    {
      if ( !*v5 )
      {
        ++v7;
        if ( v8 == v6 || !*v8 )
          break;
      }
      ++v5;
      ++v8;
    }
    while ( v5 != v6 );
  }
  v9 = v7 + 1;
  if ( v5 != v6 )
    v9 = v7;
  v24 = v9;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 16LL * v9, 0x75737050u);
  *v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v11 = 0;
  v12 = (_WORD *)((char *)a1 + (unsigned int)a1[2]);
  v13 = v12;
  if ( v12 == v6 )
    goto LABEL_27;
  v14 = v12 + 1;
  while ( *v12 )
  {
LABEL_15:
    ++v12;
    ++v14;
    if ( v12 == v6 )
      goto LABEL_16;
  }
  v16 = (_DWORD)v12 - (_DWORD)v13 + 2;
  v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x75737050u);
  v18 = *v3;
  v19 = 2LL * v11;
  v18[2 * v11 + 1] = v17;
  if ( !v17 )
  {
    v20 = v18;
    goto LABEL_24;
  }
  memmove(v17, v13, v16);
  WORD1(v18[2 * v11++]) = v16;
  LOWORD(v18[v19]) = (_WORD)v12 - (_WORD)v13;
  if ( v14 != v6 && *v14 )
  {
    v3 = a2;
    v13 = v14;
    goto LABEL_15;
  }
LABEL_16:
  if ( v12 != v6 )
    goto LABEL_17;
  v3 = a2;
LABEL_27:
  v21 = (_DWORD)v12 - (_DWORD)v13;
  v22 = ExAllocatePoolWithTag(PagedPool, v21 + 2LL, 0x75737050u);
  v23 = *v3;
  (*v3)[2 * v11 + 1] = v22;
  if ( v22 )
  {
    if ( v21 )
      memmove(v22, v13, v21);
    *((_WORD *)v23[2 * v11 + 1] + ((unsigned __int64)v21 >> 1)) = 0;
    LOWORD(v23[2 * v11]) = v21;
    WORD1(v23[2 * v11]) = v21 + 2;
LABEL_17:
    *a3 = v24;
    return 0LL;
  }
  else
  {
    v20 = v23;
LABEL_24:
    PnpFreeUnicodeStringList(v20, v11);
    return 3221225626LL;
  }
}
