/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800528C0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x18001E408 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180050074 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051F5C (-GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180052B18 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006F050 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801625F4 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801643B0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r12
  int v6; // esi
  __int64 v7; // rcx
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  float v14; // xmm0_4
  unsigned int v15; // eax
  __m128i v16; // xmm0
  int v17; // eax
  int WindowClipShape; // eax
  __int64 (__fastcall *v20)(CRegionShape *); // rax
  int TightBounds; // eax
  int RenderBounds; // eax
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // rbx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  void *v29; // rcx
  int v30; // r9d
  __int64 v31; // rbx
  _QWORD *DxClipShape; // rax
  _QWORD *v33; // rax
  unsigned int v34; // [rsp+20h] [rbp-40h]
  CRegionShape *v35; // [rsp+30h] [rbp-30h] BYREF
  char v36; // [rsp+38h] [rbp-28h]
  float v37[4]; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0LL;
  a3[1] = 0LL;
  *a3 = 0LL;
  v6 = 0;
  v7 = *((_QWORD *)this + 30);
  if ( v7 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD *))(*(_QWORD *)v7 + 152LL))(
            v7,
            a2,
            (char *)this + 128,
            a3);
    v6 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC1Au);
  }
  if ( v6 < 0 )
  {
    v34 = 2364;
    goto LABEL_54;
  }
  CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
  v8 = *((_DWORD *)this + 238);
  if ( v8 )
  {
    while ( 1 )
    {
      v24 = v8 - 1;
      if ( CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 116)
                                                                                         + 8 * v24)
                                                                             + 64LL)) )
        break;
      --v8;
      if ( !(_DWORD)v24 )
        goto LABEL_4;
    }
    if ( *((_QWORD *)this + 115) )
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 115));
      *((_QWORD *)this + 115) = 0LL;
    }
    v25 = (unsigned int)v24;
    *((_QWORD *)this + 115) = *(_QWORD *)(*((_QWORD *)this + 116) + 8 * v24);
    if ( v8 != 1 )
    {
      do
      {
        v26 = *((_QWORD *)this + 116);
        CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v3 + v26));
        *(_QWORD *)(v3 + v26) = 0LL;
        v3 += 8LL;
        --v25;
      }
      while ( v25 );
    }
    if ( v8 )
    {
      v27 = *((_DWORD *)this + 238);
      if ( v8 > v27 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x234u);
      }
      else
      {
        v28 = v27 - v8;
        if ( v28 )
          memmove(*((void **)this + 116), (const void *)(*((_QWORD *)this + 116) + 8LL * v8), 8LL * v28);
        *((_DWORD *)this + 238) = v28;
      }
    }
    v29 = (void *)*((_QWORD *)this + 122);
    if ( v29 )
    {
      WPF::ProcessHeapImpl::Free(v29);
      *((_QWORD *)this + 122) = 0LL;
    }
  }
LABEL_4:
  if ( !*((_BYTE *)this + 986) )
  {
    if ( !*((_QWORD *)this + 95) )
      goto LABEL_6;
    RenderBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    v6 = RenderBounds;
    if ( RenderBounds < 0 )
    {
      v34 = 2383;
    }
    else
    {
      RenderBounds = CWindowNode::GetRenderBounds(this, *((_QWORD *)this + 95), *((_QWORD *)this + 121), v37, 0LL, 0LL);
      v6 = RenderBounds;
      if ( RenderBounds >= 0 )
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v37);
LABEL_6:
        v9 = *((_QWORD *)this + 115);
        if ( v9 )
        {
          if ( !CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v9 + 64)) )
            goto LABEL_8;
          v31 = *((_QWORD *)this + 115);
          DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &v35);
          v6 = CWindowNode::GetRenderBounds(this, (v31 + 64) & -(__int64)(v31 != 0), *DxClipShape, v37, 0LL, 0LL);
          CShapePtr::Release((CShapePtr *)&v35);
          if ( v6 < 0 )
          {
            v34 = 2398;
LABEL_54:
            v30 = v6;
            goto LABEL_55;
          }
        }
        else
        {
          v10 = *((_QWORD *)this + 112);
          if ( !v10 )
          {
LABEL_8:
            if ( *((_BYTE *)this + 986) || !*((_QWORD *)this + 72) )
              return (unsigned int)v6;
            if ( !*((_QWORD *)this + 102) )
            {
              v11 = *((_DWORD *)this + 163);
              v12 = *((_DWORD *)this + 164);
              v13 = *((_DWORD *)this + 152) - v12;
              v37[0] = (float)(*((_DWORD *)this + 151) - v11);
              v14 = (float)v13;
              v15 = *((_DWORD *)this + 153) - v11;
              v37[1] = v14;
              v16 = _mm_cvtsi32_si128(v15);
              v17 = *((_DWORD *)this + 154) - v12;
              LODWORD(v37[2]) = _mm_cvtepi32_ps(v16).m128_u32[0];
              v37[3] = (float)v17;
              goto LABEL_12;
            }
            v35 = 0LL;
            v36 = 0;
            WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v35);
            v6 = WindowClipShape;
            if ( WindowClipShape < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, WindowClipShape, 0x982u);
            }
            else
            {
              v20 = *(__int64 (__fastcall **)(CRegionShape *))(*(_QWORD *)v35 + 32LL);
              if ( v20 == CRegionShape::GetTightBounds )
                TightBounds = CRegionShape::GetTightBounds(v35);
              else
                TightBounds = ((__int64 (__fastcall *)(CRegionShape *, float *, _QWORD))v20)(v35, v37, 0LL);
              v6 = TightBounds;
              if ( TightBounds >= 0 )
              {
                CShapePtr::Release((CShapePtr *)&v35);
LABEL_12:
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v37);
                if ( CWindowNode::GetTouchTargetBounds(this, v37) )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v37);
                return (unsigned int)v6;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x984u);
            }
            CShapePtr::Release((CShapePtr *)&v35);
            return (unsigned int)v6;
          }
          v33 = (_QWORD *)CWindowNode::GetDxClipShape(this, &v35);
          v6 = CWindowNode::GetRenderBounds(this, (v10 + 8) & -(__int64)(v10 != 0), *v33, v37, 0LL, 0LL);
          CShapePtr::Release((CShapePtr *)&v35);
          if ( v6 < 0 )
          {
            v34 = 2407;
            goto LABEL_54;
          }
        }
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v37);
        goto LABEL_8;
      }
      v34 = 2387;
    }
    v30 = RenderBounds;
LABEL_55:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v34);
  }
  return (unsigned int)v6;
}
