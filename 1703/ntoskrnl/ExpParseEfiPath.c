/*
 * XREFs of ExpParseEfiPath @ 0x140719CE8
 * Callers:
 *     ExpTranslateEfiPath @ 0x14071B354 (ExpTranslateEfiPath.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpParseEfiPath(char *Src, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  char *v4; // r14
  unsigned int v5; // ebp
  unsigned int v6; // esi
  char v9; // al
  char *v10; // r13
  unsigned int v11; // r15d
  char *v12; // r10
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // r9d
  unsigned int v16; // edx
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // ecx
  char v20; // al
  unsigned int v21; // ebp
  _WORD *PoolWithTag; // rbx
  unsigned int v24; // r12d
  unsigned int v25; // edi
  PVOID v26; // rax

  v4 = 0LL;
  v5 = 0;
  v6 = -1073741811;
  while ( 1 )
  {
    v9 = *Src & 0x7F;
    if ( v9 == 127 )
      return v6;
    if ( v9 == 4 && Src[1] == 1 )
      break;
    Src += *((unsigned __int16 *)Src + 1);
  }
  v10 = Src;
  v6 = 0;
  v11 = *((unsigned __int16 *)Src + 1);
  v12 = &Src[*((unsigned __int16 *)Src + 1)];
  if ( (*v12 & 0x7F) == 4 && v12[1] == 4 )
  {
    v4 = v12;
    do
    {
      v13 = -1;
      v14 = v5;
      v15 = *((unsigned __int16 *)v12 + 1);
      v16 = v15 + v5 - 4;
      if ( v16 >= v5 )
        v13 = v15 + v5 - 4;
      v5 = v13;
      v6 = v16 < v14 ? 0xC0000095 : 0;
      if ( v16 < v14 )
        break;
      v17 = v15 + v11;
      v18 = -1;
      v19 = v11;
      if ( v15 + v11 >= v11 )
        v18 = v15 + v11;
      v11 = v18;
      v6 = v17 < v19 ? 0xC0000095 : 0;
      if ( v17 < v19 )
        break;
      v12 += (unsigned __int8)v12[2] | ((unsigned __int64)(unsigned __int8)v12[3] << 8);
      if ( (*v12 & 0x7F) != 4 )
        break;
    }
    while ( v12[1] == 4 );
  }
  if ( (*v12 & 0x7F) != 0x7F )
    v6 = -1073741811;
  if ( (v6 & 0x80000000) != 0 )
    return v6;
  v20 = v10[41];
  if ( v20 == 2 )
  {
    *a4 = 1;
LABEL_24:
    if ( v5 )
    {
      v21 = v5 + 2;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x72766E45u);
      if ( !PoolWithTag )
        return 3221225626LL;
      v24 = 0;
      while ( (*v4 & 0x7F) != 0x7F )
      {
        v25 = *((unsigned __int16 *)v4 + 1) - 4;
        if ( v25 >= v21 )
          goto LABEL_35;
        memmove((char *)PoolWithTag + v24, v4 + 4, v25);
        v21 -= v25;
        v24 += v25;
        v4 += *((unsigned __int16 *)v4 + 1);
      }
      PoolWithTag[(unsigned __int64)v24 >> 1] = 0;
    }
    else
    {
      PoolWithTag = 0LL;
    }
    v26 = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
    *a2 = v26;
    if ( !v26 )
    {
      if ( PoolWithTag )
LABEL_35:
        ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225626LL;
    }
    memmove(v26, v10, v11);
    *a3 = PoolWithTag;
    return v6;
  }
  if ( v20 == 1 )
  {
    *a4 = 0;
    goto LABEL_24;
  }
  return 3221225485LL;
}
