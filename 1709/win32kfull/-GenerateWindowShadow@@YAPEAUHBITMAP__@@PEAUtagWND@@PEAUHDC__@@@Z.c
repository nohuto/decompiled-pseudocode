/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012B1C4
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012B000 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0099988 (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1C012942C (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012B3D4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C012CD30 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C020CAB8 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 */

__int64 __fastcall GenerateWindowShadow(__m128i *a1, HDC a2)
{
  __m128i v2; // xmm0
  int v5; // r15d
  signed int v6; // r14d
  LONG v7; // edi
  LONG v8; // edi
  LONG v9; // ebx
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rsi
  HBRUSH StockObject; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // rcx
  HBITMAP ScaledWindowShadowFromDIB; // rax
  HBITMAP v19; // rbx
  int v20; // [rsp+70h] [rbp-49h]
  RECT v21; // [rsp+78h] [rbp-41h] BYREF
  int v22; // [rsp+88h] [rbp-31h]
  int v23; // [rsp+8Ch] [rbp-2Dh] BYREF
  void *v24; // [rsp+90h] [rbp-29h] BYREF
  __int64 v25; // [rsp+98h] [rbp-21h]
  unsigned int v26[12]; // [rsp+A0h] [rbp-19h] BYREF

  v2 = a1[8];
  v5 = 0;
  v22 = a1[4].m128i_i8[2] & 0x40;
  v6 = 1;
  v20 = 0;
  v21.top = 0;
  v21.bottom = v2.m128i_i32[3] - v2.m128i_i32[1];
  v7 = v2.m128i_i32[2] - _mm_cvtsi128_si32(v2);
  v21.left = 0;
  v21.right = v7;
  if ( IsRectEmptyInl(&v21) )
    return 0LL;
  v8 = v7 + 5;
  v9 = v2.m128i_i32[3] - v2.m128i_i32[1] + 5;
  v21.right = v8;
  v21.bottom = v9;
  if ( IsPWNDEligibleForGDIScaling((__int64)a1) )
  {
    v17 = a1[23].m128i_u16[2];
    if ( (_WORD)v17 != 96 )
    {
      v6 = (unsigned __int16)GreGetScaledLogPixels(v17) / 0x60u;
      v8 *= v6;
      v9 *= v6;
      v21.right = v8;
      v21.bottom = v9;
    }
  }
  memset(v26, 0, 0x2CuLL);
  v26[0] = 40;
  v26[1] = v8;
  v26[2] = v9;
  *(_QWORD *)&v26[3] = 2097153LL;
  v11 = GreCreateDIBitmapReal(a2, v10, 0LL, v26, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v24);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  v25 = GreSelectBitmap(a2, v11);
  StockObject = (HBRUSH)GreGetStockObject(4LL);
  FillRect(a2, &v21, StockObject);
  if ( v8 < 15 || v9 < 15 )
  {
    v14 = 1;
    v20 = 1;
  }
  else
  {
    v14 = 0;
  }
  if ( DrawWindowShadow((struct tagWND *)a1, a2, v22, v14, &v23) )
  {
    if ( !v23 || v20 )
      DrawRegionalShadow((char *)v24, v8, v9);
    else
      DrawRoundedRectangularShadow(v24, v8, v9, v22, v6);
    v5 = 1;
  }
  GreDecBitmapExclusiveRefCnt(v12, v15);
  if ( !v5 )
    goto LABEL_25;
  if ( v6 > 1 )
  {
    ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB((struct tagWND *)a1, a2, v6);
    v19 = ScaledWindowShadowFromDIB;
    if ( ScaledWindowShadowFromDIB )
    {
      GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
      GreDeleteObject(v12);
      v12 = (__int64)v19;
    }
    else
    {
      v5 = 0;
    }
  }
  if ( !v5 )
  {
LABEL_25:
    GreSelectBitmap(a2, v25);
    GreDeleteObject(v12);
    return 0LL;
  }
  return v12;
}
