/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011F0DC
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011EEFC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00465B4 (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1C011E378 (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJH@Z @ 0x1C011ED70 (-DrawRoundedRectangularShadow@@YAXPEAXJJH@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C011F2B4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall GenerateWindowShadow(__m128i *a1, HDC a2)
{
  __m128i v2; // xmm0
  __int8 v3; // r13
  int v5; // r14d
  int v6; // r13d
  int v7; // r12d
  LONG v8; // esi
  LONG v9; // esi
  LONG v10; // edi
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rbx
  HBRUSH StockObject; // rax
  __int64 v15; // rdx
  RECT v17; // [rsp+70h] [rbp-49h] BYREF
  int v18; // [rsp+80h] [rbp-39h] BYREF
  void *v19; // [rsp+88h] [rbp-31h] BYREF
  struct tagWND *v20; // [rsp+90h] [rbp-29h]
  __int64 v21; // [rsp+98h] [rbp-21h]
  unsigned int v22[12]; // [rsp+A0h] [rbp-19h] BYREF

  v2 = a1[8];
  v3 = a1[4].m128i_i8[2];
  v20 = (struct tagWND *)a1;
  v5 = 0;
  v6 = v3 & 0x40;
  v7 = 0;
  v17.top = 0;
  v17.bottom = v2.m128i_i32[3] - v2.m128i_i32[1];
  v8 = v2.m128i_i32[2] - _mm_cvtsi128_si32(v2);
  v17.left = 0;
  v17.right = v8;
  if ( IsRectEmptyInl(&v17) )
    return 0LL;
  v9 = v8 + 5;
  v10 = v2.m128i_i32[3] - v2.m128i_i32[1] + 5;
  v17.right = v9;
  v17.bottom = v10;
  memset(v22, 0, 0x2CuLL);
  v22[0] = 40;
  v22[1] = v9;
  v22[2] = v10;
  *(_QWORD *)&v22[3] = 2097153LL;
  v12 = GreCreateDIBitmapReal(a2, v11, 0LL, v22, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v19);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  v21 = GreSelectBitmap(a2, v12);
  StockObject = (HBRUSH)GreGetStockObject(4LL);
  FillRect(a2, &v17, StockObject);
  if ( v9 < 15 || v10 < 15 )
    v7 = 1;
  if ( DrawWindowShadow(v20, a2, v6, v7, &v18) )
  {
    if ( !v18 || v7 )
      DrawRegionalShadow((char *)v19, v9, v10);
    else
      DrawRoundedRectangularShadow(v19, v9, v10, v6);
    v5 = 1;
  }
  GreDecBitmapExclusiveRefCnt(v13, v15);
  if ( !v5 )
  {
    GreSelectBitmap(a2, v21);
    GreDeleteObject(v13);
    return 0LL;
  }
  return v13;
}
