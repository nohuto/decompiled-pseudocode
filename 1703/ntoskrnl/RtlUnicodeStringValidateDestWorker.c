/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x140156F2C
 * Callers:
 *     RtlUnicodeStringPrintf @ 0x140156E08 (RtlUnicodeStringPrintf.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS v6; // r9d
  unsigned __int16 Length; // dx
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // r8

  v6 = 0;
  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( DestinationString || (dwFlags & 0x100) == 0 )
  {
    Length = DestinationString->Length;
    if ( (DestinationString->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = DestinationString->MaximumLength;
    if ( (MaximumLength & 1) != 0 )
      return -1073741811;
    if ( Length > MaximumLength )
      return -1073741811;
    if ( MaximumLength == 0xFFFF )
      return -1073741811;
    Buffer = DestinationString->Buffer;
    if ( !Buffer && (Length || MaximumLength) )
    {
      return -1073741811;
    }
    else
    {
      *pcchDest = (unsigned __int64)MaximumLength >> 1;
      *ppszDest = Buffer;
    }
  }
  return v6;
}
