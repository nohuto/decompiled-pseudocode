/*
 * XREFs of PopCapabilityCheck @ 0x14027473C
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140784D70 (RtlCapabilityCheck.c)
 */

BOOLEAN __fastcall PopCapabilityCheck(wchar_t *a1)
{
  char v1; // bl
  __int64 v3; // rcx
  wchar_t *v4; // rdx
  __int16 v5; // ax
  NTSTATUS v6; // eax
  BOOLEAN v7; // cl
  UNICODE_STRING CapabilityName; // [rsp+20h] [rbp-18h] BYREF
  BOOLEAN HasCapability; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  HasCapability = 0;
  if ( a1 )
  {
    *(_DWORD *)&CapabilityName.Length = 0;
    v3 = 0x7FFFLL;
    CapabilityName.Buffer = 0LL;
    v4 = a1;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v3;
    }
    while ( v3 );
    v5 = v3 ? 0x7FFF - v3 : 0;
    if ( v3 )
    {
      CapabilityName.Buffer = a1;
      CapabilityName.Length = 2 * v5;
      CapabilityName.MaximumLength = 2 * v5 + 2;
      v6 = RtlCapabilityCheck(0LL, &CapabilityName, &HasCapability);
      v7 = HasCapability;
      if ( v6 < 0 )
        return 0;
      return v7;
    }
  }
  return v1;
}
