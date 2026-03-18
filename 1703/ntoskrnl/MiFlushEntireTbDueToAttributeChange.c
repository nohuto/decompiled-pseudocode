/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x140063C1C
 * Callers:
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14010346C (MiChangePageAttributeBatch.c)
 *     MiCombiningInProgress @ 0x14012CB20 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140804634 (MiInitializeCacheFlushing.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushEntireTbDueToAttributeChange(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[112]; // [rsp+20h] [rbp-88h] BYREF

  ++dword_14036C208;
  if ( VslVsmEnabled )
    VslpEnterIumSecureMode(2, 0LL, 0LL, (__int64)v4);
  return KeFlushTb(3LL, 2LL, a3);
}
