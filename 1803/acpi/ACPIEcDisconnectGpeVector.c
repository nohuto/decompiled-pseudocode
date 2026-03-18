/*
 * XREFs of ACPIEcDisconnectGpeVector @ 0x1C007A010
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0021D28 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcDisconnectInterrupt @ 0x1C007A084 (ACPIEcDisconnectInterrupt.c)
 * Callees:
 *     ACPIVectorDisconnect @ 0x1C003FAF0 (ACPIVectorDisconnect.c)
 */

__int64 __fastcall ACPIEcDisconnectGpeVector(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)(a1 + 72);
  if ( !v2 )
    return 0LL;
  result = ACPIVectorDisconnect(v2);
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
