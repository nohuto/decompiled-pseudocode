/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x140167E50
 * Callers:
 *     PopRequestPowerIrp @ 0x1401671C0 (PopRequestPowerIrp.c)
 *     VerifierIofCallDriver @ 0x14081F610 (VerifierIofCallDriver.c)
 *     VerifierPoCallDriver @ 0x14081FCF0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x140167E74 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140238128 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140811AB4 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
