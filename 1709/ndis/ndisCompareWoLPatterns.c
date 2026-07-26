/*
 * XREFs of ndisCompareWoLPatterns @ 0x1C00ACA04
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C00ACAD8 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00AD8AC (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 */

bool __fastcall ndisCompareWoLPatterns(_DWORD *a1, _DWORD *a2)
{
  int v2; // r8d
  char v3; // bl
  int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // ebp
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx

  v2 = a1[3];
  v3 = 0;
  if ( v2 != a2[3] )
    return 0;
  v7 = v2 - 1;
  if ( !v7 )
  {
    v8 = a1[41];
    if ( v8 == a2[41] )
    {
      v9 = a1[43];
      if ( v9 == a2[43] && !memcmp((char *)a1 + (unsigned int)a1[40], (char *)a2 + (unsigned int)a2[40], v8) )
        return memcmp((char *)a1 + (unsigned int)a1[42], (char *)a2 + (unsigned int)a2[42], v9) == 0;
    }
    return v3;
  }
  v10 = v7 - 1;
  if ( !v10 )
    return 1;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return v3;
      v13 = a1[39] == a2[39];
    }
    else
    {
      v13 = memcmp(a1 + 39, a2 + 39, 0x28uLL) == 0;
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 39) - *(_QWORD *)(a2 + 39);
    if ( !v14 )
      v14 = *(_QWORD *)(a1 + 41) - *(_QWORD *)(a2 + 41);
    v13 = v14 == 0;
  }
  if ( v13 )
    return 1;
  return v3;
}
