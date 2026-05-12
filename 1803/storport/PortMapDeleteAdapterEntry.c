/*
 * XREFs of PortMapDeleteAdapterEntry @ 0x1C0048244
 * Callers:
 *     RaidAdapterDisableDeviceInterface @ 0x1C0025E70 (RaidAdapterDisableDeviceInterface.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0012254 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PortMapDeleteAdapterEntry(int a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszDest[256]; // [rsp+80h] [rbp-80h] BYREF

  RtlStringCbPrintfW(pszDest, 0x200uLL, L"%s\\Scsi Port %d", L"\\Registry\\Machine\\Hardware\\DeviceMap\\Scsi", a1);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v2 = result;
  if ( result >= 0 )
  {
    ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v2;
  }
  return result;
}
