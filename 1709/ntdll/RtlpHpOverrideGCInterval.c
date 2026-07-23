/*
 * XREFs of RtlpHpOverrideGCInterval @ 0x1800F0948
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800EEF80 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

int __fastcall RtlpHpOverrideGCInterval(unsigned __int16 *a1)
{
  const WCHAR *i; // rdx
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING Destination; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  __int64 KeyValueInformation; // [rsp+90h] [rbp-70h] BYREF
  __int128 v9; // [rsp+98h] [rbp-68h]
  _BYTE v10[512]; // [rsp+B0h] [rbp-50h] BYREF

  for ( i = (const WCHAR *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)); *i != 92; --i )
    ;
  RtlInitUnicodeString(&DestinationString, i);
  KeyHandle = 0LL;
  memset(v10, 0, sizeof(v10));
  *(_DWORD *)&Destination.Length = 0x2000000;
  KeyValueInformation = 0LL;
  v9 = 0uLL;
  Destination.Buffer = (wchar_t *)v10;
  RtlAppendUnicodeStringToString(&Destination, &stru_180114398);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_1801143A8,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x18u,
               &ResultLength);
    if ( result >= 0 )
    {
      result = -10000000 * DWORD1(v9);
      RtlpHpGCInterval.QuadPart = -10000000LL * *(_QWORD *)((char *)&v9 + 4);
    }
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
