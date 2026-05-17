/*
 * XREFs of sub_1800936D0 @ 0x1800936D0
 * Callers:
 *     fabs @ 0x18008E7A0 (fabs.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_18009368C @ 0x18009368C (sub_18009368C.c)
 *     sub_1800937C0 @ 0x1800937C0 (sub_1800937C0.c)
 *     sub_180093AB0 @ 0x180093AB0 (sub_180093AB0.c)
 *     sub_180093D28 @ 0x180093D28 (sub_180093D28.c)
 *     sub_180093D58 @ 0x180093D58 (sub_180093D58.c)
 *     sub_180093FF8 @ 0x180093FF8 (sub_180093FF8.c)
 */

double __fastcall sub_1800936D0(__int64 a1, int a2, double a3, double a4, __int64 a5)
{
  __int64 v5; // rbx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // r8d
  int v10; // r9d
  double result; // xmm0_8
  double v12; // [rsp+48h] [rbp-61h] BYREF
  double v13; // [rsp+50h] [rbp-59h] BYREF
  char v14; // [rsp+58h] [rbp-51h] BYREF
  int v15; // [rsp+98h] [rbp-11h]

  v5 = a5;
  v13 = a3;
  v12 = a4;
  v7 = a1;
  if ( !(unsigned int)sub_1800937C0(a1, &v12, a5) )
  {
    v15 &= ~1u;
    sub_180093AB0((unsigned int)&v14, (unsigned int)&a5, v7, a2, (__int64)&v13, (__int64)&v12, 0);
    v5 = a5;
  }
  v8 = sub_18009368C(v7);
  if ( dword_180156EF0 || !v8 )
  {
    sub_180093D28(v8);
    sub_180093FF8(v5, 65472LL);
    return v12;
  }
  else
  {
    result = v12;
    sub_180093D58(v8, a2, v9, v10, *(__int64 *)&v12, v5);
  }
  return result;
}
