/*
 * XREFs of ACPIEcDisconnectGpeVector @ 0x1C009E008
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C002AB00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcDisconnectInterrupt @ 0x1C009E07C (ACPIEcDisconnectInterrupt.c)
 * Callees:
 *     ACPIVectorDisconnect @ 0x1C0058F70 (ACPIVectorDisconnect.c)
 */

__int64 __fastcall ACPIEcDisconnectGpeVector(__int64 a1)
{
  _BYTE *v2; // rcx
  __int64 result; // rax

  v2 = *(_BYTE **)(a1 + 72);
  if ( !v2 )
    return 0LL;
  result = ACPIVectorDisconnect(v2);
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
