/*
 * XREFs of IovUtilWatermarkIrp @ 0x140081414
 * Callers:
 *     PnpAsynchronousCall @ 0x1404DB8E0 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x14055BFFC (IopFilterResourceRequirementsCall.c)
 *     IopEjectDevice @ 0x1406A792C (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x14076EB80 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
