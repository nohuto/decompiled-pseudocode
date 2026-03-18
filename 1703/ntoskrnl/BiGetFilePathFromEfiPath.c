/*
 * XREFs of BiGetFilePathFromEfiPath @ 0x140737BE0
 * Callers:
 *     BiCreateMergedBootEntry @ 0x140737008 (BiCreateMergedBootEntry.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetFilePathFromEfiPath(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 result; // rax
  int v7; // esi
  __int64 i; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // esi
  _WORD *PoolWithTag; // rax
  _WORD *v12; // rbp
  _WORD *v13; // r14
  __int64 j; // rdi
  size_t v15; // rbx

  if ( (*(_BYTE *)a1 & 0x7F) == 0x7F )
    return 3221225530LL;
  v7 = 0;
  for ( i = a1 + *(unsigned __int16 *)(a1 + 2); (*(_BYTE *)i & 0x7F) != 0x7F; i += *(unsigned __int16 *)(i + 2) )
  {
    if ( *(_BYTE *)i == 4 && *(_BYTE *)(i + 1) == 4 )
    {
      v9 = *(unsigned __int16 *)(i + 2);
      if ( v9 < 4 )
        return 3221225621LL;
      v7 += v9 - 4;
    }
  }
  if ( !v7 )
    return 3221226021LL;
  v10 = v7 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x4B444342u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v13 = PoolWithTag;
  for ( j = a1 + *(unsigned __int16 *)(a1 + 2); (*(_BYTE *)j & 0x7F) != 0x7F; j += *(unsigned __int16 *)(j + 2) )
  {
    if ( *(_BYTE *)j == 4 && *(_BYTE *)(j + 1) == 4 )
    {
      v15 = (unsigned int)*(unsigned __int16 *)(j + 2) - 4;
      memmove(v13, (const void *)(j + 4), v15);
      v13 = (_WORD *)((char *)v13 + v15);
    }
  }
  result = 0LL;
  *a2 = v12;
  *v13 = 0;
  *a3 = v10;
  return result;
}
