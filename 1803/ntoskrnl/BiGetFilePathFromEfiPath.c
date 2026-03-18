/*
 * XREFs of BiGetFilePathFromEfiPath @ 0x1407E4C9C
 * Callers:
 *     BiCreateMergedBootEntry @ 0x1407E3F80 (BiCreateMergedBootEntry.c)
 *     BiUpdateBcdObject @ 0x1407E58FC (BiUpdateBcdObject.c)
 * Callees:
 *     RtlULongSub @ 0x1400CE2DC (RtlULongSub.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall BiGetFilePathFromEfiPath(_BYTE *a1, _QWORD *a2, unsigned int *a3)
{
  NTSTATUS result; // eax
  int v7; // esi
  _BYTE *i; // r10
  unsigned int v9; // esi
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rbp
  _WORD *v12; // r14
  _BYTE *j; // rdi
  unsigned int v14; // ebx
  ULONG pulResult; // [rsp+50h] [rbp+8h] BYREF

  if ( (*a1 & 0x7F) == 0x7F )
    return -1073741766;
  v7 = 0;
  for ( i = &a1[(unsigned __int8)a1[2] | (unsigned __int64)((unsigned __int8)a1[3] << 8)];
        (*i & 0x7F) != 0x7F;
        i += (unsigned __int8)i[2] | (unsigned __int64)((unsigned __int8)i[3] << 8) )
  {
    if ( *i == 4 && i[1] == 4 )
    {
      result = RtlULongSub(*((unsigned __int16 *)i + 1), 4u, &pulResult);
      if ( result < 0 )
        return result;
      v7 += pulResult;
    }
  }
  if ( !v7 )
    return -1073741275;
  v9 = v7 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x4B444342u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  v12 = PoolWithTag;
  for ( j = &a1[(unsigned __int8)a1[2] | (unsigned __int64)((unsigned __int8)a1[3] << 8)];
        (*j & 0x7F) != 0x7F;
        j += (unsigned __int8)j[2] | (unsigned __int64)((unsigned __int8)j[3] << 8) )
  {
    if ( *j == 4 && j[1] == 4 )
    {
      v14 = *((unsigned __int16 *)j + 1) - 4;
      memmove(v12, j + 4, v14);
      v12 = (_WORD *)((char *)v12 + v14);
    }
  }
  result = 0;
  *a2 = v11;
  *v12 = 0;
  *a3 = v9;
  return result;
}
