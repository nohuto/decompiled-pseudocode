/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x140146950
 * Callers:
 *     PopRequestPowerIrp @ 0x140145E60 (PopRequestPowerIrp.c)
 *     VerifierIofCallDriver @ 0x1407706E0 (VerifierIofCallDriver.c)
 *     VerifierPoCallDriver @ 0x140770DA0 (VerifierPoCallDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
