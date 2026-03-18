/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADAF8
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800440D0 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158A6C (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADA10 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x18001D1D8 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180064114 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801AD8F4 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, const struct MilRectF *a2)
{
  __int64 v3; // rdx
  struct CRectanglesShape *v4; // rcx
  _QWORD *v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  struct CShape *v8; // rdi
  int v9; // eax
  struct CShape *v11; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-19h] BYREF
  int v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+64h] [rbp+Bh]
  int v15; // [rsp+68h] [rbp+Fh]
  _BYTE v16[16]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v17; // [rsp+80h] [rbp+27h]

  v11 = 0LL;
  v12[1] = 0LL;
  v15 = 0;
  v17 = 0LL;
  v12[2] = v16;
  v12[0] = &CRectanglesShape::`vftable';
  v12[3] = v16;
  v13 = 1;
  v14 = 1;
  CRectanglesShape::SetSingleRect((CRectanglesShape *)v12, a2);
  if ( *((_QWORD *)this + 19) )
    goto LABEL_6;
  v5 = CRectanglesShape::operator new(v4);
  if ( v5 )
  {
    v5[1] = 0LL;
    *v5 = &CRectanglesShape::`vftable';
    *((_DWORD *)v5 + 10) = 0;
    v5[2] = v5 + 6;
    v5[3] = v5 + 6;
    *((_DWORD *)v5 + 8) = 1;
    *((_DWORD *)v5 + 9) = 1;
    v5[8] = 0LL;
  }
  *((_QWORD *)this + 19) = v5;
  if ( v5 )
  {
LABEL_6:
    v7 = CShape::Combine(*((struct CRectanglesShape **)this + 1), v3, (CShape *)v12, (float *)this + 21, 1, &v11);
    v8 = v11;
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xA6u);
    }
    else
    {
      v9 = CComposeTop::AddShapeToLifetime(this, v11);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xAEu);
    }
    if ( v8 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v8)(v8, 1LL);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x9Du);
  }
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v12);
  return v6;
}
