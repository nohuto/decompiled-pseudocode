/*
 * XREFs of WerpEscalationIsWMRSendStringSet @ 0x18008FA10
 * Callers:
 *     WerEscalationLazyInit @ 0x18008F6D8 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800DD9D0 (WerpEscalationReadUlongFromKey.c)
 */

__int64 WerpEscalationIsWMRSendStringSet()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v3; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]
  __int128 v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+70h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  Handle = 0LL;
  v10 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\WMR");
  v5 = 48;
  p_DestinationString = &DestinationString;
  v6 = 0LL;
  v8 = 64;
  v9 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131353LL, &v5) >= 0 )
  {
    v3 = WerpEscalationReadUlongFromKey(Handle, L"WMRSendMessageString", &v10);
    v1 = v10;
    if ( v3 < 0 )
      v1 = 0;
  }
  else
  {
    v1 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  LOBYTE(v0) = v1 != 0;
  return v0;
}
