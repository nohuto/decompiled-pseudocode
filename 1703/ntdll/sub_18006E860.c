/*
 * XREFs of sub_18006E860 @ 0x18006E860
 * Callers:
 *     sub_18006BEBC @ 0x18006BEBC (sub_18006BEBC.c)
 *     sub_18006E4FC @ 0x18006E4FC (sub_18006E4FC.c)
 *     sub_18006E760 @ 0x18006E760 (sub_18006E760.c)
 *     sub_1800FC140 @ 0x1800FC140 (sub_1800FC140.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800FB4E4 @ 0x1800FB4E4 (sub_1800FB4E4.c)
 */

__int64 __fastcall sub_18006E860(__int64 a1, const WCHAR *a2, char *a3, __int64 a4, _WORD *a5)
{
  __int16 v6; // bx
  char v9; // di
  __int64 v10; // r8
  __int64 result; // rax
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+70h] [rbp+18h] BYREF
  __int16 v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v14 = 0;
  v9 = 0;
  RtlInitUnicodeString(&String, a2);
  if ( RtlCultureNameToLCID(&String, &Lcid) )
  {
    v6 = Lcid;
    if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
    {
      v9 = 1;
LABEL_4:
      result = 0LL;
      goto LABEL_5;
    }
    LOBYTE(v10) = 1;
    result = sub_1800FB4E4(a1, a2, v10, &v14);
    if ( (int)result >= 0 )
    {
      v6 = v14;
      v9 = 3;
      goto LABEL_4;
    }
    v6 = 0;
  }
  else
  {
    result = 3221225485LL;
  }
LABEL_5:
  if ( a3 )
    *a3 = v9;
  if ( a5 )
    *a5 = v6;
  return result;
}
