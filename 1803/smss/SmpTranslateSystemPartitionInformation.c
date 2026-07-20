/*
 * XREFs of SmpTranslateSystemPartitionInformation @ 0x1400051B0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140007064 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 */

int SmpTranslateSystemPartitionInformation()
{
  int result; // eax
  NTSTATUS v1; // ebx
  NTSTATUS v2; // ebx
  __int64 NtSystemRoot; // rax
  _BYTE *v4; // r8
  __int64 v5; // rdx
  ULONG Context; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  void *SymbolicLinkHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp-68h] BYREF
  int v12; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *v13; // [rsp+A8h] [rbp-58h]
  struct _UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING String2; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  int v17; // [rsp+E0h] [rbp-20h] BYREF
  const wchar_t *v18; // [rsp+E8h] [rbp-18h]
  struct _UNICODE_STRING v19; // [rsp+F0h] [rbp-10h] BYREF
  __int16 Buffer; // [rsp+100h] [rbp+0h] BYREF
  _BYTE *i; // [rsp+108h] [rbp+8h]
  UNICODE_STRING String1; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v23[544]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD Data[128]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+540h] [rbp+440h] BYREF
  WCHAR SourceString[258]; // [rsp+54Ch] [rbp+44Ch] BYREF

  v12 = 4063292;
  v13 = L"\\Registry\\Machine\\System\\Setup";
  *(_DWORD *)&ValueName.Length = 2097182;
  ValueName.Buffer = L"SystemPartition";
  *(_DWORD *)&String2.Length = 1703960;
  String2.Buffer = L"SymbolicLink";
  Context = 0;
  v18 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Setup";
  v17 = 8650882;
  v19.Buffer = L"BootDir";
  *(_DWORD *)&v19.Length = 1048590;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v1 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x210u, &ResultLength);
    result = NtClose(KeyHandle);
    if ( v1 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      LinkTarget.Buffer = (PWSTR)Data;
      result = NtQueryDirectoryObject(SmpDosDevicesObjectDirectory, &Buffer, 0x23Au, 1u, 1u, &Context, 0LL);
      if ( result < 0 )
      {
LABEL_19:
        if ( result != -2147483622 )
          return result;
        NtSystemRoot = RtlGetNtSystemRoot();
        v4 = v23;
        v5 = 0LL;
        for ( i = v23; ; v4 = i )
        {
          *(_WORD *)&v4[v5] = *(_WORD *)(v5 + NtSystemRoot);
          v5 += 2LL;
          if ( v5 >= 4 )
            break;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          {
            if ( Buffer == 4 && *((_WORD *)i + 1) == 58 )
            {
              ObjectAttributes.RootDirectory = SmpDosDevicesObjectDirectory;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&Buffer;
              ObjectAttributes.Attributes = 64;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
              {
                *(_DWORD *)&LinkTarget.Length = 0x2000000;
                v2 = NtQuerySymbolicLinkObject(SymbolicLinkHandle, &LinkTarget, 0LL);
                NtClose(SymbolicLinkHandle);
                if ( v2 >= 0
                  && (RtlEqualUnicodeString(&DestinationString, &LinkTarget, 1u)
                   || RtlPrefixUnicodeString(&DestinationString, &LinkTarget, 1u)
                   && LinkTarget.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92) )
                {
                  break;
                }
              }
            }
          }
          result = NtQueryDirectoryObject(SmpDosDevicesObjectDirectory, &Buffer, 0x23Au, 1u, 0, &Context, 0LL);
          if ( result < 0 )
            goto LABEL_19;
        }
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      if ( result >= 0 )
      {
        Data[0] = *(_DWORD *)i;
        Data[1] = 92;
        NtSetValueKey(KeyHandle, &v19, 0, 1u, Data, 8u);
        return NtClose(KeyHandle);
      }
    }
  }
  return result;
}
