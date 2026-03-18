/*
 * XREFs of ulGetRotate @ 0x1C02355B0
 * Callers:
 *     BmfdOpenFontContext @ 0x1C0235378 (BmfdOpenFontContext.c)
 * Callees:
 *     XFORMOBJ_iGetXform @ 0x1C009B3A0 (XFORMOBJ_iGetXform.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     vComputeRotatedXform @ 0x1C0235704 (vComputeRotatedXform.c)
 */

__int64 __fastcall ulGetRotate(__int64 a1, XFORMOBJ *a2)
{
  char v3; // r8
  unsigned int v4; // ebx
  char v5; // r8
  char v6; // r8
  bool v7; // zf
  bool v8; // cc
  unsigned int v9; // r10d
  int v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+24h] [rbp-2Ch] BYREF
  int v13; // [rsp+28h] [rbp-28h] BYREF
  int v14; // [rsp+2Ch] [rbp-24h] BYREF
  XFORML pxform; // [rsp+30h] [rbp-20h] BYREF

  XFORMOBJ_iGetXform(a2, &pxform);
  v4 = 0;
  if ( (unsigned int)bFToL(pxform.eM11, &v14, 6)
    && (unsigned int)bFToL(pxform.eM12, &v11, v3)
    && (unsigned int)bFToL(pxform.eM21, &v12, v5)
    && (unsigned int)bFToL(pxform.eM22, &v13, v6) )
  {
    v7 = v14 == 0;
    if ( v14 > 0 )
    {
      if ( !v11 && !v12 && v13 > 0 )
        goto LABEL_24;
      v7 = v14 == 0;
    }
    if ( v7 )
    {
      v8 = v11 <= 0;
      if ( v11 < 0 )
      {
        if ( v12 > 0 && !v13 )
          goto LABEL_18;
        v8 = v11 <= 0;
      }
      if ( !v8 && v12 < 0 && !v13 )
      {
LABEL_18:
        vComputeRotatedXform(a1);
        return v9;
      }
      goto LABEL_25;
    }
    if ( v14 < 0 && !v11 && !v12 && v13 < 0 )
    {
      v4 = 1800;
LABEL_24:
      vComputeRotatedXform(a1);
      return v4;
    }
  }
LABEL_25:
  vComputeRotatedXform(a1);
  return 0LL;
}
