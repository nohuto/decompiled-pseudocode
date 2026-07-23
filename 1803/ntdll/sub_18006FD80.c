/*
 * XREFs of sub_18006FD80 @ 0x18006FD80
 * Callers:
 *     sub_18006FC80 @ 0x18006FC80 (sub_18006FC80.c)
 *     sub_18006FF54 @ 0x18006FF54 (sub_18006FF54.c)
 *     sub_1800FA6F0 @ 0x1800FA6F0 (sub_1800FA6F0.c)
 * Callees:
 *     sub_1800353C4 @ 0x1800353C4 (sub_1800353C4.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_18006FD80(__int64 a1, WCHAR *a2, char *a3, __int64 a4, __int16 *a5)
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
    result = sub_1800353C4(a1, a2, v10, &v14);
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
