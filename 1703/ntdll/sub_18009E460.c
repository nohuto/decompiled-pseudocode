/*
 * XREFs of sub_18009E460 @ 0x18009E460
 * Callers:
 *     fabs @ 0x180099340 (fabs.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18009E41C @ 0x18009E41C (sub_18009E41C.c)
 *     sub_18009E550 @ 0x18009E550 (sub_18009E550.c)
 *     sub_18009E840 @ 0x18009E840 (sub_18009E840.c)
 *     sub_18009EAB4 @ 0x18009EAB4 (sub_18009EAB4.c)
 *     sub_18009EAE4 @ 0x18009EAE4 (sub_18009EAE4.c)
 *     sub_18009ED7C @ 0x18009ED7C (sub_18009ED7C.c)
 */

double __fastcall sub_18009E460(__int64 a1, int a2, double a3, double a4, __int64 a5)
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
  if ( !(unsigned int)sub_18009E550(a1, &v12, a5) )
  {
    v15 &= ~1u;
    sub_18009E840((unsigned int)&v14, (unsigned int)&a5, v7, a2, (__int64)&v13, (__int64)&v12, 0);
    v5 = a5;
  }
  v8 = sub_18009E41C(v7);
  if ( dword_180155E90 || !v8 )
  {
    sub_18009EAB4(v8);
    sub_18009ED7C(v5, 65472LL);
    return v12;
  }
  else
  {
    result = v12;
    sub_18009EAE4(v8, a2, v9, v10, *(__int64 *)&v12, v5);
  }
  return result;
}
