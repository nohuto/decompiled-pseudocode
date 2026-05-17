/*
 * XREFs of sub_18009DD10 @ 0x18009DD10
 * Callers:
 *     atan @ 0x180097D10 (atan.c)
 *     atan2 @ 0x180097F70 (atan2.c)
 *     ceil @ 0x180098910 (ceil.c)
 *     cos @ 0x180098A30 (cos.c)
 *     sin @ 0x180098E50 (sin.c)
 *     floor @ 0x180099430 (floor.c)
 *     log @ 0x180099650 (log.c)
 *     sqrt @ 0x18009A440 (sqrt.c)
 *     tan @ 0x18009B370 (tan.c)
 *     sub_18009EE60 @ 0x18009EE60 (sub_18009EE60.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18009DBEC @ 0x18009DBEC (sub_18009DBEC.c)
 *     sub_18009DC54 @ 0x18009DC54 (sub_18009DC54.c)
 *     sub_18009E818 @ 0x18009E818 (sub_18009E818.c)
 *     sub_18009EAB4 @ 0x18009EAB4 (sub_18009EAB4.c)
 *     sub_18009ED7C @ 0x18009ED7C (sub_18009ED7C.c)
 */

double __fastcall sub_18009DD10(
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

  v17 = sub_18009ED7C(8064LL, 65472LL);
  *(_QWORD *)&v18[1] = a3;
  *(_QWORD *)&v18[0] = a3;
  v13 = sub_18009DC54(a5, v17);
  v15 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      v19[6] = a8;
      v20 = v20 & 0xFFFFFFE0 | 3;
    }
    sub_18009E818((unsigned int)v19, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)v18);
  }
  if ( !dword_180155E90 && a4 )
    return sub_18009DBEC(a4, a6, a1, v14, v15, v18[0], v17);
  sub_18009EAB4(a4);
  sub_18009ED7C(v17, 65472LL);
  return v18[0];
}
