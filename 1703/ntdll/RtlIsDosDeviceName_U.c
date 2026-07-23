/*
 * XREFs of RtlIsDosDeviceName_U @ 0x18003C300
 * Callers:
 *     sub_18010BB44 @ 0x18010BB44 (sub_18010BB44.c)
 * Callees:
 *     sub_18003EF60 @ 0x18003EF60 (sub_18003EF60.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 */

ULONG __cdecl RtlIsDosDeviceName_U(PCWSTR DosFileName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, DosFileName) < 0 )
    return 0;
  else
    return sub_18003EF60(&DestinationString);
}
