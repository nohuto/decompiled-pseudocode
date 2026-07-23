/*
 * XREFs of ResCOpenRegistryKey @ 0x18001A938
 * Callers:
 *     ResCKeInitRuntimeViewEx @ 0x18001AEC4 (ResCKeInitRuntimeViewEx.c)
 *     ResCGetRegistryLatestIndex @ 0x18010EC60 (ResCGetRegistryLatestIndex.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18001B2C0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall ResCOpenRegistryKey(PHANDLE KeyHandle, _DWORD *a2, const unsigned __int16 *a3)
{
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF

  wcscpy(SourceString, L"\\Registry\\Machine\\");
  v6 = 0;
  memset(&SourceString[19], 0, 0x1E4uLL);
  if ( KeyHandle
    && a2
    && a3
    && StringCchCatW(SourceString, 0x105uLL, a3) >= 0
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *KeyHandle = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = NtOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
    *a2 = 2;
    return v7 >= 0;
  }
  return v6;
}
