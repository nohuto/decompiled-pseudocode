/*
 * XREFs of GetNlsTablePath @ 0x1C0258654
 * Callers:
 *     ConvertToAndFromWideChar @ 0x1C00F1C50 (ConvertToAndFromWideChar.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     StringCchCatW @ 0x1C0258814 (StringCchCatW.c)
 */

__int64 __fastcall GetNlsTablePath(unsigned int a1, wchar_t *a2)
{
  int v4; // ebx
  wchar_t *v5; // rdi
  size_t v6; // rdx
  wchar_t *v7; // rcx
  wchar_t v8; // ax
  ULONG Length; // [rsp+30h] [rbp-98h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-78h] BYREF
  wchar_t Dst[20]; // [rsp+80h] [rbp-48h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v5 = (wchar_t *)PALLOCMEM2(0x220uLL, 1936485959LL, 1);
    if ( v5 )
    {
      swprintf_s(Dst, 0x14uLL, L"%d", a1);
      RtlInitUnicodeString(&DestinationString, Dst);
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v5, Length, &Length) >= 0 )
      {
        v6 = 260LL;
        v7 = a2;
        while ( v6 != -2147483386LL )
        {
          v8 = *(wchar_t *)((char *)v7 + (char *)L"\\SystemRoot\\System32\\" - (char *)a2);
          if ( !v8 )
            break;
          *v7++ = v8;
          if ( !--v6 )
          {
            --v7;
            v4 = -2147024774;
            break;
          }
        }
        *v7 = 0;
        v4 = v4 >= 0;
        if ( v4 )
          v4 = StringCchCatW(a2, v6, v5 + 6) >= 0;
      }
      Win32FreePool(v5, v6);
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v4;
}
