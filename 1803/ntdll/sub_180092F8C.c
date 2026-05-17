/*
 * XREFs of sub_180092F8C @ 0x180092F8C
 * Callers:
 *     atan @ 0x18008D160 (atan.c)
 *     atan2 @ 0x18008D3C0 (atan2.c)
 *     ceil @ 0x18008DD70 (ceil.c)
 *     cos @ 0x18008DE90 (cos.c)
 *     sin @ 0x18008E2B0 (sin.c)
 *     floor @ 0x18008E890 (floor.c)
 *     log @ 0x18008EAB0 (log.c)
 *     sqrt @ 0x18008F7B0 (sqrt.c)
 *     tan @ 0x180090650 (tan.c)
 *     sub_1800940E0 @ 0x1800940E0 (sub_1800940E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_180092E68 @ 0x180092E68 (sub_180092E68.c)
 *     sub_180092ED0 @ 0x180092ED0 (sub_180092ED0.c)
 *     sub_180093A88 @ 0x180093A88 (sub_180093A88.c)
 *     sub_180093D28 @ 0x180093D28 (sub_180093D28.c)
 *     sub_180093FF8 @ 0x180093FF8 (sub_180093FF8.c)
 */

double __fastcall sub_180092F8C(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // r9
  __int64 v15; // xmm6_8
  __int64 v17; // [rsp+48h] [rbp-A1h] BYREF
  double v18[2]; // [rsp+50h] [rbp-99h] BYREF
  _QWORD v19[8]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp-41h]

  v17 = sub_180093FF8(8064LL, 65472LL);
  *(_QWORD *)&v18[1] = a3;
  *(_QWORD *)&v18[0] = a3;
  v13 = sub_180092ED0(a5, v17);
  v15 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      v19[6] = a8;
      v20 = v20 & 0xFFFFFFE0 | 3;
    }
    sub_180093A88((unsigned int)v19, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)v18);
  }
  if ( !dword_180156EF0 && a4 )
    return sub_180092E68(a4, a6, a1, v14, v15, v18[0], v17);
  sub_180093D28(a4);
  sub_180093FF8(v17, 65472LL);
  return v18[0];
}
