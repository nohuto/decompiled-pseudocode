/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADEF8
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180064114 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801ADE50 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1, const struct MilRectF *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rdx
  int v5; // eax
  struct CShape *v6; // rbx
  char v7; // al
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  struct CShape *v10; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-19h] BYREF
  int v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+64h] [rbp+Bh]
  int v14; // [rsp+68h] [rbp+Fh]
  _BYTE v15[16]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v16; // [rsp+80h] [rbp+27h]

  v2 = 0;
  v10 = 0LL;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v11[1] = 0LL;
    v14 = 0;
    v16 = 0LL;
    v11[0] = &CRectanglesShape::`vftable';
    v11[2] = v15;
    v11[3] = v15;
    v12 = 1;
    v13 = 1;
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v11, a2);
    v5 = CShape::Combine(*(struct CRectanglesShape **)(a1 + 152), v4, (CShape *)v11, (float *)(a1 + 84), 2, &v10);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xD7u);
      v6 = v10;
    }
    else
    {
      v6 = v10;
      v7 = ShapeBoundsEmpty(v10);
      v8 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 152);
      if ( v7 )
      {
        if ( v8 )
          (**v8)(v8, 1LL);
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      else
      {
        if ( v8 )
          (**v8)(v8, 1LL);
        *(_QWORD *)(a1 + 152) = v6;
        v6 = 0LL;
      }
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v11);
    if ( v6 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v6)(v6, 1LL);
  }
  return v2;
}
