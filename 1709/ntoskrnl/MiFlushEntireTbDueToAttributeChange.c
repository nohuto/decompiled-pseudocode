/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C
 * Callers:
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiCombiningInProgress @ 0x1400CF508 (MiCombiningInProgress.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400ED4B0 (MiChangePageAttributeBatch.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140829A64 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushEntireTbDueToAttributeChange(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[112]; // [rsp+20h] [rbp-88h] BYREF

  ++dword_140388554;
  if ( VslVsmEnabled )
  {
    LOBYTE(a1) = 3;
    VslpEnterIumSecureMode(a1, 0LL, 0LL, v4);
  }
  return KeFlushTb(3LL, 2LL, a3);
}
