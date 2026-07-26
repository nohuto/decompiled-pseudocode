/*
 * XREFs of ?grow@?$KArray@PEAX@Rtl@@AEAA_N_K@Z @ 0x1C00B5AB4
 * Callers:
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00B35BC (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00B36B8 (--0BindState@Ndis@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Rtl::KArray<void *>::grow(unsigned int *a1, unsigned __int64 a2)
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
  return Rtl::KArray<void *>::reserve(a1, v5);
}
