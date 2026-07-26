/*
 * XREFs of NdisConvertNtStatusToNdisStatus @ 0x1C0025040
 * Callers:
 *     ndisSetReceiveFilter @ 0x1C003C958 (ndisSetReceiveFilter.c)
 *     NdisOpenConfiguration @ 0x1C00B9D80 (NdisOpenConfiguration.c)
 *     ndisOidPreRcvFilterSetFilter @ 0x1C00DC260 (ndisOidPreRcvFilterSetFilter.c)
 *     ndisSetTaskOffloadValidate @ 0x1C00DF85C (ndisSetTaskOffloadValidate.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00E39F4 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C00EB820 (NdisLWMRegisterMiniportDriver.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00EBA00 (NdisLWMStartNetworkInterface.c)
 *     ndisLWMCreateMiniport @ 0x1C00EC7B8 (ndisLWMCreateMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNtStatusToNdisStatus(int a1)
{
  __int64 result; // rax

  if ( a1 >= 0 && a1 != 259 && a1 != 1076035585 )
    return 0LL;
  result = 3221291030LL;
  if ( a1 != -1073741789 )
    return (unsigned int)a1;
  return result;
}
