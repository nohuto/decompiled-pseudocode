/*
 * XREFs of CiNdisCleanupThrottle @ 0x1C0009008
 * Callers:
 *     CsTerminate @ 0x1C0009F94 (CsTerminate.c)
 * Callees:
 *     <none>
 */

void CiNdisCleanupThrottle()
{
  if ( CiNdisThrottleWorkItem )
  {
    IoFreeWorkItem(CiNdisThrottleWorkItem);
    if ( CiNdisDeviceHandle )
      ZwClose(CiNdisDeviceHandle);
  }
}
