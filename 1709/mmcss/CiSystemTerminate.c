/*
 * XREFs of CiSystemTerminate @ 0x1C000B340
 * Callers:
 *     CsTerminate @ 0x1C0009F94 (CsTerminate.c)
 *     CiSystemInitialize @ 0x1C000D11C (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0002854 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleTime )
  {
    CiFreeMemory((void *)CiLastIdleTime);
    CiLastIdleTime = 0LL;
  }
}
