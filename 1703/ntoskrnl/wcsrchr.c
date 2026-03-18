/*
 * XREFs of wcsrchr @ 0x14016BD30
 * Callers:
 *     EtwpGenerateFileName @ 0x14045E0F4 (EtwpGenerateFileName.c)
 *     PiLookupInDDBCache @ 0x1404B3E70 (PiLookupInDDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x1404B54AC (SdbGetDatabaseMatchEx.c)
 *     AslPathSplit @ 0x1404B603C (AslPathSplit.c)
 *     PiIsDriverBlocked @ 0x1404B6244 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x1404B6304 (PiUpdateDriverDBCache.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14058AC08 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14059011C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDqDeleteUserObject @ 0x1406985F8 (PiDqDeleteUserObject.c)
 *     BiTranslateSymbolicLinkFile @ 0x140735D20 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14073AC6C (_CmDeleteDeviceRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1407422EC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
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
