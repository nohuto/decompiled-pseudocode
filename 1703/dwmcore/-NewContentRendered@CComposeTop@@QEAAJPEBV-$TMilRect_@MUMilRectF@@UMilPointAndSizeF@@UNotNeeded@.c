/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801349C8
 * Callers:
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800D1EE8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180134B34 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800C456C (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJPEBVCShape@@@Z @ 0x180176654 (-AddShapeToLifetime@CComposeTop@@AEAAJPEBVCShape@@@Z.c)
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
    v7 = CShape::Combine(*((CRegionShape **)this + 1), v3, (CRectanglesShape *)v12, (_DWORD *)this + 21, 1, &v11);
    v8 = v11;
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xABu);
    }
    else
    {
      v9 = CComposeTop::AddShapeToLifetime(this, v11);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB7u);
    }
    if ( v8 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v8)(v8, 1LL);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA0u);
  }
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v12);
  return v6;
}
