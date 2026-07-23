/*
 * XREFs of RtlIsDosDeviceName_U @ 0x18003FA40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E0C0 @ 0x18003E0C0 (sub_18003E0C0.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 */

ULONG __cdecl RtlIsDosDeviceName_U(PCWSTR DosFileName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, DosFileName) < 0 )
    return 0;
  else
    return sub_18003E0C0((__int64)&DestinationString);
}
