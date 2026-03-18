/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009B140
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097F70 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180099020 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180099174 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A8F0 (-GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x18009B468 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18015DF20 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180178B94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  signed int v7; // eax
  int RenderBounds; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *DxClipShape; // rax
  DWORD v12; // r9d
  __int64 v13; // r14
  _QWORD *v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  float v18; // xmm0_4
  unsigned int v19; // eax
  __m128i v20; // xmm0
  int v21; // eax
  signed int WindowClipShape; // eax
  signed int TightBounds; // eax
  unsigned int v25; // [rsp+20h] [rbp-40h]
  CRegionShape *v26; // [rsp+30h] [rbp-30h] BYREF
  char v27; // [rsp+38h] [rbp-28h]
  __m128 v28; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)a3 = 0LL;
  v5 = 0;
  v6 = *((_QWORD *)this + 30);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64))(*(_QWORD *)v6 + 168LL))(
           v6,
           a2,
           (char *)this + 132,
           a3);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xC53u);
  }
  if ( v5 < 0 )
  {
    v25 = 2316;
    goto LABEL_34;
  }
  if ( !*((_BYTE *)this + 1010) )
  {
    if ( !*((_QWORD *)this + 98) )
      goto LABEL_10;
    RenderBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    v5 = RenderBounds;
    if ( RenderBounds < 0 )
    {
      v25 = 2329;
    }
    else
    {
      RenderBounds = CWindowNode::GetRenderBounds(this, *((_QWORD *)this + 98), *((_QWORD *)this + 124), &v28);
      v5 = RenderBounds;
      if ( RenderBounds >= 0 )
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, v28.m128_f32);
LABEL_10:
        v9 = *((_QWORD *)this + 118);
        if ( v9 )
        {
          if ( CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v9 + 64)) )
          {
            v10 = *((_QWORD *)this + 118);
            DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &v26);
            v5 = CWindowNode::GetRenderBounds(this, (v10 + 64) & -(__int64)(v10 != 0), *DxClipShape, &v28);
            CShapePtr::Release(&v26);
            if ( v5 < 0 )
            {
              v25 = 2344;
LABEL_34:
              v12 = v5;
              goto LABEL_35;
            }
LABEL_19:
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, v28.m128_f32);
          }
        }
        else
        {
          v13 = *((_QWORD *)this + 115);
          if ( v13 )
          {
            v14 = (_QWORD *)CWindowNode::GetDxClipShape(this, &v26);
            v5 = CWindowNode::GetRenderBounds(this, (v13 + 8) & -(__int64)(v13 != 0), *v14, &v28);
            CShapePtr::Release(&v26);
            if ( v5 < 0 )
            {
              v25 = 2353;
              goto LABEL_34;
            }
            goto LABEL_19;
          }
        }
        if ( *((_BYTE *)this + 1010) || !*((_QWORD *)this + 74) )
          return (unsigned int)v5;
        if ( !*((_QWORD *)this + 105) )
        {
          v15 = *((_DWORD *)this + 170);
          v16 = *((_DWORD *)this + 171);
          v17 = *((_DWORD *)this + 159) - v16;
          v28.m128_f32[0] = (float)(*((_DWORD *)this + 158) - v15);
          v18 = (float)v17;
          v19 = *((_DWORD *)this + 160) - v15;
          v28.m128_f32[1] = v18;
          v20 = _mm_cvtsi32_si128(v19);
          v21 = *((_DWORD *)this + 161) - v16;
          v28.m128_i32[2] = _mm_cvtepi32_ps(v20).m128_u32[0];
          v28.m128_f32[3] = (float)v21;
          goto LABEL_28;
        }
        v26 = 0LL;
        v27 = 0;
        WindowClipShape = CWindowNode::GetWindowClipShape(this, &v26);
        v5 = WindowClipShape;
        if ( WindowClipShape < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WindowClipShape, 0x94Cu);
        }
        else
        {
          TightBounds = CShapePtr::GetTightBounds(&v26, &v28, 0LL);
          v5 = TightBounds;
          if ( TightBounds >= 0 )
          {
            CShapePtr::Release(&v26);
LABEL_28:
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, v28.m128_f32);
            if ( CWindowNode::GetTouchTargetBounds(this, v28.m128_f32) )
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, v28.m128_f32);
            return (unsigned int)v5;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TightBounds, 0x94Eu);
        }
        CShapePtr::Release(&v26);
        return (unsigned int)v5;
      }
      v25 = 2333;
    }
    v12 = RenderBounds;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, v25);
  }
  return (unsigned int)v5;
}
