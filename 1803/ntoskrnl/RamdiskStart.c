/*
 * XREFs of RamdiskStart @ 0x1408E2E3C
 * Callers:
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfA @ 0x140171A78 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _strupr @ 0x140187B20 (_strupr.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     _atoi64 @ 0x140187E70 (_atoi64.c)
 *     atol @ 0x140187EC0 (atol.c)
 *     ZwDeviceIoControlFile @ 0x1401A75A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlStringFromGUID @ 0x140518D40 (RtlStringFromGUID.c)
 *     IoCreateSymbolicLink @ 0x140603720 (IoCreateSymbolicLink.c)
 */

__int64 __fastcall RamdiskStart(__int64 a1)
{
  __int64 **v2; // rcx
  __int64 *v3; // rbx
  __int64 *i; // rax
  NTSTATUS Status; // ebx
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  char *v8; // rbx
  char *v9; // rax
  char *v10; // rax
  unsigned int v11; // eax
  char *v12; // rax
  char *v13; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  const wchar_t *v17; // [rsp+60h] [rbp-A0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING GuidString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+88h] [rbp-78h] BYREF
  _STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DeviceName; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD InputBuffer[8]; // [rsp+F0h] [rbp-10h] BYREF
  char pszDest[32]; // [rsp+130h] [rbp+30h] BYREF
  wchar_t SourceString[56]; // [rsp+150h] [rbp+50h] BYREF

  v2 = (__int64 **)(a1 + 32);
  FileHandle = 0LL;
  v3 = 0LL;
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v3 = i;
    if ( *((_DWORD *)i + 4) == 25 )
      break;
  }
  if ( i == (__int64 *)v2 )
  {
    Status = -1073741811;
    v6 = 1LL;
    goto LABEL_27;
  }
  memset(InputBuffer, 0, sizeof(InputBuffer));
  LODWORD(InputBuffer[0]) = 64;
  v6 = 3LL;
  HIDWORD(InputBuffer[2]) = 3;
  InputBuffer[6] = v3[3];
  LOWORD(InputBuffer[7]) = 0;
  LODWORD(InputBuffer[5]) = 0;
  LODWORD(InputBuffer[3]) = InputBuffer[3] & 0xFFFFFFE0 | 2;
  *(_OWORD *)((char *)InputBuffer + 4) = RamdiskBootDiskGuid;
  v7 = v3[4];
  v8 = *(char **)(a1 + 216);
  InputBuffer[4] = v7 << 12;
  if ( v8 )
  {
    strupr(v8);
    v9 = strstr(v8, "RDIMAGEOFFSET");
    if ( v9 && (v10 = strstr(v9, "=")) != 0LL )
    {
      v11 = atol(v10 + 1);
      LODWORD(InputBuffer[5]) = v11;
    }
    else
    {
      v11 = InputBuffer[5];
    }
    InputBuffer[4] -= v11;
    v12 = strstr(v8, "RDIMAGELENGTH");
    if ( v12 )
    {
      v13 = strstr(v12, "=");
      if ( v13 )
        InputBuffer[4] = atoi64(v13 + 1);
    }
  }
  v16 = 2097182;
  v17 = L"\\Device\\Ramdisk";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
  {
    v6 = 2LL;
    goto LABEL_27;
  }
  Status = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x240000u, InputBuffer, 0x40u, 0LL, 0);
  ZwClose(FileHandle);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
LABEL_27:
    KeBugCheckEx(0xF8u, v6, Status, 0LL, 0LL);
  Status = RtlStringFromGUID((const GUID *const)((char *)InputBuffer + 4), &GuidString);
  if ( Status < 0 )
  {
    v6 = 4LL;
    goto LABEL_27;
  }
  RtlStringCbPrintfA(pszDest, 0x14uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, pszDest);
  Status = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &DestinationString, 1u);
  if ( Status < 0 )
  {
    v6 = 5LL;
    goto LABEL_27;
  }
  RtlStringCbPrintfW(SourceString, 0x6CuLL, L"\\Device\\Ramdisk%wZ", &GuidString);
  RtlInitUnicodeString(&DeviceName, SourceString);
  Status = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&SymbolicLinkName);
  if ( Status < 0 )
  {
    v6 = 6LL;
    goto LABEL_27;
  }
  return 0LL;
}
