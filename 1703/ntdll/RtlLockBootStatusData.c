/*
 * XREFs of RtlLockBootStatusData @ 0x180089980
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     wcscpy_s @ 0x1800A16D0 (wcscpy_s.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 */

__int64 __fastcall RtlLockBootStatusData(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING *p_DestinationString; // [rsp+58h] [rbp-A8h]
  int v9; // [rsp+60h] [rbp-A0h]
  __int128 v10; // [rsp+68h] [rbp-98h]
  _BYTE v11[24]; // [rsp+78h] [rbp-88h] BYREF
  wchar_t Destination[264]; // [rsp+90h] [rbp-70h] BYREF

  wcscpy_s(Destination, 0x101uLL, L"\\SystemRoot\\bootstat.dat");
  RtlInitUnicodeString(&DestinationString, Destination);
  p_DestinationString = &DestinationString;
  v2 = 0LL;
  v6 = 48;
  v7 = 0LL;
  v9 = 192;
  v10 = 0LL;
  result = ZwOpenFile(&v4, 1180063LL, &v6, v11, 0, 32);
  if ( (int)result >= 0 )
    v2 = v4;
  *a1 = v2;
  return result;
}
