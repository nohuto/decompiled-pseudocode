/*
 * XREFs of CiNdisThrottleInitialize @ 0x1C000C078
 * Callers:
 *     CsInitialize @ 0x1C000C194 (CsInitialize.c)
 * Callees:
 *     CiNdisOpenDevice @ 0x1C000903C (CiNdisOpenDevice.c)
 */

void CiNdisThrottleInitialize()
{
  if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) != -1 && CiSystemResponsiveness != 100 )
  {
    CiNdisThrottleWorkItem = IoAllocateWorkItem(CiDeviceObject);
    if ( CiNdisThrottleWorkItem )
      CiNdisOpenDevice();
  }
}
