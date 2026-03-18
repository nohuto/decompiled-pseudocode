/*
 * XREFs of MiImageCfgRvaIteratorNext @ 0x140423CF0
 * Callers:
 *     MiImageCfgRvaIteratorFirst @ 0x140423CD0 (MiImageCfgRvaIteratorFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageCfgRvaIteratorNext(_DWORD *a1, unsigned int **a2, _DWORD *a3)
{
  int v3; // eax
  unsigned int v4; // r9d
  unsigned int v7; // ebx
  unsigned int *v8; // r8
  __int64 v9; // rsi
  int v10; // ebp
  unsigned __int8 v11; // cl
  unsigned int v12; // edi
  unsigned int v13; // r10d
  char v14; // bl
  bool v15; // bl

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
      v15 = 0;
    }
    else
    {
      v11 = *((_BYTE *)v8 + 4);
      v15 = (v11 & (unsigned __int8)v14) != 0;
      if ( v15 )
        goto LABEL_9;
    }
    *a3 = 1;
LABEL_9:
    if ( (v11 & 2) != 0 )
      *a3 |= 0x10u;
    v8 = (unsigned int *)((char *)v8 + v9);
    --v3;
    if ( !v15 )
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
  dword_14036C018 = 14;
  return v4;
}
