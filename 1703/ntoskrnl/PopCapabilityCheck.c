/*
 * XREFs of PopCapabilityCheck @ 0x14022A410
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1406E9770 (RtlCapabilityCheck.c)
 */

char __fastcall PopCapabilityCheck(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rcx
  const wchar_t *v3; // rax
  __int16 v4; // r8
  NTSTATUS v5; // eax
  char v6; // cl
  UNICODE_STRING CapabilityName; // [rsp+20h] [rbp-18h] BYREF
  __int64 HasCapability; // [rsp+40h] [rbp+8h] BYREF

  HasCapability = a1;
  v1 = 0;
  LOBYTE(HasCapability) = 0;
  *(_DWORD *)&CapabilityName.Length = 0;
  v2 = 0x7FFFLL;
  CapabilityName.Buffer = 0LL;
  v3 = L"ID_CAP_SCREENOFF";
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
    CapabilityName.Buffer = L"ID_CAP_SCREENOFF";
    CapabilityName.Length = 2 * v4;
    CapabilityName.MaximumLength = 2 * v4 + 2;
    v5 = RtlCapabilityCheck(0LL, &CapabilityName, (PBOOLEAN)&HasCapability);
    v6 = HasCapability;
    if ( v5 < 0 )
      return 0;
    return v6;
  }
  return v1;
}
