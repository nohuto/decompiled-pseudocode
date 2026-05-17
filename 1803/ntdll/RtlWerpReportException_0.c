/*
 * XREFs of RtlWerpReportException_0 @ 0x1800D67F0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 *     RtlWerpReportException @ 0x1800D7650 (RtlWerpReportException.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 */

__int64 __fastcall RtlWerpReportException_0(
        unsigned int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  _QWORD v11[176]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[176]; // [rsp+5A0h] [rbp+4A0h] BYREF

  v7 = a4;
  *a6 = 0LL;
  if ( a4 > 5 )
    return 3221226539LL;
  memset(v12, 0, 0x578uLL);
  v12[6] = __PAIR64__(a1, a5);
  LODWORD(v12[0]) = 91751760;
  LODWORD(v12[5]) = 0x20000000;
  v12[7] = a2;
  if ( a3 && (_DWORD)v7 )
    memmove(&v12[8], a3, 8 * v7);
  memset(v11, 0, 0x578uLL);
  LODWORD(v11[0]) = 91751760;
  result = sub_1800D7658(v12, v11);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 258 )
    {
      return 3221226048LL;
    }
    else
    {
      *a6 = v11[6];
      return 0LL;
    }
  }
  return result;
}
