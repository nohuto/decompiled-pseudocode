/*
 * XREFs of vInitMapper @ 0x1C03821F0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeDefaultFamilyFonts @ 0x1C038274C (InitializeDefaultFamilyFonts.c)
 *     InitializeFontSignatures @ 0x1C0382B5C (InitializeFontSignatures.c)
 */

__int64 vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
