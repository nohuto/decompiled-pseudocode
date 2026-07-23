/*
 * XREFs of sub_180031574 @ 0x180031574
 * Callers:
 *     sub_180041510 @ 0x180041510 (sub_180041510.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_180081384 @ 0x180081384 (sub_180081384.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 */

__int64 __fastcall sub_180031574(PCWSTR Source, unsigned int *a2, _WORD *a3)
{
  unsigned int v6; // r15d
  NTSTATUS appended; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  char v14; // [rsp+90h] [rbp-70h] BYREF

  if ( !a2 || !Source )
    return 3221225485LL;
  v6 = *a2;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Latest");
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWCH)&v14;
  appended = RtlAppendUnicodeToString(
               &Destination,
               L"\\Registry\\Machine\\Software\\Microsoft\\LanguageOverlay\\OverlayPackages");
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, "\\");
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, Source);
      if ( appended >= 0 )
      {
        KeyHandle = 0LL;
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        appended = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( appended >= 0 )
        {
          appended = sub_180081384(KeyHandle, &DestinationString, (__int64)a2);
          if ( appended >= 0 )
          {
            if ( v10 == 1 )
            {
              if ( *a2 > v6 )
                appended = -1073741789;
              else
                a3[((unsigned __int64)*a2 >> 1) - 1] = 0;
              if ( appended >= 0 )
                goto LABEL_7;
            }
            else
            {
              appended = -1073741476;
            }
          }
          if ( a3 && v6 >= 2 )
            *a3 = 0;
        }
      }
    }
  }
LABEL_7:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)appended;
}
