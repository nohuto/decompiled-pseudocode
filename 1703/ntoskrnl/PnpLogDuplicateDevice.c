/*
 * XREFs of PnpLogDuplicateDevice @ 0x1406A6FE0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PnpLogEvent @ 0x140695B4C (PnpLogEvent.c)
 */

void __fastcall PnpLogDuplicateDevice(PCWSTR SourceString, PCWSTR a2)
{
  unsigned __int16 Length; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v5; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v5, a2);
  if ( (unsigned __int64)v5.MaximumLength + 2 > 0xF0 )
  {
    DestinationString.Length = 0;
    v5.Length = 238;
    Length = 0;
  }
  else if ( v5.MaximumLength + (unsigned __int64)DestinationString.MaximumLength <= 0xF0 )
  {
    Length = DestinationString.Length;
  }
  else
  {
    Length = 238 - v5.MaximumLength;
    DestinationString.Length = 238 - v5.MaximumLength;
  }
  PnpLogEvent(
    (const void **)((unsigned __int64)&DestinationString & -(__int64)(Length != 0)),
    (const void **)&v5,
    -1073479624,
    0LL,
    0);
}
