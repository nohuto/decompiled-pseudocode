/*
 * XREFs of SmpConfigureExistingPageFiles @ 0x140009050
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x140008794 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureExistingPageFiles(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  return SmpSaveRegistryValue(a6, a3, 0LL, 1u, 0LL);
}
