/*
 * XREFs of CiSystemTerminate @ 0x1C000B334
 * Callers:
 *     CsTerminate @ 0x1C0009FA4 (CsTerminate.c)
 *     CiSystemInitialize @ 0x1C000D128 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0002848 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleTime )
  {
    CiFreeMemory((void *)CiLastIdleTime);
    CiLastIdleTime = 0LL;
  }
}
