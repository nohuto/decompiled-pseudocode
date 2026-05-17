/*
 * XREFs of RtlSystemTimeToLocalTime @ 0x18007D950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall RtlSystemTimeToLocalTime(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]

  result = ZwQuerySystemInformation(3LL, v5, 48LL);
  if ( (int)result >= 0 )
  {
    *a2 = *a1 - v6;
    return 0LL;
  }
  return result;
}
