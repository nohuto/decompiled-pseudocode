/*
 * XREFs of ?push_back@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@QEAA_NAEBQEBG@Z @ 0x1800212EC
 * Callers:
 *     IsEUCountry @ 0x1800213F4 (IsEUCountry.c)
 * Callees:
 *     ?_SetCapacity@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@AEAA_N_K@Z @ 0x1800211F4 (-_SetCapacity@-$vector@PEBGV-$allocator@PEBG@utl@@@utl@@AEAA_N_K@Z.c)
 */

char __fastcall utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(
        _QWORD *a1,
        char *a2)
{
  char *v4; // rdx
  char *v5; // rcx
  char *v6; // rbp
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  char v9; // di

  v4 = (char *)a1[1];
  v5 = (char *)a1[2];
  if ( v4 != v5 )
  {
LABEL_8:
    v9 = 1;
    *(_QWORD *)v4 = *(_QWORD *)a2;
    a1[1] += 8LL;
    return v9;
  }
  v6 = &a2[-*a1];
  v7 = (__int64)&v5[-*a1] >> 3;
  v8 = 7 * (v7 >> 2) + 8;
  if ( v8 > 0xFFFFFFFFFFFFFFFLL )
    v8 = 0xFFFFFFFFFFFFFFFLL;
  v9 = 0;
  if ( v7 < v8
    && utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::_SetCapacity((__int64)a1, v8) )
  {
    v4 = (char *)a1[1];
    if ( v6 < &v4[-*a1] )
      a2 = &v6[*a1];
    goto LABEL_8;
  }
  return v9;
}
