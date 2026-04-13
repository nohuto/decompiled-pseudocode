/*
 * XREFs of _Dtento @ 0x1800A02AC
 * Callers:
 *     _Stodx @ 0x180098630 (_Stodx.c)
 * Callees:
 *     _Xp_mulx @ 0x1800A0074 (_Xp_mulx.c)
 *     _Xp_setw @ 0x1800A0198 (_Xp_setw.c)
 *     _LXp_getw @ 0x1800A08D8 (_LXp_getw.c)
 *     _Xp_movx @ 0x1800A0960 (_Xp_movx.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall Dtento(double *a1, int a2, _DWORD *a3)
{
  int v4; // ebx
  double v6; // xmm6_8
  double v7[3]; // [rsp+30h] [rbp-98h] BYREF
  double v8[3]; // [rsp+48h] [rbp-80h] BYREF
  char Src[48]; // [rsp+60h] [rbp-68h] BYREF

  v4 = a2;
  if ( !a2 || *a1 == 0.0 )
  {
    LXp_getw(a1, 3LL);
  }
  else
  {
    if ( a2 <= 0 )
    {
      v4 = -a2;
      Xp_movx(v7, 3LL, &unk_1800DFB78);
    }
    else
    {
      Xp_setw((__int64)v7, 3, 10.0);
    }
    while ( 1 )
    {
      if ( (v4 & 1) != 0 )
        Xp_mulx(a1, 3, v7, 3, Src);
      v4 >>= 1;
      if ( !v4 )
        break;
      Xp_movx(v8, 3LL, v7);
      Xp_mulx(v7, 3, v8, 3, Src);
    }
    v6 = LXp_getw(a1, 3LL);
    if ( v6 == 0.0 || v6 == Inf._Double || v6 == COERCE_DOUBLE(*(_QWORD *)&Inf._Double ^ _xmm) )
    {
      *_errno() = 34;
      if ( a3 )
        *a3 |= 1u;
    }
  }
}
