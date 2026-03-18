/*
 * XREFs of sub_1407576E4 @ 0x1407576E4
 * Callers:
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14053856C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x14083D688 (ExInitLicenseData.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_1407576E4(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
