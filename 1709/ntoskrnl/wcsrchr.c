/*
 * XREFs of wcsrchr @ 0x140160610
 * Callers:
 *     PiLookupInDDBCache @ 0x140544758 (PiLookupInDDBCache.c)
 *     PiIsDriverBlocked @ 0x140544A88 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x140544B48 (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x1405450C4 (AslPathSplit.c)
 *     SdbGetDatabaseMatchEx @ 0x140547A18 (SdbGetDatabaseMatchEx.c)
 *     EtwpGenerateFileName @ 0x14059E648 (EtwpGenerateFileName.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405A24F0 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1405AEE54 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDqDeleteUserObject @ 0x1406C4078 (PiDqDeleteUserObject.c)
 *     BiTranslateSymbolicLinkFile @ 0x14077A164 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14077F360 (_CmDeleteDeviceRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140786114 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
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
