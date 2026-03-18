/*
 * XREFs of rimLoadImage @ 0x1C0106FB8
 * Callers:
 *     RIMInitialize @ 0x1C006AF90 (RIMInitialize.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C009D390 (wcsrchr.c)
 *     _strnicmp @ 0x1C009D460 (_strnicmp.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

struct _SYSTEM_GDI_DRIVER_INFORMATION *rimLoadImage()
{
  NTSTATUS v0; // eax
  int v1; // edi
  wchar_t *v3; // rax
  const WCHAR *v4; // rax
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  _DWORD *v7; // rax
  _DWORD *v8; // rsi
  int v9; // ebx
  void *v10; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG ReturnLength; // [rsp+28h] [rbp-E0h] BYREF
  ULONG Size; // [rsp+2Ch] [rbp-DCh] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING v15; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE SystemInformation[304]; // [rsp+68h] [rbp-A0h] BYREF

  memset(&gHidParseImageInfo, 0, sizeof(gHidParseImageInfo));
  RtlInitUnicodeString(&v15, L"\\SystemRoot\\System32\\Drivers\\hidparse.sys");
  gHidParseImageInfo.DriverName = v15;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gHidParseImageInfo, 0x38uLL);
  v1 = 0;
  if ( v0 >= 0 )
    return &gHidParseImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  v3 = wcsrchr(L"\\SystemRoot\\System32\\Drivers\\hidparse.sys", 0x5Cu);
  v4 = v3 ? v3 + 1 : L"\\SystemRoot\\System32\\Drivers\\hidparse.sys";
  RtlInitUnicodeString(&SourceString, v4);
  if ( RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u) < 0 )
    return 0LL;
  v5 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741820 )
  {
    while ( 1 )
    {
      v7 = (_DWORD *)Win32AllocPool(ReturnLength, 0x646C6452u);
      v8 = v7;
      if ( !v7 )
        break;
      v6 = ZwQuerySystemInformation(SystemModuleInformation, v7, ReturnLength, &ReturnLength);
      if ( v6 != -1073741820 )
      {
        if ( v6 >= 0 )
        {
          v9 = 0;
          if ( *v8 )
          {
            while ( strnicmp(
                      (const char *)&v8[74 * v9 + 12] + HIWORD(v8[74 * v9 + 11]),
                      DestinationString.Buffer,
                      DestinationString.Length) )
            {
              if ( (unsigned int)++v9 >= *v8 )
                goto LABEL_21;
            }
            v10 = *(void **)&v8[74 * v9 + 6];
            qword_1C018C028 = (__int64)RtlImageDirectoryEntryToData(v10, 1u, 0, &Size);
            AddressOfEntryPoint = RtlImageNtHeader(v10)->OptionalHeader.AddressOfEntryPoint;
            qword_1C018C018 = 0LL;
            qword_1C018C020 = (__int64)v10 + AddressOfEntryPoint;
            v1 = 1;
            qword_1C018C010 = (__int64)v10;
          }
        }
LABEL_21:
        Win32FreePool((__int64)v8);
        break;
      }
      Win32FreePool((__int64)v8);
    }
  }
  RtlFreeAnsiString(&DestinationString);
  if ( v1 == 1 )
    return &gHidParseImageInfo;
  else
    return 0LL;
}
