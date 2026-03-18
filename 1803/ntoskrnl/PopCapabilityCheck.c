/*
 * XREFs of PopCapabilityCheck @ 0x14027473C
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140784D70 (RtlCapabilityCheck.c)
 */

char __fastcall PopCapabilityCheck(wchar_t *a1)
{
  __int64 v2; // rcx
  wchar_t *v3; // rdx
  __int16 v4; // ax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    *(_DWORD *)&SourceString.Length = 0;
    v2 = 0x7FFFLL;
    SourceString.Buffer = 0LL;
    v3 = a1;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --v2;
    }
    while ( v2 );
    if ( v2 )
      v4 = 0x7FFF - v2;
    else
      v4 = 0;
    if ( v2 )
    {
      SourceString.Buffer = a1;
      SourceString.Length = 2 * v4;
      SourceString.MaximumLength = 2 * v4 + 2;
      RtlCapabilityCheck(0LL, &SourceString);
    }
  }
  return 0;
}
