/*
 * XREFs of ?bNoMatch@MAPPER@@QEAAHPEAVPFE@@@Z @ 0x1C0056288
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0056BD0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MAPPER::bNoMatch(MAPPER *this, struct PFE *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r9d
  unsigned int v4; // r8d

  v2 = *((_DWORD *)this + 46);
  v3 = *((_DWORD *)this + 45);
  v4 = 1;
  if ( v2 >= v3 )
  {
    if ( v2 == v3 && (*((_DWORD *)this + 63) & 0x1000080) == 0 )
      return *((_DWORD *)a2 + 22) >= *((_DWORD *)this + 52);
  }
  else
  {
    return 0;
  }
  return v4;
}
