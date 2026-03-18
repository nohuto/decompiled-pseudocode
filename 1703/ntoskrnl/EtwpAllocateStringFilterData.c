/*
 * XREFs of EtwpAllocateStringFilterData @ 0x14071258C
 * Callers:
 *     EtwpAllocateFilter @ 0x1405C19A4 (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateStringFilterData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  unsigned int v5; // ebx
  _WORD *v6; // r15
  unsigned __int16 v7; // bp
  unsigned int i; // ecx
  __int16 v9; // dx
  unsigned __int16 v10; // ax
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rsi
  char *v13; // r14
  unsigned __int16 v14; // r9
  __int16 v15; // cx
  unsigned int j; // r8d
  __int16 v17; // ax
  __int16 v18; // dx
  __int64 v19; // rcx
  __int64 v20; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 <= 0x400 )
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
    if ( i < v5 - 1 )
      v5 = i + 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * (v5 + 8 * v7) + 24, 0x46777445u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 2 * (v5 + 8 * v7) + 24);
      *(_WORD *)v12 = v7;
      v13 = (char *)&v12[2 * v7 + 3];
      memmove(v13, v6, 2LL * v5);
      v12[2] = v13;
      v14 = 1;
      v15 = 0;
      for ( j = 0; j < v5; ++j )
      {
        v17 = *(_WORD *)&v13[2 * j];
        if ( !v17 || v14 >= *(_WORD *)v12 )
          break;
        if ( v17 == 59 )
        {
          v18 = j - v15;
          *(_WORD *)&v13[2 * j] = 0;
          v19 = 2LL * (v14 - 1);
          v20 = 2 * ++v14;
          LOWORD(v12[v19 + 1]) = v18;
          v12[v20] = &v13[2 * j + 2];
          v15 = j + 1;
        }
      }
      LOWORD(v12[2 * v14 - 1]) = v5 - v15 - 1;
      *a2 = v12;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
