/*
 * XREFs of UnInitEnergyCounters @ 0x1C0027940
 * Callers:
 *     <none>
 * Callees:
 *     DeactivateFixedFunctionCounters @ 0x1C000688C (DeactivateFixedFunctionCounters.c)
 */

_DWORD *UnInitEnergyCounters()
{
  _DWORD *result; // rax

  result = (_DWORD *)LODWORD(WPP_MAIN_CB.Dpc.DeferredContext);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 )
    return DeactivateFixedFunctionCounters();
  return result;
}
