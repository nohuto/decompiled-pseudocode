/*
 * XREFs of sub_1800D6D28 @ 0x1800D6D28
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A5C20 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall sub_1800D6D28(__m128i *a1)
{
  unsigned __int16 *v1; // [rsp+50h] [rbp-B0h] BYREF
  int v2; // [rsp+58h] [rbp-A8h] BYREF
  char *v3; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v5; // [rsp+88h] [rbp-78h]
  __int64 v6; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v7; // [rsp+98h] [rbp-68h]
  int v8; // [rsp+A0h] [rbp-60h]
  __int128 v9; // [rsp+A8h] [rbp-58h]
  char v10; // [rsp+C0h] [rbp-40h] BYREF

  v2 = 0x1000000;
  v3 = &v10;
  UnicodeString.Buffer = 0LL;
  if ( (int)sub_18003E060(0, 0, a1, (unsigned __int16 *)&v2, &UnicodeString.Length, &v1, 0LL, 0LL) >= 0 )
  {
    v7 = v1;
    v5 = 48;
    v6 = 0LL;
    v9 = 0LL;
    v8 = 64;
    if ( (int)ZwOpenFile() >= 0 )
      ZwQueryVolumeInformationFile();
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
}
