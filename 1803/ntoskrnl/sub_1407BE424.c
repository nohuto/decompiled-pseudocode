/*
 * XREFs of sub_1407BE424 @ 0x1407BE424
 * Callers:
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140549988 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x1408AFFA0 (ExInitLicenseData.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_1407BE424(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
