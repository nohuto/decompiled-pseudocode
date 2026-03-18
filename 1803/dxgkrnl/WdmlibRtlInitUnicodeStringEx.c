/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C0038A40
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C01EC410 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C01EC5C8 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C01EC710 (PpRegStateUpdateStackCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C01EC9C4 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C01ECA74 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C01ECD64 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C01ECD94 (CmRegUtilWstrValueSetWstrString.c)
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
