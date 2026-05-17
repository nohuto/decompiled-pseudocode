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

__int64 __fastcall sub_180031574(__int64 a1, unsigned int *a2, _WORD *a3)
{
  unsigned int v6; // r15d
  int appended; // ebx
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  char *v12; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h]
  int *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  __int128 v18; // [rsp+80h] [rbp-80h]
  char v19; // [rsp+90h] [rbp-70h] BYREF

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = *a2;
  v9 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Latest");
  v11 = 0x2000000;
  v12 = &v19;
  appended = RtlAppendUnicodeToString(
               &v11,
               L"\\Registry\\Machine\\Software\\Microsoft\\LanguageOverlay\\OverlayPackages");
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString(&v11, "\\");
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&v11, a1);
      if ( appended >= 0 )
      {
        v9 = 0LL;
        v16 = &v11;
        v14 = 48;
        v15 = 0LL;
        v17 = 64;
        v18 = 0LL;
        appended = ZwOpenKey(&v9, 131097LL, &v14);
        if ( appended >= 0 )
        {
          appended = sub_180081384(v9, &DestinationString, &v10, a3, a2);
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
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)appended;
}
