/*
 * XREFs of ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1C00400E4
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C003F700 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1C0041B10 (-_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TryProbeForRead(char *a1, int a2)
{
  char *v2; // r8

  if ( a2 )
  {
    v2 = &a1[a2];
    if ( (unsigned __int64)v2 > MmUserProbeAddress || v2 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  return 1;
}
