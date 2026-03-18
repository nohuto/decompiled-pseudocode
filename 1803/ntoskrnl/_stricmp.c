/*
 * XREFs of _stricmp @ 0x140188310
 * Callers:
 *     ViThunkSnapSharedExportByName @ 0x14080F1B4 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x140814F64 (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x140838CE0 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x1408AB0EC (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x1408AF44C (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x1408B1EC0 (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1401882C8 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
