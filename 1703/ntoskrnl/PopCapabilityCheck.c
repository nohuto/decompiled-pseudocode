/*
 * XREFs of PopCapabilityCheck @ 0x14022A410
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1406E9770 (RtlCapabilityCheck.c)
 */

char PopCapabilityCheck()
{
  __int64 v0; // rcx
  const wchar_t *v1; // rax
  __int16 v2; // r8
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&SourceString.Length = 0;
  v0 = 0x7FFFLL;
  SourceString.Buffer = 0LL;
  v1 = L"ID_CAP_SCREENOFF";
  do
  {
    if ( !*v1 )
      break;
    ++v1;
    --v0;
  }
  while ( v0 );
  if ( v0 )
    v2 = 0x7FFF - v0;
  else
    v2 = 0;
  if ( v0 )
  {
    SourceString.Buffer = L"ID_CAP_SCREENOFF";
    SourceString.Length = 2 * v2;
    SourceString.MaximumLength = 2 * v2 + 2;
    RtlCapabilityCheck(0LL, &SourceString);
  }
  return 0;
}
