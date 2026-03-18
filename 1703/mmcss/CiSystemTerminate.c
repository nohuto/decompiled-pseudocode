/*
 * XREFs of CiSystemTerminate @ 0x1C000C4C4
 * Callers:
 *     CsTerminate @ 0x1C000C13C (CsTerminate.c)
 *     CiSystemInitialize @ 0x1C000DC70 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0004BE0 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleTime )
  {
    CiFreeMemory((void *)CiLastIdleTime);
    CiLastIdleTime = 0LL;
  }
  if ( CiNdisDeviceHandle )
    ZwClose(CiNdisDeviceHandle);
}
