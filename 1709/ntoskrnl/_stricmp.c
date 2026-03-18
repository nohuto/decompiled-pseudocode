/*
 * XREFs of _stricmp @ 0x14015E5F0
 * Callers:
 *     ViThunkSnapSharedExportByName @ 0x1407A1E18 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1407A7DD4 (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x1407CBCE0 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140834EDC (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x14083ABA8 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x14083E0B0 (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x14015E5A8 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
