/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x140051CE0
 * Callers:
 *     MiCombiningInProgress @ 0x140004A14 (MiCombiningInProgress.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiChangePageAttributeBatch @ 0x1400519A0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x14089D23C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushEntireTbDueToAttributeChange(__int64 a1)
{
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  ++dword_1403CB6F4;
  if ( VslVsmEnabled )
  {
    LOBYTE(a1) = 3;
    VslpEnterIumSecureMode(a1, 0LL, 0LL, v2);
  }
  return KeFlushTb(3u, 2u);
}
