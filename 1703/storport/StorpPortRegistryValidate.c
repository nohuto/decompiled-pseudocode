/*
 * XREFs of StorpPortRegistryValidate @ 0x1C0016228
 * Callers:
 *     StorPortRegistryRead @ 0x1C0015E80 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x1C00332D0 (StorPortRegistryWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorpPortRegistryValidate(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  int v4; // eax
  unsigned int v5; // r9d

  v3 = *a3;
  v4 = a2 - *(_DWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  if ( *a3 > v5 )
  {
    *a3 = v5;
  }
  else if ( v3 && a2 && v4 >= 0 )
  {
    return v3 + v4 <= v5;
  }
  return 0;
}
