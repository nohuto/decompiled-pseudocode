/*
 * XREFs of IovUtilWatermarkIrp @ 0x1400DE644
 * Callers:
 *     IopSynchronousCall @ 0x14051CF64 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x1405532A4 (PnpAsynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1405580F0 (IopFilterResourceRequirementsCall.c)
 *     IopEjectDevice @ 0x1406D25EC (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x1407B09A0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x1407B0B20 (VfIrpWatermark.c)
 */

__int64 __fastcall IovUtilWatermarkIrp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark(a1, a2);
  return result;
}
