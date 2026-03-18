/*
 * XREFs of _strnicmp @ 0x1401883C0
 * Callers:
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x1406FE2C0 (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1408AAFE4 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x1408AB198 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x1408B1EC0 (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x1408C6DD0 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x140188358 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
