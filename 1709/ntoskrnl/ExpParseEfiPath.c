/*
 * XREFs of ExpParseEfiPath @ 0x140759590
 * Callers:
 *     ExpTranslateEfiPath @ 0x14075ABF0 (ExpTranslateEfiPath.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpParseEfiPath(char *Src, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  char *v4; // r14
  unsigned int v5; // ebp
  unsigned int v6; // esi
  char v8; // al
  char *v9; // r13
  unsigned int v10; // r12d
  char *v11; // r10
  unsigned int v12; // ecx
  int v13; // r11d
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  char v19; // al
  unsigned int v20; // ebp
  _WORD *PoolWithTag; // rbx
  unsigned int v23; // r15d
  unsigned int v24; // edi
  PVOID v25; // rax

  v4 = 0LL;
  v5 = 0;
  v6 = -1073741811;
  while ( 1 )
  {
    v8 = *Src & 0x7F;
    if ( v8 == 127 )
      return v6;
    if ( v8 == 4 && Src[1] == 1 )
      break;
    Src += (unsigned __int8)Src[2] | (unsigned __int64)((unsigned __int8)Src[3] << 8);
  }
  v9 = Src;
  v6 = 0;
  v10 = *((unsigned __int16 *)Src + 1);
  v11 = &Src[((unsigned __int8)Src[3] << 8) | (unsigned __int64)(unsigned __int8)Src[2]];
  if ( (*v11 & 0x7F) == 4 && v11[1] == 4 )
  {
    v4 = v11;
    do
    {
      v12 = v5;
      v13 = *((unsigned __int16 *)v11 + 1);
      v14 = v13 + v5 - 4;
      v15 = -1;
      if ( v14 >= v5 )
        v15 = v13 + v5 - 4;
      v5 = v15;
      v6 = v14 < v12 ? 0xC0000095 : 0;
      if ( v14 < v12 )
        break;
      v16 = v13 + v10;
      v17 = -1;
      v18 = v10;
      if ( v13 + v10 >= v10 )
        v17 = v13 + v10;
      v10 = v17;
      v6 = v16 < v18 ? 0xC0000095 : 0;
      if ( v16 < v18 )
        break;
      v11 += ((unsigned __int8)v11[3] << 8) | (unsigned __int64)(unsigned __int8)v11[2];
      if ( (*v11 & 0x7F) != 4 )
        break;
    }
    while ( v11[1] == 4 );
  }
  if ( (*v11 & 0x7F) != 0x7F )
    v6 = -1073741811;
  if ( (v6 & 0x80000000) != 0 )
    return v6;
  v19 = v9[41];
  if ( v19 == 2 )
  {
    *a4 = 1;
LABEL_24:
    if ( v5 )
    {
      v20 = v5 + 2;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x72766E45u);
      if ( !PoolWithTag )
        return 3221225626LL;
      v23 = 0;
      while ( (*v4 & 0x7F) != 0x7F )
      {
        v24 = *((unsigned __int16 *)v4 + 1) - 4;
        if ( v24 >= v20 )
          goto LABEL_35;
        memmove((char *)PoolWithTag + v23, v4 + 4, v24);
        v20 -= v24;
        v23 += v24;
        v4 += (unsigned __int8)v4[2] | (unsigned __int64)((unsigned __int8)v4[3] << 8);
      }
      PoolWithTag[(unsigned __int64)v23 >> 1] = 0;
    }
    else
    {
      PoolWithTag = 0LL;
    }
    v25 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
    *a2 = v25;
    if ( !v25 )
    {
      if ( PoolWithTag )
LABEL_35:
        ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225626LL;
    }
    memmove(v25, v9, v10);
    *a3 = PoolWithTag;
    return v6;
  }
  if ( v19 == 1 )
  {
    *a4 = 0;
    goto LABEL_24;
  }
  return 3221225485LL;
}
