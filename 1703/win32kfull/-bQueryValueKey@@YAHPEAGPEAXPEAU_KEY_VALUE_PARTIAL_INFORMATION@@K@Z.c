/*
 * XREFs of ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C000EBB4
 * Callers:
 *     bInitStockFontsInternal @ 0x1C038801C (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C038859C (bInitOneStockFont.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03885F8 (InitializeDefaultFamilyFonts.c)
 *     hfontInitDefaultGuiFont @ 0x1C038873C (hfontInitDefaultGuiFont.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bQueryValueKey(PCWSTR SourceString, HANDLE KeyHandle, PVOID KeyValueInformation, ULONG Length)
{
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           Length,
           &ResultLength) >= 0;
}
