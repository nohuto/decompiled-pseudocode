/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE810
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z @ 0x180176958 (-ShapeBoundsEmpty@@YA_NPEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1, const struct MilRectF *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rdx
  int v5; // eax
  struct CShape *v6; // rbx
  bool v7; // al
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
    v5 = CShape::Combine(*(_QWORD *)(a1 + 152), v4, v11, a1 + 84, 2, &v10);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE7u);
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
