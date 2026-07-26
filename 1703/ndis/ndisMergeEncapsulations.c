/*
 * XREFs of ndisMergeEncapsulations @ 0x1C001FD68
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C001FB9C (ndisOidPreOpenSetEncapsulation.c)
 *     ndisMRestoreFilterSettings @ 0x1C0047C1C (ndisMRestoreFilterSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMergeEncapsulations(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  char v4; // al

  if ( *(_BYTE *)a1 != 0xA8 || !*(_BYTE *)(a1 + 1) || *(_WORD *)(a1 + 2) < 0x1Cu )
    return (unsigned int)-1073741637;
  v2 = 0;
  if ( !a2[1] && *(_DWORD *)(a1 + 4) == 1 )
  {
    a2[1] = 1;
    a2[2] = *(_DWORD *)(a1 + 8);
    a2[3] = *(_DWORD *)(a1 + 12);
  }
  if ( !a2[4] && *(_DWORD *)(a1 + 16) == 1 )
  {
    a2[4] = 1;
    a2[5] = *(_DWORD *)(a1 + 20);
    a2[6] = *(_DWORD *)(a1 + 24);
  }
  if ( a2[1] != 1 || a2[4] != 1 )
    return v2;
  if ( a2[3] != a2[6] )
    return (unsigned int)-1073741637;
  v3 = a2[2];
  if ( (v3 & 2) != 0 )
  {
    v4 = a2[5] & 2;
  }
  else
  {
    if ( (v3 & 0x10) == 0 )
      return v2;
    v4 = a2[5] & 0x10;
  }
  return v4 == 0 ? 0xC00000BB : 0;
}
