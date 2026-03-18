/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x18001BA7C (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028BB0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028CA0 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180088D38 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090284 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180097F4C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800983A4 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x180098D80 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18009BB64 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x1800B8CB4 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x18011C3DC (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x18014F9D4 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x180176FF0 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180178B94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180178EAC (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801907DC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, int (__fastcall ***a3)(void *, GUID *, __int64 *))
{
  char v5; // di
  unsigned int v6; // r14d
  CMILCOMBase *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  char v12; // r12
  float v13; // xmm7_4
  float v14; // xmm9_4
  float v15; // xmm8_4
  int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // rax
  bool SwapChainTransformForDirtyRects; // al
  char v20; // bl
  __int64 v21; // rcx
  bool v22; // r13
  unsigned int v23; // eax
  __m128i v24; // xmm7
  int v25; // eax
  CShape **DxClipShape; // rax
  char v27; // al
  int v28; // eax
  int v29; // ecx
  float v30; // xmm6_4
  float v31; // xmm11_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm2_4
  float v37; // xmm3_4
  float v38; // xmm4_4
  float v39; // xmm5_4
  int v40; // edi
  int v41; // ebx
  float v42; // xmm0_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  HRGN *v47; // r8
  unsigned int v48; // eax
  unsigned int i; // ebx
  float v50; // xmm1_4
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  float v53; // xmm2_4
  float v54; // xmm3_4
  float v55; // xmm4_4
  float v56; // xmm5_4
  float v57; // xmm1_4
  float v58; // xmm0_4
  HRGN v60; // [rsp+28h] [rbp-E0h]
  float v61; // [rsp+38h] [rbp-D0h] BYREF
  float v62; // [rsp+3Ch] [rbp-CCh]
  struct tagPOINT v63; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+48h] [rbp-C0h] BYREF
  void *v65; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-B0h] BYREF
  FastRegion::CRegion *v67; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v68[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v69; // [rsp+A8h] [rbp-60h]
  _BYTE v70[64]; // [rsp+B8h] [rbp-50h] BYREF
  int v71; // [rsp+F8h] [rbp-10h]
  float v72; // [rsp+108h] [rbp+0h] BYREF
  float v73; // [rsp+10Ch] [rbp+4h]
  float v74; // [rsp+110h] [rbp+8h]
  float v75; // [rsp+114h] [rbp+Ch]
  struct tagRECT rc; // [rsp+118h] [rbp+10h] BYREF
  __int64 v77; // [rsp+128h] [rbp+20h] BYREF
  __int64 v78; // [rsp+130h] [rbp+28h]
  unsigned int v79[4]; // [rsp+138h] [rbp+30h]
  _QWORD v80[2]; // [rsp+148h] [rbp+40h] BYREF
  void *v81[3]; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v82; // [rsp+170h] [rbp+68h]

  v61 = 0.0;
  v65 = 0LL;
  v5 = 0;
  v64 = 0LL;
  v66 = 0LL;
  v6 = 4;
  if ( a2 != 1 )
    goto LABEL_66;
  if ( !a3
    || (v7 = *(CMILCOMBase **)(a1 + 944)) == 0LL
    || (int)CMILCOMBase::InternalQueryInterface(v7, &GUID_00000000_0000_0000_c000_000000000046, &v65) < 0
    || v65 != a3 )
  {
    if ( !*(_DWORD *)(a1 + 976) )
      goto LABEL_67;
LABEL_66:
    v6 = 5;
    CWindowNode::ProcessReadyFlipExImages((CWindowNode *)a1);
    goto LABEL_67;
  }
  (**a3)(a3, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v66);
  if ( !v66
    || !CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
          *(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 72LL),
          (const struct CVisual *)a1,
          (struct ISwapChainContent *)((*(_QWORD *)(a1 + 944) + 56LL) & -(__int64)(*(_QWORD *)(a1 + 944) != 0LL))) )
  {
    if ( (**a3)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, &v64) >= 0 )
    {
      v77 = 0LL;
      v78 = 0LL;
      *(_QWORD *)v79 = 0LL;
      v79[2] = 0;
      DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>(v81);
      v12 = 0;
      v13 = FLOAT_1_0;
      v14 = FLOAT_1_0;
      v15 = 0.0;
      v16 = 1;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 944) + 96LL);
      if ( v17 )
        v16 = *(_DWORD *)(v17 + 168);
      (*(void (__fastcall **)(__int64, FastRegion::CRegion **))(*(_QWORD *)v64 + 24LL))(v64, &v67);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v64 + 32LL))(v64, &v77);
      if ( v67 )
      {
        v82 = 0;
        CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>(v67, (__int64)v81);
      }
      v18 = *(_QWORD *)(a1 + 944);
      v69 = 0;
      SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(
                                          (struct ISwapChainContent *)((v18 + 56) & -(__int64)(v18 != 0)),
                                          (struct CMILMatrix *)v68);
      v20 = 0;
      v21 = *(_QWORD *)(a1 + 944) + 56LL;
      v71 = 0;
      v22 = SwapChainTransformForDirtyRects;
      CCompositionSurfaceBitmap::GetTransform(v21, (__int64)v70, v80);
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v70, (__int64)v80, &v72);
      if ( v16 == 1 )
      {
        if ( *(_BYTE *)(a1 + 1016) )
          v15 = (float)(*(_DWORD *)(a1 + 672) - *(_DWORD *)(a1 + 664)) - (float)(v74 - v72);
      }
      else if ( (float)(v74 - v72) > 0.0 && (float)(v75 - v73) > 0.0 )
      {
        v23 = 0;
        if ( *(_DWORD *)(a1 + 672) - *(_DWORD *)(a1 + 664) >= 0 )
          v23 = *(_DWORD *)(a1 + 672) - *(_DWORD *)(a1 + 664);
        v24 = _mm_cvtsi32_si128(v23);
        v25 = 0;
        if ( *(_DWORD *)(a1 + 676) - *(_DWORD *)(a1 + 668) >= 0 )
          v25 = *(_DWORD *)(a1 + 676) - *(_DWORD *)(a1 + 668);
        v13 = _mm_cvtepi32_ps(v24).m128_f32[0] / (float)(v74 - v72);
        v14 = (float)v25 / (float)(v75 - v73);
      }
      if ( (_DWORD)v77 )
      {
        if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(*(_QWORD *)(a1 + 944) + 64LL)) )
        {
          v5 = 1;
          DxClipShape = (CShape **)CWindowNode::GetDxClipShape(a1, &rc);
          if ( CShapePtr::IsAxisAlignedRectangle(DxClipShape) )
          {
            if ( !*(_BYTE *)(a1 + 1020) )
            {
              v27 = 0;
              if ( qword_18026EEA8 )
                v27 = CDisplaySet::NeedsDesktopMoves(qword_18026EEA8);
              if ( v27 )
                v20 = 1;
            }
          }
        }
      }
      if ( (v5 & 1) != 0 )
        CShapePtr::Release((CRegionShape **)&rc);
      if ( !v20 )
        goto LABEL_51;
      v28 = v79[1];
      v29 = v79[2];
      v30 = (float)(int)v79[1];
      v31 = (float)(int)v79[2];
      v61 = (float)(int)v79[1];
      v62 = (float)(int)v79[2];
      v32 = (float)SHIDWORD(v77);
      v33 = (float)(int)v78;
      v72 = (float)SHIDWORD(v77);
      v73 = (float)(int)v78;
      v34 = (float)SHIDWORD(v78);
      v35 = (float)(int)v79[0];
      v74 = (float)SHIDWORD(v78);
      v75 = (float)(int)v79[0];
      if ( v67 )
      {
        if ( !(unsigned __int8)CDwmMetaRegion::ExcludeRegionFromRect(&v72) )
        {
LABEL_50:
          v12 = 1;
LABEL_51:
          v48 = v82;
          if ( v82 && (*(_BYTE *)(a1 + 88) & 4) == 0 )
          {
            for ( i = 0; i <= v82; ++i )
            {
              v6 = v6 & 0xFFFFFFF3 | 8;
              if ( i >= v48 )
              {
                if ( !(_DWORD)v77 || !*(_QWORD *)&v79[1] )
                  break;
                v72 = (float)SHIDWORD(v77);
                v51 = _mm_cvtsi32_si128(HIDWORD(v78));
                v73 = (float)(int)v78;
                v52 = _mm_cvtsi32_si128(v79[0]);
              }
              else
              {
                v50 = (float)*((int *)v81[0] + 4 * i + 1);
                v72 = (float)*((int *)v81[0] + 4 * i);
                v51 = _mm_cvtsi32_si128(*((_DWORD *)v81[0] + 4 * i + 2));
                v73 = v50;
                v52 = _mm_cvtsi32_si128(*((_DWORD *)v81[0] + 4 * i + 3));
              }
              LODWORD(v75) = _mm_cvtepi32_ps(v52).m128_u32[0];
              LODWORD(v74) = _mm_cvtepi32_ps(v51).m128_u32[0];
              CMILMatrix::Transform2DBoundsHelper<0>((__int64)v68, (__int64)&v72, (float *)&rc.left);
              v53 = *(float *)&rc.left;
              v54 = *(float *)&rc.top;
              v55 = *(float *)&rc.right;
              v56 = *(float *)&rc.bottom;
              if ( v16 == 1 )
              {
                if ( *(_BYTE *)(a1 + 1016) )
                {
                  v53 = *(float *)&rc.left + v15;
                  v54 = *(float *)&rc.top + 0.0;
                  v55 = *(float *)&rc.right + v15;
                  v56 = *(float *)&rc.bottom + 0.0;
                }
              }
              else
              {
                v53 = *(float *)&rc.left * v13;
                v54 = *(float *)&rc.top * v14;
                v55 = *(float *)&rc.right * v13;
                v56 = *(float *)&rc.bottom * v14;
              }
              v57 = (float)(*(_DWORD *)(a1 + 668) - *(_DWORD *)(a1 + 636));
              v58 = (float)(*(_DWORD *)(a1 + 664) - *(_DWORD *)(a1 + 632));
              v73 = v54 + v57;
              v72 = v53 + v58;
              v74 = v55 + v58;
              v75 = v56 + v57;
              CWindowNode::AddLocalDirtyRect((CWindowNode *)a1, (const struct MilRectF *)&v72, v12);
              v48 = v82;
            }
          }
          ReleaseInterfaceNoNULL<CManipulationManager>(v64);
          DynArrayImpl<1>::~DynArrayImpl<1>(v81);
          goto LABEL_67;
        }
        v29 = v79[2];
        v28 = v79[1];
        v35 = v75;
        v34 = v74;
        v33 = v73;
        v32 = v72;
      }
      v36 = v32 - (float)v28;
      v37 = v33 - (float)v29;
      v38 = v34 - (float)v28;
      v39 = v35 - (float)v29;
      v72 = v36;
      v73 = v37;
      v74 = v38;
      v75 = v39;
      if ( v22 )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v68, (__int64)&v72, &v72);
        CMILMatrix::Transform((CMILMatrix *)v68, (const struct MilPoint2F *)&v61, (struct MilPoint2F *)&v61, 1u);
        v39 = v75;
        v38 = v74;
        v37 = v73;
        v36 = v72;
        v31 = v62;
        v30 = v61;
      }
      if ( v16 == 1 )
      {
        if ( *(_BYTE *)(a1 + 1016) )
        {
          v36 = v36 + v15;
          v37 = v37 + 0.0;
          v38 = v38 + v15;
          v39 = v39 + 0.0;
          v30 = v30 + v15;
        }
      }
      else
      {
        v36 = v36 * v13;
        v37 = v37 * v14;
        v38 = v38 * v13;
        v39 = v39 * v14;
        v30 = v30 * v13;
        v31 = v31 * v14;
      }
      v40 = *(_DWORD *)(a1 + 664) - *(_DWORD *)(a1 + 680);
      v41 = *(_DWORD *)(a1 + 668) - *(_DWORD *)(a1 + 684);
      v42 = v36 + 6291456.25;
      rc.left = (int)(LODWORD(v42) << 10) >> 11;
      v43 = v37 + 6291456.25;
      rc.top = (int)(LODWORD(v43) << 10) >> 11;
      v44 = v38 + 6291456.25;
      rc.right = (int)(LODWORD(v44) << 10) >> 11;
      v45 = v39 + 6291456.25;
      rc.bottom = (int)(LODWORD(v45) << 10) >> 11;
      v46 = v30 + 6291456.25;
      v63.x = (int)(LODWORD(v46) << 10) >> 11;
      v61 = v31 + 6291456.25;
      v63.y = (int)(LODWORD(v61) << 10) >> 11;
      OffsetRect(&rc, v40, v41);
      v63.x += v40;
      v63.y += v41;
      CWindowNode::NotifyMoveOptimization((CWindowNode *)a1, &rc, v47, &v63, v60);
      goto LABEL_50;
    }
LABEL_67:
    CVisual::PropagateFlags(a1, v6, 0);
    goto LABEL_68;
  }
  CVisual::DirtySecondaryRepresentations((CVisual *)a1);
  v8 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( *(_DWORD *)(v9 + 48) )
  {
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL * v8);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, 70LL) )
      {
        v11 = *(_QWORD **)(*(_QWORD *)(v9 + 24) + 8LL * v8);
        if ( *(_QWORD *)(v11[14] + 128LL) != v11[14] )
          (*(void (__fastcall **)(_QWORD *))(*v11 + 216LL))(v11);
      }
      ++v8;
    }
    while ( v8 < *(_DWORD *)(v9 + 48) );
  }
LABEL_68:
  if ( v65 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v65 + 16LL))(v65);
  if ( v66 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
  return 0LL;
}
