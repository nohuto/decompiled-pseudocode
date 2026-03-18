/*
 * XREFs of _stricmp @ 0x140169CA0
 * Callers:
 *     ViThunkSnapSharedExportByName @ 0x140762088 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x140766238 (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x14078E20C (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x140806B5C (CmpSearchSectionByName.c)
 *     CmpAppendSection @ 0x140816E10 (CmpAppendSection.c)
 *     CmpSetupConfigurationTree @ 0x14081E820 (CmpSetupConfigurationTree.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
