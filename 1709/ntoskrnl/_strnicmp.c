/*
 * XREFs of _strnicmp @ 0x14015E6A0
 * Callers:
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x140699C54 (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140834DC8 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x140834F88 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x14083E0B0 (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x140845950 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x14015E63C (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
