/*
 * XREFs of InitClipFormatExceptionList @ 0x1C011C3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int InitClipFormatExceptionList()
{
  _DWORD *v0; // rdi
  _DWORD *v1; // rsi
  int result; // eax
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rcx
  ULONG v8; // ebx
  int v9; // eax
  unsigned __int16 v10; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v0 = 0LL;
  v1 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\ExceptionFormats");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( (v3 == -1073741789 || v3 == -2147483643)
      && (v0 = (_DWORD *)Win32AllocPool(Length, 1650684757LL)) != 0LL
      && ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0
      && (v6 = v0[8]) != 0
      && (LODWORD(WPP_MAIN_CB.Dpc.DpcData) = v0[8], v6 <= 0x1FFF)
      && (gpClipFormatExceptionList = Win32AllocPool(4LL * v6, 1650684757LL)) != 0LL
      && (v7 = (unsigned int)v0[10], (unsigned int)v7 < 0xFFFFFFF0)
      && (v1 = (_DWORD *)Win32AllocPool(v7 + 16, 1650684757LL)) != 0LL )
    {
      v8 = 0;
      if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) )
      {
        while ( ZwEnumerateValueKey(KeyHandle, v8, KeyValuePartialInformation, v1, v0[10] + 16, &Length) >= 0 )
        {
          v9 = v1[1];
          if ( v9 == 4 )
          {
            v4 = v8;
            *(_DWORD *)(gpClipFormatExceptionList + 4LL * v8) = v1[3];
          }
          else if ( v9 == 1 )
          {
            *((_WORD *)v1 + (unsigned int)v1[2] + 6) = 0;
            v10 = UserAddAtomEx(v1 + 3, 1LL, 2LL);
            if ( !v10 )
              break;
            v5 = v10;
            v4 = v8;
            *(_DWORD *)(gpClipFormatExceptionList + 4LL * v8) = v10;
          }
          if ( ++v8 >= LODWORD(WPP_MAIN_CB.Dpc.DpcData) )
            goto LABEL_15;
        }
        LODWORD(WPP_MAIN_CB.Dpc.DpcData) = v8;
      }
    }
    else
    {
      if ( gpClipFormatExceptionList )
      {
        Win32FreePool(gpClipFormatExceptionList, v4, v5);
        gpClipFormatExceptionList = 0LL;
      }
      LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 0;
    }
LABEL_15:
    if ( v1 )
      Win32FreePool(v1, v4, v5);
    if ( v0 )
      Win32FreePool(v0, v4, v5);
    return ZwClose(KeyHandle);
  }
  return result;
}
