/*
 * XREFs of ?OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z @ 0x1C0118B00
 * Callers:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00C0A48 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00C0E28 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringCopy @ 0x1C00C0EA4 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall OpenUserProfileKeyForPTP(ACCESS_MASK DesiredAccess, void **a2)
{
  NTSTATUS v4; // r11d
  const wchar_t *v5; // rax
  __int64 v6; // rdx
  __int16 v7; // bx
  __int16 v8; // r9
  size_t v9; // r8
  char *v10; // r10
  size_t v12; // [rsp+20h] [rbp-358h]
  ULONG v13; // [rsp+28h] [rbp-350h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-348h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-338h] BYREF
  size_t pcchDest; // [rsp+48h] [rbp-330h] BYREF
  size_t pcchDestLength; // [rsp+50h] [rbp-328h] BYREF
  wchar_t *ppszDest; // [rsp+58h] [rbp-320h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-318h] BYREF
  char v20; // [rsp+90h] [rbp-2E8h] BYREF

  KeyHandle = 0LL;
  if ( !grpWinStaList )
    return 3221225701LL;
  *(_DWORD *)&DestinationString.Length = 45875200;
  DestinationString.Buffer = (PWSTR)&v20;
  v4 = RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)(grpWinStaList + 168LL));
  if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, &pcchDestLength, v12, v13);
    if ( v4 >= 0 )
    {
      v5 = L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad";
      v6 = 0x7FFFLL;
      v7 = pcchDestLength;
      v4 = 0;
      v8 = 0;
      v9 = pcchDest - pcchDestLength;
      if ( pcchDest == pcchDestLength )
        goto LABEL_19;
      v10 = (char *)ppszDest
          + 2 * pcchDestLength
          - (_QWORD)L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad";
      while ( v6 && *v5 )
      {
        *(const wchar_t *)((char *)v5 + (_QWORD)v10) = *v5;
        --v6;
        ++v5;
        ++v8;
        if ( !--v9 )
          goto LABEL_17;
      }
      if ( v9 )
        goto LABEL_11;
LABEL_17:
      if ( v6 && *v5 )
LABEL_19:
        v4 = -2147483643;
LABEL_11:
      DestinationString.Length = 2 * (v7 + v8);
    }
    if ( v4 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
      if ( v4 >= 0 )
        *a2 = KeyHandle;
    }
  }
  return (unsigned int)v4;
}
