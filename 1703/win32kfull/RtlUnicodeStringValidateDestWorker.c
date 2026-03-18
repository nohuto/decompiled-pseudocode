/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1C00C0E28
 * Callers:
 *     RtlUnicodeStringCopyString @ 0x1C00C0CBC (RtlUnicodeStringCopyString.c)
 *     RtlUnicodeStringCatString @ 0x1C00C0D7C (RtlUnicodeStringCatString.c)
 *     AccessPTPEnabledStatus @ 0x1C01051B0 (AccessPTPEnabledStatus.c)
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C0108A80 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     ?OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z @ 0x1C0118B00 (-OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z.c)
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
  NTSTATUS v6; // r10d
  USHORT Length; // r11
  USHORT MaximumLength; // ax
  wchar_t *Buffer; // rdx

  v6 = 0;
  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
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
    return -1073741811;
  *ppszDest = Buffer;
  *pcchDest = (unsigned __int64)MaximumLength >> 1;
  if ( pcchDestLength )
    *pcchDestLength = (unsigned __int64)Length >> 1;
  return v6;
}
