/*
 * XREFs of SdbpCheckMatchingRegistryEntry @ 0x1407D568C
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x1407D5560 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1407D5878 (SdbpCheckMatchingRegistryValue.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryEntry(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  unsigned int v11; // edi
  NTSTATUS v12; // eax
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int64 SystemInformation; // [rsp+98h] [rbp-68h] BYREF
  int v18; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest[264]; // [rsp+B0h] [rbp-50h] BYREF

  pszDest[0] = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *a9 = 0;
  v11 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  SystemInformation = 0LL;
  v18 = 0;
  if ( RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\REGISTRY\\MACHINE\\%s", a1) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingRegistryEntry",
      1254,
      (unsigned int)"Failed to construct full key path");
    goto LABEL_10;
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    goto LABEL_9;
  v12 = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
  if ( v12 < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingRegistryEntry",
      1289,
      (unsigned int)"Failed to get processor architecture [%x]",
      v12);
    goto LABEL_10;
  }
  if ( (_WORD)SystemInformation == 9 && ZwOpenKey(&KeyHandle, 0x20219u, &ObjectAttributes) >= 0 )
LABEL_9:
    v11 = SdbpCheckMatchingRegistryValue(KeyHandle, a2, a5, a6, Buf1, Size, (__int64)a9);
  else
    v11 = 1;
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v11;
}
