/*
 * XREFs of DpiCopyUnicodeString @ 0x1C011B134
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C001188C (DpiGetDeviceRegistryPaths.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0119E10 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v2; // ebx
  unsigned __int16 MaximumLength; // ax
  wchar_t *PoolWithTag; // rax
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = 0;
  if ( DestinationString && SourceString && (MaximumLength = SourceString->MaximumLength) != 0 && SourceString->Buffer )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, MaximumLength, 0x74727044u);
    DestinationString->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      DestinationString->MaximumLength = SourceString->MaximumLength;
      RtlCopyUnicodeString(DestinationString, SourceString);
    }
    else
    {
      v2 = -1073741801;
      v9 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v9 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v9);
    }
  }
  else
  {
    v2 = -1073741811;
    v10 = WdLogNewEntry5_WdError(DestinationString, SourceString);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
  }
  return v2;
}
