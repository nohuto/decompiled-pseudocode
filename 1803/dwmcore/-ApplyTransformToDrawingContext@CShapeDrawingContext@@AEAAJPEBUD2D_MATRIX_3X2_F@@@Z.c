/*
 * XREFs of ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180210250
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::ApplyTransformToDrawingContext(
        CDrawingContext **this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  unsigned int v2; // edi
  const struct D2D_MATRIX_3X2_F *v3; // r8
  FLOAT m11; // xmm0_4
  FLOAT m12; // xmm1_4
  CDrawingContext *v7; // rcx
  FLOAT m22; // xmm0_4
  FLOAT dx; // xmm1_4
  FLOAT dy; // xmm0_4
  int v11; // eax
  _DWORD v13[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  FLOAT v18; // [rsp+60h] [rbp-20h]
  FLOAT v19; // [rsp+64h] [rbp-1Ch]
  int v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+6Ch] [rbp-14h]
  int v22; // [rsp+70h] [rbp-10h]

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
    if ( *((_BYTE *)this + 536) && *((_BYTE *)this + 538) )
    {
      CDrawingContext::PopTransformInternal(this[42], 1);
      *((_BYTE *)this + 538) = 0;
    }
    if ( !*((_BYTE *)this + 538) )
    {
      m11 = v3->m11;
      m12 = v3->m12;
      v7 = this[42];
      v22 = 0;
      v13[2] = 0;
      v13[3] = 0;
      v14 = 0LL;
      v15 = 0LL;
      v17 = 0;
      v20 = 0;
      *(FLOAT *)v13 = m11;
      m22 = v3->m22;
      *(FLOAT *)&v13[1] = m12;
      v13[4] = LODWORD(v3->m21);
      dx = v3->dx;
      *(FLOAT *)&v13[5] = m22;
      dy = v3->dy;
      v18 = dx;
      v19 = dy;
      v16 = 1065353216;
      v21 = 1065353216;
      v11 = CDrawingContext::PushTransformInternal(v7, 0LL, (const struct CMILMatrix *)v13, 1, 1);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x185u);
      }
      else
      {
        *((_BYTE *)this + 536) = 0;
        *((_BYTE *)this + 538) = 1;
      }
    }
  }
  else if ( *((_BYTE *)this + 538) )
  {
    CDrawingContext::PopTransformInternal(this[42], 1);
    *((_BYTE *)this + 538) = 0;
  }
  return v2;
}
