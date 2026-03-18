/*
 * XREFs of _strnicmp @ 0x140169D30
 * Callers:
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 *     IopStoreArcInformation @ 0x1407F8A30 (IopStoreArcInformation.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140806A50 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140806C08 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x140816E10 (CmpAppendSection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
