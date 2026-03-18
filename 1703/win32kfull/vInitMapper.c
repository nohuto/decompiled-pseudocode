/*
 * XREFs of vInitMapper @ 0x1C0388900
 * Callers:
 *     <none>
 * Callees:
 *     InitializeFontSignatures @ 0x1C0388918 (InitializeFontSignatures.c)
 */

int vInitMapper()
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts();
}
