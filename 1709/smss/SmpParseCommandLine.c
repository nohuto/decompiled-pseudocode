/*
 * XREFs of SmpParseCommandLine @ 0x1400026F0
 * Callers:
 *     SmpExecuteCommand @ 0x1400025D8 (SmpExecuteCommand.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000808C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCreatePagingFileDescriptor @ 0x140009824 (SmpCreatePagingFileDescriptor.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140001C54 (RtlStringCbPrintfW.c)
 *     SmpParseToken @ 0x140002A50 (SmpParseToken.c)
 *     SmpExpandEnvironmentString @ 0x140002BB8 (SmpExpandEnvironmentString.c)
 *     SmpQueryEnvVariable @ 0x140002F7C (SmpQueryEnvVariable.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpParseCommandLine(
        __int128 *a1,
        _DWORD *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        struct _UNICODE_STRING *DestinationString)
{
  ULONG v7; // r14d
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  PWSTR PartName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  const wchar_t *v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  WCHAR DosPathName[264]; // [rsp+80h] [rbp-80h] BYREF

  v18 = L"Path";
  v17 = 655368;
  PartName = 0LL;
  v7 = 0;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(DestinationString, 0LL);
  v19 = *a1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = SmpParseToken(&v19, 0LL, &String1);
        if ( v10 < 0 || !String1.Buffer )
          return 3221225473LL;
        if ( !a2 )
        {
          v10 = RtlStringCbPrintfW(DosPathName, 0x208uLL, L"%s");
          goto LABEL_18;
        }
        if ( !RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u) )
          break;
        *a2 |= 1u;
        RtlFreeUnicodeString(&String1);
      }
      if ( !RtlEqualUnicodeString(&String1, &SmpASyncKeyword, 1u) )
        break;
      *a2 |= 2u;
      RtlFreeUnicodeString(&String1);
    }
    if ( !RtlEqualUnicodeString(&String1, &SmpAutoChkKeyword, 1u) )
      break;
    if ( !SmpPrimarySmss )
      return 3221225485LL;
    if ( SmpHostSmss )
      *a2 |= 4u;
    RtlFreeUnicodeString(&String1);
  }
  if ( (*a2 & 0x400) != 0 )
  {
    *a3 = String1;
    goto LABEL_23;
  }
  if ( (*a2 & 8) != 0 )
  {
    result = SmpExpandEnvironmentString(&String1);
    v10 = result;
    if ( (int)result < 0 )
      return result;
  }
  if ( RtlCompareUnicodeString(&SmpS0InitCmd, &String1, 0) && RtlCompareUnicodeString(&SmscpDefaultCmd, &String1, 0) )
  {
    RtlInitUnicodeString(&v16, 0LL);
    v10 = SmpQueryEnvVariable(v12, &v17, &v16);
    if ( v10 >= 0 )
      v7 = RtlDosSearchPath_U(v16.Buffer, String1.Buffer, L".exe", 0x208u, DosPathName, &PartName);
    if ( v16.Buffer )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v16.Buffer);
  }
  if ( v10 < 0
    || v7
    || RtlDosSearchPath_U(SmpDefaultLibPath.Buffer, String1.Buffer, L".exe", 0x208u, DosPathName, &PartName) )
  {
LABEL_18:
    RtlFreeUnicodeString(&String1);
    if ( v10 >= 0 )
    {
      if ( RtlDosPathNameToNtPathName_U(DosPathName, a3, 0LL, 0LL) )
      {
        if ( a4 )
        {
          if ( PartName > DosPathName )
          {
            *--PartName = 0;
            if ( RtlCreateUnicodeString(a4, DosPathName) == 1 )
              goto LABEL_23;
            v10 = -1073741823;
          }
          RtlInitUnicodeString(a4, 0LL);
        }
        if ( v10 < 0 )
        {
LABEL_51:
          RtlFreeUnicodeString(a3);
          if ( a4 )
            RtlFreeUnicodeString(a4);
          return (unsigned int)v10;
        }
LABEL_23:
        LOBYTE(v11) = 1;
        v10 = SmpParseToken(&v19, v11, DestinationString);
        if ( v10 >= 0 )
        {
          if ( a2 && (*(_BYTE *)a2 & 8) != 0 && DestinationString->Length )
            v10 = SmpExpandEnvironmentString(DestinationString);
          if ( v10 >= 0 )
            return (unsigned int)v10;
        }
        goto LABEL_51;
      }
      return (unsigned int)-1073741767;
    }
    return (unsigned int)v10;
  }
  *a2 |= 0x10u;
  *a3 = String1;
  if ( a4 )
    RtlInitUnicodeString(a4, 0LL);
  return 0LL;
}
