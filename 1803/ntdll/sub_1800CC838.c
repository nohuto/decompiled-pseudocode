/*
 * XREFs of sub_1800CC838 @ 0x1800CC838
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     sub_180076D50 @ 0x180076D50 (sub_180076D50.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009B120 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009B3E0 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall sub_1800CC838(__int128 *a1, __int64 a2)
{
  __int64 v2; // [rsp+50h] [rbp-B0h] BYREF
  int v3; // [rsp+58h] [rbp-A8h] BYREF
  char *v4; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v6; // [rsp+88h] [rbp-78h]
  __int64 v7; // [rsp+90h] [rbp-70h]
  __int64 v8; // [rsp+98h] [rbp-68h]
  int v9; // [rsp+A0h] [rbp-60h]
  __int128 v10; // [rsp+A8h] [rbp-58h]
  char v11; // [rsp+C0h] [rbp-40h] BYREF

  v3 = 0x1000000;
  v4 = &v11;
  UnicodeString.Buffer = 0LL;
  if ( (int)sub_180076D50(0, a2, a1, (unsigned __int16 *)&v3, &UnicodeString.Length, &v2) >= 0 )
  {
    v8 = v2;
    v6 = 48;
    v7 = 0LL;
    v10 = 0LL;
    v9 = 64;
    if ( (int)ZwOpenFile() >= 0 )
      ZwQueryVolumeInformationFile();
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
}
