/*
 * XREFs of IovUtilWatermarkIrp @ 0x1400074C4
 * Callers:
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1405DBF84 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x1405E2C94 (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x14073A03C (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x14081DB4C (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x14081DCCC (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
