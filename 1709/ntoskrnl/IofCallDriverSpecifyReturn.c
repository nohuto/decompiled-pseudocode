/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x140131020
 * Callers:
 *     PopRequestPowerIrp @ 0x1400B3BA0 (PopRequestPowerIrp.c)
 *     VerifierIofCallDriver @ 0x1407B2470 (VerifierIofCallDriver.c)
 *     VerifierPoCallDriver @ 0x1407B2B40 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x140131044 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x1401FB3F4 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1407A4AE8 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
