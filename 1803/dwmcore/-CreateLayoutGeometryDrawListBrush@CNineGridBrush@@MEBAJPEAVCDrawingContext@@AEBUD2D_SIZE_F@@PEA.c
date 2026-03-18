/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x180003F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000405C (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x180004E70 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18009CDB0 (-CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CNineGridBrush::CreateLayoutGeometryDrawListBrush(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  int LayoutGeometryDrawListBrush; // eax
  int v8; // ebx
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  int v14; // r9d
  CGeometryOnlyDrawListBrush *v15; // rcx
  FLOAT height; // xmm0_4
  CGeometryOnlyDrawListBrush *v17; // rax
  FLOAT width; // xmm1_4
  struct CGeometryOnlyDrawListBrush *v19; // rax
  CNineGridDrawListBrush *v20; // rcx
  struct CDrawListBrush *v21; // rax
  CNineGridDrawListBrush *v22; // [rsp+30h] [rbp-50h] BYREF
  struct CGeometryOnlyDrawListBrush *v23[2]; // [rsp+38h] [rbp-48h] BYREF
  char v24; // [rsp+48h] [rbp-38h]
  _DWORD v25[4]; // [rsp+50h] [rbp-30h] BYREF
  CNineGridDrawListBrush **v26; // [rsp+60h] [rbp-20h]
  CNineGridDrawListBrush *v27; // [rsp+68h] [rbp-18h] BYREF
  char v28; // [rsp+70h] [rbp-10h]
  CGeometryOnlyDrawListBrush *v29; // [rsp+A0h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 8) && *((_BYTE *)this + 112) )
  {
    v10 = *((float *)this + 21) * *((float *)this + 20);
    v29 = 0LL;
    v11 = *((float *)this + 23) * *((float *)this + 22);
    v23[1] = 0LL;
    *(float *)v25 = v10;
    v12 = *((float *)this + 25) * *((float *)this + 24);
    v23[0] = (struct CGeometryOnlyDrawListBrush *)&v29;
    *(float *)&v25[1] = v11;
    v13 = *((float *)this + 27) * *((float *)this + 26);
    v24 = 1;
    *(float *)&v25[2] = v12;
    *(float *)&v25[3] = v13;
    v8 = CGeometryOnlyDrawListBrush::Create(&v23[1]);
    if ( v24 )
    {
      v15 = *(CGeometryOnlyDrawListBrush **)v23[0];
      *(_QWORD *)v23[0] = v23[1];
      if ( v15 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v15, 1u);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1A0u);
    }
    else
    {
      height = a3->height;
      v17 = v29;
      width = a3->width;
      v23[0] = 0LL;
      v27 = 0LL;
      *((_BYTE *)v29 + 52) = 1;
      *((_DWORD *)v17 + 12) = 50529027;
      v23[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      v28 = 1;
      *((_OWORD *)v17 + 2) = *(_OWORD *)v23;
      v19 = v29;
      LOBYTE(v14) = *((_BYTE *)this + 112);
      v22 = 0LL;
      v29 = 0LL;
      v23[0] = v19;
      v26 = &v22;
      v8 = CNineGridDrawListBrush::Create((unsigned int)v23, (unsigned int)v25, (unsigned int)v25, v14, (__int64)&v27);
      if ( v28 )
      {
        v20 = *v26;
        *v26 = v27;
        if ( v20 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v20, 1u);
      }
      if ( v23[0] )
        std::default_delete<CDrawListBrush>::operator()(v20, v23[0]);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1A9u);
        if ( v22 )
          CNineGridDrawListBrush::`scalar deleting destructor'(v22, 1u);
      }
      else
      {
        v21 = v22;
        v22 = 0LL;
        *a4 = v21;
      }
    }
    if ( v29 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v29, 1u);
  }
  else
  {
    LayoutGeometryDrawListBrush = CSpriteVisualContent::CreateLayoutGeometryDrawListBrush(this, a2, a3, a4);
    v8 = LayoutGeometryDrawListBrush;
    if ( LayoutGeometryDrawListBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LayoutGeometryDrawListBrush, 0x1AFu);
  }
  return (unsigned int)v8;
}
