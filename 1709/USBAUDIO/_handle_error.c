/*
 * XREFs of _handle_error @ 0x1C0006DA4
 * Callers:
 *     log10 @ 0x1C0006938 (log10.c)
 *     _pow_special @ 0x1C0006EE0 (_pow_special.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006850 (__security_check_cookie.c)
 *     _call_matherr @ 0x1C0006C78 (_call_matherr.c)
 *     sub_1C0006CE4 @ 0x1C0006CE4 (sub_1C0006CE4.c)
 *     _raise_exc @ 0x1C0007084 (_raise_exc.c)
 *     _set_errno_from_matherr @ 0x1C0007344 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1C0007394 (_ctrlfp.c)
 */

double __fastcall handle_error(
        char *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        double a7,
        double a8,
        int a9)
{
  BOOL v13; // eax
  double v14; // xmm6_8
  __int64 v16; // [rsp+48h] [rbp-A1h] BYREF
  double v17[2]; // [rsp+50h] [rbp-99h] BYREF
  _QWORD v18[8]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp-41h]

  v16 = ctrlfp(8064LL, 65472LL);
  *(_QWORD *)&v17[1] = a3;
  *(_QWORD *)&v17[0] = a3;
  v13 = sub_1C0006CE4(a5, v16);
  v14 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      *(double *)&v18[6] = a8;
      v19 = v19 & 0xFFFFFFE0 | 3;
    }
    raise_exc((unsigned int)v18, (unsigned int)&v16, a5, a2, (__int64)&a7, (__int64)v17);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, v14, v17[0], v16);
  set_errno_from_matherr(a4);
  ctrlfp(v16, 65472LL);
  return v17[0];
}
