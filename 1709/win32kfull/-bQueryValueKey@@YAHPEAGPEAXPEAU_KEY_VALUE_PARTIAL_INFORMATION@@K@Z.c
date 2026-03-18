/*
 * XREFs of ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00C09A4
 * Callers:
 *     bInitStockFontsInternal @ 0x1C038220C (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C03826F0 (bInitOneStockFont.c)
 *     InitializeDefaultFamilyFonts @ 0x1C038274C (InitializeDefaultFamilyFonts.c)
 *     hfontInitDefaultGuiFont @ 0x1C038287C (hfontInitDefaultGuiFont.c)
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
