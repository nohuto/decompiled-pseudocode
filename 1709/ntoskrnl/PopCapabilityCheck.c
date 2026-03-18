/*
 * XREFs of PopCapabilityCheck @ 0x14023D29C
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1407215D0 (RtlCapabilityCheck.c)
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
