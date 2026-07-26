/*
 * XREFs of NdisConvertNtStatusToNdisStatus @ 0x1C0023880
 * Callers:
 *     ndisSetReceiveFilter @ 0x1C003EB5C (ndisSetReceiveFilter.c)
 *     ndisOidPreRcvFilterSetFilter @ 0x1C00CFD10 (ndisOidPreRcvFilterSetFilter.c)
 *     ndisSetTaskOffloadValidate @ 0x1C00D3378 (ndisSetTaskOffloadValidate.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00D7F88 (ndisXlateAddPacketPatternToWolPatternOid.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
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
