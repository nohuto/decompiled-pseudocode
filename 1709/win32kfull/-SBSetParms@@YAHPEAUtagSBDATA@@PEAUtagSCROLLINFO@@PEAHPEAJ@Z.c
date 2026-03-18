/*
 * XREFs of ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00839E8
 * Callers:
 *     xxxSetScrollBar @ 0x1C0083690 (xxxSetScrollBar.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SBSetParms(struct tagSBDATA *a1, struct tagSCROLLINFO *a2, int *a3, int *a4)
{
  int v4; // edi
  int v6; // ecx
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax

  v4 = 0;
  v6 = *((_DWORD *)a2 + 1);
  v8 = 0;
  if ( (v6 & 0x1000) != 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v6 & 1) != 0 )
  {
    v9 = *((_DWORD *)a2 + 2);
    v10 = *((_DWORD *)a2 + 3);
    LOBYTE(v8) = v9 == v10;
    if ( v10 < v9 )
      *((_DWORD *)a2 + 3) = v9;
    if ( *(_DWORD *)a1 != v9 || *((_DWORD *)a1 + 1) != *((_DWORD *)a2 + 3) )
    {
      *(_DWORD *)a1 = v9;
      *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 3);
      v20 = *((_DWORD *)a2 + 1);
      if ( (v20 & 2) == 0 )
      {
        *((_DWORD *)a2 + 1) = v20 | 2;
        *((_DWORD *)a2 + 4) = *((_DWORD *)a1 + 2);
      }
      v21 = *((_DWORD *)a2 + 1);
      if ( (v21 & 4) == 0 )
      {
        *((_DWORD *)a2 + 1) = v21 | 4;
        *((_DWORD *)a2 + 5) = *((_DWORD *)a1 + 3);
      }
      v8 = 1;
    }
  }
  if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
  {
    v11 = abs32(*((_DWORD *)a1 + 1) - *(_DWORD *)a1) + 1;
    if ( *((_DWORD *)a2 + 4) > v11 )
      *((_DWORD *)a2 + 4) = v11;
    v12 = *((_DWORD *)a2 + 4);
    if ( *((_DWORD *)a1 + 2) != v12 )
    {
      *((_DWORD *)a1 + 2) = v12;
      v22 = *((_DWORD *)a2 + 1);
      if ( (v22 & 4) == 0 )
      {
        *((_DWORD *)a2 + 1) = v22 | 4;
        *((_DWORD *)a2 + 5) = *((_DWORD *)a1 + 3);
      }
      v8 = 1;
    }
  }
  if ( (*((_DWORD *)a2 + 1) & 4) != 0 )
  {
    v13 = *((_DWORD *)a1 + 1) - (*((_DWORD *)a1 + 2) != 0 ? *((_DWORD *)a1 + 2) - 1 : 0);
    v14 = *((_DWORD *)a2 + 5);
    if ( v14 < *(_DWORD *)a1 )
    {
      *((_DWORD *)a2 + 5) = *(_DWORD *)a1;
    }
    else if ( v14 > v13 )
    {
      *((_DWORD *)a2 + 5) = v13;
    }
    v15 = *((_DWORD *)a2 + 5);
    if ( *((_DWORD *)a1 + 3) != v15 )
    {
      *((_DWORD *)a1 + 3) = v15;
      v8 = 1;
    }
  }
  v16 = *((_DWORD *)a2 + 1);
  if ( (v16 & 0x1000) == 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v16 & 1) == 0 )
  {
    if ( (v16 & 2) == 0 )
      return v8;
    goto LABEL_22;
  }
  v17 = *(_DWORD *)a1;
  v18 = *((_DWORD *)a1 + 1);
  *a3 = *(_DWORD *)a1 != v18;
  if ( v17 != v18 )
  {
LABEL_22:
    LOBYTE(v4) = *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 1) - *(_DWORD *)a1;
    *a3 = v4;
  }
  return v8;
}
