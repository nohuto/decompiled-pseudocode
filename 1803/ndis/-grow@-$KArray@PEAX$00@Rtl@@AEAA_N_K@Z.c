/*
 * XREFs of ?grow@?$KArray@PEAX$00@Rtl@@AEAA_N_K@Z @ 0x1C00BE85C
 * Callers:
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BCE04 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00BCEF4 (--0BindState@Ndis@@QEAA@XZ.c)
 * Callees:
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00BE7C4 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<void *,1>::grow(unsigned int *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v2 = *a1;
  if ( v2 >= a2 )
    return 1;
  v4 = 4LL;
  if ( a2 >= 4 )
    v4 = a2;
  v5 = (unsigned int)v2 + ((unsigned int)v2 >> 1);
  if ( v4 >= v5 )
    v5 = v4;
  return Rtl::KArray<void *,1>::reserve(a1, v5);
}
