/*
 * XREFs of ACPIEcDisconnectGpeVector @ 0x1C00A0FE0
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0013098 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcDisconnectInterrupt @ 0x1C00A1054 (ACPIEcDisconnectInterrupt.c)
 * Callees:
 *     ACPIVectorDisconnect @ 0x1C0059A90 (ACPIVectorDisconnect.c)
 */

__int64 __fastcall ACPIEcDisconnectGpeVector(__int64 a1)
{
  unsigned int *v2; // rcx
  __int64 result; // rax

  v2 = *(unsigned int **)(a1 + 72);
  if ( !v2 )
    return 0LL;
  result = ACPIVectorDisconnect(v2);
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
