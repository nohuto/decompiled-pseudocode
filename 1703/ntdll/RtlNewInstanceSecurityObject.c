/*
 * XREFs of RtlNewInstanceSecurityObject @ 0x1800D9050
 * Callers:
 *     <none>
 * Callees:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 */

__int64 __fastcall RtlNewInstanceSecurityObject(
        char a1,
        char a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v15; // [rsp+90h] [rbp-38h]

  result = ZwQueryInformationToken();
  if ( (int)result >= 0 )
  {
    *(_QWORD *)a4 = v15;
    if ( *(_DWORD *)a4 != *a3 || *(_DWORD *)(a4 + 4) != a3[1] || a1 || a2 )
    {
      return sub_180047D44(a5, a6, a7, 0LL, 0, a8, 0, a9, a10, 0LL);
    }
    else
    {
      *a7 = 0LL;
      return 0LL;
    }
  }
  return result;
}
