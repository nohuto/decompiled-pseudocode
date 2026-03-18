/*
 * XREFs of SepAdtOpenEtwReadyEvent @ 0x140632198
 * Callers:
 *     SepRmCallLsa @ 0x1400C7970 (SepRmCallLsa.c)
 *     SepAdtInitializeAuditingOptions @ 0x1408B2164 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     NtCreateEvent @ 0x1404C3A60 (NtCreateEvent.c)
 */

NTSTATUS __fastcall SepAdtOpenEtwReadyEvent(PHANDLE EventHandle)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\ADT_ETW_CHANNEL_INIT");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 640;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateEvent(EventHandle, 0x100003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result == 0x40000000 || result == -1073741771 )
    return 0;
  return result;
}
