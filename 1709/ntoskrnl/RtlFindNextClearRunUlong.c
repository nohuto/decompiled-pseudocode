/*
 * XREFs of RtlFindNextClearRunUlong @ 0x14011AAA0
 * Callers:
 *     MiRescanPageFileBitmapPortion @ 0x14011A238 (MiRescanPageFileBitmapPortion.c)
 *     MiRescanPagefileBitmaps @ 0x14014FFF4 (MiRescanPagefileBitmaps.c)
 *     MiFindFreePageFileSpaceForward @ 0x14022553C (MiFindFreePageFileSpaceForward.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearRunUlong(unsigned int *a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  _DWORD *v9; // r9
  unsigned __int64 v10; // r14
  unsigned int v11; // r10d
  int v12; // r11d
  char v13; // dl
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rbp
  unsigned int v17; // r8d
  int v18; // ecx
  char v19; // si
  char v20; // dl
  __int64 v21; // rcx
  unsigned int v22; // r8d
  __int64 result; // rax

  if ( a4 < 0x20 )
    return 0LL;
  v6 = *a1;
  if ( *a1 < 0x20 || a2 > v6 - 32 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 1);
  v8 = (unsigned __int64)(v6 - 1) >> 5;
  v9 = (_DWORD *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
  v10 = v7 + 4 * v8 - 4;
  if ( (v6 & 0x1F) == 0 )
    v10 = v7 + 4 * v8;
  v11 = *v9 | dword_1402C05D0[a2 & 0x1F];
  v12 = 0;
  do
  {
    while ( 1 )
    {
      if ( v11 != -1 )
      {
        v12 = 32 * (((__int64)v9 - v7) >> 2);
        if ( !v11 )
          goto LABEL_13;
        v13 = -1;
        v14 = !_BitScanReverse64((unsigned __int64 *)&v15, v11);
        if ( !v14 )
          v13 = v15;
        if ( v13 != 31 )
          break;
      }
      v22 = 0;
      if ( (unsigned __int64)v9 >= v10 )
        goto LABEL_29;
      v11 = *++v9;
    }
    v12 += v13 + 1;
LABEL_13:
    v16 = v12 & 0x1F;
    v17 = 0;
    v18 = v11 & ~dword_1402C05D0[v16];
    v11 = v18;
    if ( (unsigned __int64)v9 > v10 )
    {
LABEL_19:
      v19 = 1;
      if ( (v6 & 0x1F) == 0 )
        goto LABEL_26;
      if ( v17 )
        v11 = *++v9;
      v19 = 1;
      v11 |= ~dword_1402C05D0[v6 & 0x1F];
LABEL_23:
      v20 = -1;
      v14 = !_BitScanForward64((unsigned __int64 *)&v21, v11);
      if ( !v14 )
        v20 = v21;
      v17 += v20;
      goto LABEL_26;
    }
    v19 = 0;
    if ( v18 )
      goto LABEL_23;
    while ( 1 )
    {
      v17 += 32;
      if ( v17 >= a4 && v17 - (unsigned int)v16 >= a4 )
        break;
      if ( v9 == (_DWORD *)v10 )
        goto LABEL_19;
      v11 = *++v9;
      if ( *v9 )
        goto LABEL_23;
    }
LABEL_26:
    v22 = v17 - v16;
    if ( v22 > a4 )
      v22 = a4;
    if ( v22 >= 0x20 )
      break;
    v22 = 0;
  }
  while ( !v19 );
LABEL_29:
  if ( v22 > a4 )
    v22 = a4;
  result = v22;
  *a5 = v12;
  return result;
}
