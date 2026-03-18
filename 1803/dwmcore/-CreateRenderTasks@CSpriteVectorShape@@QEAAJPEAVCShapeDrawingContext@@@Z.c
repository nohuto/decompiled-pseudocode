/*
 * XREFs of ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801A4764
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x180210840 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18013F454 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18013F478 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801A4B54 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?GetStrokeThickness@CSpriteVectorShape@@AEBAMXZ @ 0x1801A4DEC (-GetStrokeThickness@CSpriteVectorShape@@AEBAMXZ.c)
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x180210390 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::CreateRenderTasks(CGeometry **this, struct CShapeDrawingContext *a2)
{
  int ShapeData; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct CShapeRenderTask *v7; // rax
  CGeometry *v8; // rcx
  __int128 v9; // xmm0
  CSpriteVectorShape *v10; // rcx
  float StrokeThickness; // xmm0_4
  float v12; // xmm6_4
  int v13; // eax
  int v14; // eax
  CGeometry *v15; // rdx
  struct CShapeRenderTask *v16; // rcx
  CGeometry *v17; // rax
  CGeometry *v18; // r8
  __int128 v19; // xmm0
  int v20; // eax
  CGeometry *v21; // rdx
  struct CShapeRenderTask *v22; // rcx
  CGeometry *v23; // rax
  int v24; // eax
  struct CShapeRenderTask *v25; // rcx
  CGeometry *v26; // rax
  CGeometry *v27; // rdx
  __int128 v28; // xmm0
  int v29; // eax
  struct CShapeRenderTask *v30; // rcx
  CGeometry *v31; // rax
  CGeometry *v32; // rdx
  CGeometry *v33; // r8
  __int128 v34; // xmm0
  CRectanglesShape *v36; // [rsp+30h] [rbp-30h] BYREF
  char v37; // [rsp+38h] [rbp-28h]
  __int128 v38; // [rsp+40h] [rbp-20h]
  struct CShapeRenderTask *v39; // [rsp+70h] [rbp+10h] BYREF

  v36 = 0LL;
  v37 = 0;
  ShapeData = CGeometry::GetShapeData(this[13], 0LL, &v36);
  v5 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x147u);
    goto LABEL_30;
  }
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v36) )
  {
    if ( this[11] )
    {
      if ( CShapePtr::IsAxisAlignedRectangle(&v36) )
      {
        v6 = CShapeDrawingContext::CreateRenderTask(a2, &v39);
        v5 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x150u);
          goto LABEL_30;
        }
        v7 = v39;
        v8 = this[11];
        *(_DWORD *)v39 = 4;
        v9 = *((_OWORD *)this + 8);
        *((_QWORD *)v7 + 3) = v8;
        v38 = v9;
        *(_OWORD *)((char *)v7 + 8) = v9;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *, __int64))(*(_QWORD *)this[11] + 48LL))(this[11], 18LL) )
      {
        v20 = CShapeDrawingContext::CreateRenderTask(a2, &v39);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x157u);
          goto LABEL_30;
        }
        v21 = this[11];
        v22 = v39;
        v23 = this[13];
        *(_DWORD *)v39 = 2;
        *((_QWORD *)v22 + 1) = v23;
        *((_OWORD *)v22 + 1) = *(_OWORD *)((char *)v21 + 72);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *, __int64))(*(_QWORD *)this[11] + 48LL))(this[11], 87LL) )
      {
        v24 = CShapeDrawingContext::CreateRenderTask(a2, &v39);
        v5 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x15Eu);
          goto LABEL_30;
        }
        v25 = v39;
        v26 = this[13];
        v27 = this[11];
        *(_DWORD *)v39 = 3;
        *((_QWORD *)v25 + 1) = v26;
        v28 = *((_OWORD *)this + 8);
        *((_QWORD *)v25 + 4) = v27;
        v38 = v28;
        *((_OWORD *)v25 + 1) = v28;
      }
    }
    if ( this[14] )
    {
      StrokeThickness = CSpriteVectorShape::GetStrokeThickness((CSpriteVectorShape *)this);
      v12 = StrokeThickness;
      if ( *((_BYTE *)this + 196) )
        v12 = StrokeThickness * fminf(*((float *)a2 + 126), *((float *)a2 + 127));
      v13 = CSpriteVectorShape::EnsureStrokeStyleForRender(v10);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x16Du);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *, __int64))(*(_QWORD *)this[12] + 48LL))(this[12], 18LL) )
      {
        v14 = CShapeDrawingContext::CreateRenderTask(a2, &v39);
        v5 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x172u);
        }
        else
        {
          v15 = this[12];
          v16 = v39;
          v17 = this[13];
          v18 = this[15];
          *(_DWORD *)v39 = 5;
          *((_QWORD *)v16 + 1) = v17;
          v19 = *(_OWORD *)((char *)v15 + 72);
          *((_QWORD *)v16 + 5) = v18;
          *((float *)v16 + 8) = v12;
          *((_OWORD *)v16 + 1) = v19;
        }
      }
      else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *, __int64))(*(_QWORD *)this[12] + 48LL))(this[12], 87LL) )
      {
        v29 = CShapeDrawingContext::CreateRenderTask(a2, &v39);
        v5 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x17Du);
        }
        else
        {
          v30 = v39;
          v31 = this[13];
          v32 = this[12];
          v33 = this[15];
          *(_DWORD *)v39 = 6;
          *((_QWORD *)v30 + 1) = v31;
          v34 = *((_OWORD *)this + 8);
          *((_QWORD *)v30 + 4) = v32;
          *((float *)v30 + 10) = v12;
          v38 = v34;
          *((_QWORD *)v30 + 6) = v33;
          *((_OWORD *)v30 + 1) = v34;
        }
      }
    }
  }
LABEL_30:
  CShapePtr::Release(&v36);
  return v5;
}
