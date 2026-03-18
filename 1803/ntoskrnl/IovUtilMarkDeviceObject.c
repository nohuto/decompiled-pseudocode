/*
 * XREFs of IovUtilMarkDeviceObject @ 0x1402AAAF8
 * Callers:
 *     VfIoDeleteDevice @ 0x1408213F8 (VfIoDeleteDevice.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14082DBBC (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     IovpUtilMarkDeviceObject @ 0x140822B44 (IovpUtilMarkDeviceObject.c)
 */

__int64 __fastcall IovUtilMarkDeviceObject(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return IovpUtilMarkDeviceObject(a1, a2);
  return result;
}
