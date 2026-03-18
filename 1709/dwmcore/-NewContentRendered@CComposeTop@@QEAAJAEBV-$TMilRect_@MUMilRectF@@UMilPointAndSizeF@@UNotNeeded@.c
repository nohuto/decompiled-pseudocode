/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D664
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015C90 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801364D8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D57C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800B9E18 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x18017D464 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, const struct MilRectF *a2)
{
  __int64 v3; // rdx
  struct CRectanglesShape *v4; // rcx
  _QWORD *v5; // rax
  unsigned int v6; // ebx
  signed int v7; // eax
  struct CShape *v8; // rdi
  signed int v9; // eax
  struct CShape *v11; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-9h] BYREF
  int v13; // [rsp+58h] [rbp+Fh]
  int v14; // [rsp+5Ch] [rbp+13h]
  int v15; // [rsp+60h] [rbp+17h]
  _BYTE v16[16]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+78h] [rbp+2Fh]

  v11 = 0LL;
  v15 = 0;
  v17 = 0LL;
  v12[1] = v16;
  v12[0] = &CRectanglesShape::`vftable';
  v12[2] = v16;
  v13 = 1;
  v14 = 1;
  CRectanglesShape::SetSingleRect((CRectanglesShape *)v12, a2);
  if ( *((_QWORD *)this + 19) )
    goto LABEL_6;
  v5 = CRectanglesShape::operator new(v4);
  if ( v5 )
  {
    *v5 = &CRectanglesShape::`vftable';
    *((_DWORD *)v5 + 8) = 0;
    v5[1] = v5 + 5;
    v5[2] = v5 + 5;
    *((_DWORD *)v5 + 6) = 1;
    *((_DWORD *)v5 + 7) = 1;
    v5[7] = 0LL;
  }
  *((_QWORD *)this + 19) = v5;
  if ( v5 )
  {
LABEL_6:
    v7 = CShape::Combine(*((_QWORD *)this + 1), v3, (__int64)v12, (__int64)this + 84, 1, &v11);
    v8 = v11;
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xA6u);
    }
    else
    {
      v9 = CComposeTop::AddShapeToLifetime(this, v11);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xAEu);
    }
    if ( v8 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v8)(v8, 1LL);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x9Du);
  }
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v12);
  return v6;
}
