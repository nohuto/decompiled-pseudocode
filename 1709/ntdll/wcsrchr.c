/*
 * XREFs of wcsrchr @ 0x1800969C0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800180C0 (RtlpResolveAssemblyStorageMapEntry.c)
 *     LdrpGetDataModulePath @ 0x180018EF8 (LdrpGetDataModulePath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     CompatCachepLookupCdb @ 0x18007873C (CompatCachepLookupCdb.c)
 *     RtlpGetDirPath @ 0x18007D694 (RtlpGetDirPath.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180089DF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     EtwpGenerateFileName @ 0x18010A398 (EtwpGenerateFileName.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    --Str;
  while ( Str != v2 && *Str != Ch );
  if ( *Str == Ch )
    return (wchar_t *)Str;
  return v3;
}
