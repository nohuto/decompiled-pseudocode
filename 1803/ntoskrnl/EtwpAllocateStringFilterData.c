/*
 * XREFs of EtwpAllocateStringFilterData @ 0x1407B12F0
 * Callers:
 *     EtwpAllocateFilter @ 0x1407B10E0 (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateStringFilterData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v5; // r8d
  _WORD *v6; // r15
  unsigned __int16 v7; // bp
  unsigned int i; // ecx
  __int16 v9; // dx
  unsigned __int16 v10; // ax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  SIZE_T v13; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rsi
  char *v16; // r14
  unsigned __int16 v17; // r8
  __int16 v18; // r10
  unsigned int j; // edx
  __int16 v20; // ax
  __int16 v21; // ax
  __int64 v22; // rcx

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 - 2 > 0x3FE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = v2 >> 1;
    v6 = *(_WORD **)a1;
    v7 = 1;
    for ( i = 0; i < v5; v7 = v10 )
    {
      v9 = v6[i];
      if ( !v9 )
        break;
      ++i;
      v10 = v7 + 1;
      if ( v9 != 59 )
        v10 = v7;
    }
    v11 = i + 1;
    v12 = v5;
    if ( v5 <= v11 )
      v11 = v5;
    else
      v12 = v11;
    v13 = 2 * (v11 + 8 * v7) + 24;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x46777445u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v13);
      v16 = (char *)&v15[2 * v7 + 3];
      *(_WORD *)v15 = v7;
      memmove(v16, v6, 2LL * v12);
      v15[2] = v16;
      v17 = 1;
      v18 = 0;
      for ( j = 0; j < v12; ++j )
      {
        v20 = *(_WORD *)&v16[2 * j];
        if ( !v20 || v17 >= *(_WORD *)v15 )
          break;
        if ( v20 == 59 )
        {
          v21 = j - v18;
          *(_WORD *)&v16[2 * j] = 0;
          v22 = 2LL * v17;
          v18 = j + 1;
          ++v17;
          LOWORD(v15[v22 - 1]) = v21;
          v15[v22 + 2] = &v16[2 * j + 2];
        }
      }
      LOWORD(v15[2 * v17 - 1]) = v12 - v18 - 1;
      *a2 = v15;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
