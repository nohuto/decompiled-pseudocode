/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C007DAD0
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00FF22C (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00FF3E4 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00FF52C (PpRegStateUpdateStackCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00FF714 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00FF7C4 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00FFAB4 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00FFAE4 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall WdmlibRtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  NTSTATUS result; // eax
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax

  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 > 0x7FFE )
      return -1073741562;
    v4 = 2 * v2;
    DestinationString->Length = v4;
    v5 = v4 + 2;
  }
  else
  {
    DestinationString->Length = 0;
    SourceString = 0LL;
    v5 = 0;
  }
  DestinationString->MaximumLength = v5;
  result = 0;
  DestinationString->Buffer = (wchar_t *)SourceString;
  return result;
}
