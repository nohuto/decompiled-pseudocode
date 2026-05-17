/*
 * XREFs of sub_1800ECD38 @ 0x1800ECD38
 * Callers:
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800ECD38(unsigned __int16 *a1)
{
  const WCHAR *i; // rdx
  __int64 result; // rax
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v4; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v6; // [rsp+60h] [rbp-A0h]
  __int64 v7; // [rsp+68h] [rbp-98h]
  int *v8; // [rsp+70h] [rbp-90h]
  int v9; // [rsp+78h] [rbp-88h]
  __int128 v10; // [rsp+80h] [rbp-80h]
  __int64 v11; // [rsp+90h] [rbp-70h]
  __int128 v12; // [rsp+98h] [rbp-68h]
  _BYTE v13[512]; // [rsp+B0h] [rbp-50h] BYREF

  for ( i = (const WCHAR *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)); *i != 92; --i )
    ;
  RtlInitUnicodeString(&DestinationString, i);
  memset(v13, 0, sizeof(v13));
  v3 = 0x2000000;
  v11 = 0LL;
  v12 = 0uLL;
  v4 = v13;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v3, word_180111408);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v3, (__int16 *)&DestinationString);
  v6 = 48;
  v8 = &v3;
  v7 = 0LL;
  v9 = 64;
  v10 = 0LL;
  result = ZwOpenKey();
  if ( (int)result >= 0 )
  {
    result = ZwQueryValueKey();
    if ( (int)result >= 0 )
    {
      result = -10000000LL * *(_QWORD *)((char *)&v12 + 4);
      qword_18015AAA8 = -10000000LL * *(_QWORD *)((char *)&v12 + 4);
    }
  }
  return result;
}
