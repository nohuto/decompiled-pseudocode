/*
 * XREFs of RaidNtStatusToStorStatus @ 0x1C00399A8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001274C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C002F79C (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorEtwMiniportEventProxy @ 0x1C002FA30 (StorEtwMiniportEventProxy.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0031520 (StorPortpInvokeAcpiMethod.c)
 *     StorpBuildScatterGatherList @ 0x1C0032124 (StorpBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidNtStatusToStorStatus(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case -2147483643:
      return 3238002692LL;
    case -1073741811:
      return 3238002694LL;
    case -1073741670:
      return 3238002691LL;
    case -1073741496:
      return 3238002696LL;
    case 0:
      return 0LL;
  }
  result = 3238002689LL;
  if ( a1 >= 0 )
    return 0LL;
  return result;
}
