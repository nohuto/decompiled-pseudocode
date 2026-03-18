/*
 * XREFs of MiImageCfgRvaIteratorNext @ 0x140564D40
 * Callers:
 *     MiImageCfgRvaIteratorFirst @ 0x140564D10 (MiImageCfgRvaIteratorFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageCfgRvaIteratorNext(_DWORD *a1, unsigned int **a2, _DWORD *a3)
{
  int v3; // eax
  unsigned int v4; // r9d
  unsigned int v7; // ecx
  unsigned int *v8; // r8
  __int64 v9; // rsi
  int v10; // ebp
  char v11; // bl
  unsigned int v12; // edi
  unsigned int v13; // r10d
  char v14; // di
  int v15; // ecx
  bool v16; // di

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  v7 = 0;
  if ( !v3 )
    return 0LL;
  v8 = *a2;
  v9 = (unsigned int)a1[21];
  while ( 1 )
  {
    v10 = a1[9];
    v11 = 0;
    v12 = a1[8];
    *a3 = 0;
    v13 = *v8;
    if ( *v8 <= v7 || v13 >= v12 )
      break;
    v14 = 1;
    if ( v10 )
    {
      v14 = (v10 & 1) == 0;
      if ( (v10 & 2) != 0 )
        v14 |= 2u;
    }
    if ( (unsigned int)v9 <= 4 )
    {
      v16 = 0;
    }
    else
    {
      v11 = *((_BYTE *)v8 + 4);
      v15 = (unsigned __int8)(v14 & v11);
      v16 = v15 != 0;
      if ( v15 )
        goto LABEL_9;
    }
    *a3 = 1;
LABEL_9:
    if ( (v11 & 2) != 0 )
      *a3 |= 4u;
    v8 = (unsigned int *)((char *)v8 + v9);
    --v3;
    if ( !v16 )
    {
      v4 = v13;
LABEL_13:
      *((_DWORD *)a2 + 2) = v3;
      *a2 = v8;
      return v4;
    }
    v7 = v13;
    if ( !v3 )
      goto LABEL_13;
  }
  dword_140388338 = 14;
  return v4;
}
