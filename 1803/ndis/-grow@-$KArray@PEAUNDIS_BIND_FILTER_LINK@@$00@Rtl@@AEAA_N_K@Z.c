/*
 * XREFs of ?grow@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00FC914
 * Callers:
 *     ?append@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N$$QEAPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FC8D0 (-append@-$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N$$QEAPEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?reserve@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00FCAE4 (-reserve@-$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::grow(unsigned int *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = *a1;
  if ( v2 >= a2 )
    return 1;
  v5 = 4LL;
  if ( a2 >= 4 )
    v5 = a2;
  v6 = (unsigned int)v2 + ((unsigned int)v2 >> 1);
  if ( v5 >= v6 )
    v6 = v5;
  return Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::reserve(a1, v6);
}
