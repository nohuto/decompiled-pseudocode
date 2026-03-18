/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017DA58
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x18017D9B0 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1, const struct MilRectF *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rdx
  signed int v5; // eax
  struct CShape *v6; // rbx
  char v7; // al
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  struct CShape *v10; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-9h] BYREF
  int v12; // [rsp+58h] [rbp+Fh]
  int v13; // [rsp+5Ch] [rbp+13h]
  int v14; // [rsp+60h] [rbp+17h]
  _BYTE v15[16]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+78h] [rbp+2Fh]

  v2 = 0;
  v10 = 0LL;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v14 = 0;
    v16 = 0LL;
    v11[0] = &CRectanglesShape::`vftable';
    v12 = 1;
    v11[1] = v15;
    v11[2] = v15;
    v13 = 1;
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v11, a2);
    v5 = CShape::Combine(*(_QWORD *)(a1 + 152), v4, (__int64)v11, a1 + 84, 2, &v10);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xD7u);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v11);
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
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v11);
    }
    if ( v6 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v6)(v6, 1LL);
  }
  return v2;
}
