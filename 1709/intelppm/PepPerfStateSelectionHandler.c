/*
 * XREFs of PepPerfStateSelectionHandler @ 0x1C000E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerfStateSelectionHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        char a7,
        _DWORD *a8,
        unsigned __int64 *a9)
{
  __int64 v9; // rbx
  unsigned __int8 v10; // di
  unsigned __int8 v11; // r11
  unsigned __int8 v14; // r10
  unsigned __int8 v15; // cl
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // r8
  __int64 v20; // r9

  v9 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  v11 = 0;
  v14 = *(_BYTE *)(v9 + 32);
  if ( v14 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 24LL * v11 + 8) > a4 )
    {
      if ( ++v11 >= v14 )
        goto LABEL_6;
    }
    v10 = v11;
  }
LABEL_6:
  v15 = v14 - 1;
  if ( v14 )
  {
    v16 = *(_QWORD *)(v9 + 40);
    while ( *(_DWORD *)(v16 + 24LL * v14 - 16) < a3
         || (a7 & 1) == 0 && *(_DWORD *)(v16 + 24LL * v14 - 24) < *(_DWORD *)(v9 + 8) )
    {
      if ( !--v14 )
        goto LABEL_14;
    }
    v15 = v14 - 1;
  }
LABEL_14:
  v17 = *(_QWORD *)(v9 + 40);
  v18 = v15;
  if ( v15 < v10 )
    v18 = v10;
  if ( (a7 & 2) != 0 )
  {
    v19 = v10 - 1;
    do
      v20 = v17 + 24LL * ++v19;
    while ( *(_DWORD *)(v20 + 8) > a2 && v19 < v18 );
  }
  else
  {
    v19 = v18 + 1;
    do
      v20 = v17 + 24LL * --v19;
    while ( *(_DWORD *)(v20 + 8) < a2 && v19 > v10 );
  }
  if ( a9 )
  {
    *a9 = v19 | (unsigned __int64)((v18 | (v10 << 8)) << 8);
    if ( a8 )
      *a8 = *(_DWORD *)(v20 + 4);
  }
  return *(unsigned int *)(v20 + 8);
}
