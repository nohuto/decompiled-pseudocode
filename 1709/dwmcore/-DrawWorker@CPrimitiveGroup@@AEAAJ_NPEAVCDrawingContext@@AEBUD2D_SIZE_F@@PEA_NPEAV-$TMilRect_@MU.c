/*
 * XREFs of ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180027B58
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028200 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180146EE0 (-DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x180026000 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180028C20 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18003EAB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180040290 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x1800407E0 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     McTemplateU0ffff @ 0x18017511C (McTemplateU0ffff.c)
 *     McTemplateU0ppffff @ 0x1801751A8 (McTemplateU0ppffff.c)
 *     McTemplateU0pq @ 0x180175258 (McTemplateU0pq.c)
 */

__int64 __fastcall CPrimitiveGroup::DrawWorker(
        CSpriteVisualContent *this,
        char a2,
        __int64 a3,
        struct D2D_SIZE_F *a4,
        bool *a5,
        float *a6,
        struct CDrawListCache *a7)
{
  char v7; // r13
  char v9; // r14
  bool v11; // al
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // eax
  char v28; // al
  int v30; // eax
  __int64 v31; // r14
  struct IBitmapRealization *v32; // rbx
  int v33; // r8d
  int v34; // r9d
  int v35; // eax
  struct IBitmapRealization *v37; // [rsp+48h] [rbp-D0h] BYREF
  struct CDrawListCache *v38; // [rsp+50h] [rbp-C8h]
  struct D2D_SIZE_F *v39; // [rsp+58h] [rbp-C0h]
  __int128 v40; // [rsp+60h] [rbp-B8h] BYREF
  _OWORD v41[4]; // [rsp+70h] [rbp-A8h] BYREF
  int v42; // [rsp+B0h] [rbp-68h]
  __int64 v43; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-50h]

  v7 = 0;
  v9 = a2;
  v39 = a4;
  v38 = a7;
  if ( a5 )
  {
    v11 = 0;
    if ( *((_QWORD *)this + 63) && a6 )
    {
      v12 = *((float *)this + 139);
      *a6 = v12;
      v13 = *((float *)this + 140);
      a6[1] = v13;
      v14 = *((float *)this + 141);
      a6[2] = v14;
      v15 = *((float *)this + 142);
      a6[3] = v15;
      v11 = v14 > v12 && v15 > v13;
    }
    *a5 = v11;
  }
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    v31 = 0LL;
    if ( *((_DWORD *)this + 48) )
    {
      do
      {
        if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                    (CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * v31) + 64LL),
                    &v37) >= 0 )
        {
          v32 = v37;
          (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v37 + 152LL))(v37);
          (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v32 + 16LL))(v32);
        }
        v31 = (unsigned int)(v31 + 1);
      }
      while ( (unsigned int)v31 < *((_DWORD *)this + 48) );
      v9 = a2;
    }
    else
    {
      v9 = a2;
    }
  }
  if ( *((_QWORD *)this + 63) )
  {
    LODWORD(v16) = 0;
    if ( *(_BYTE *)(a3 + 6520) )
    {
      if ( *(_BYTE *)(a3 + 6521) )
        v16 = *(_QWORD *)(a3 + 3160);
      else
        v16 = *(_QWORD *)(*(_QWORD *)(a3 + 6528) + 24LL);
    }
    CDrawingContext::EtwLogCurrentState((CDrawingContext *)a3);
    v20 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      McTemplateU0ppffff(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        v17,
        v16,
        (_DWORD)this,
        *((_DWORD *)this + 23),
        *((_DWORD *)this + 24),
        *((_DWORD *)this + 25),
        *((_DWORD *)this + 26));
      v20 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    LODWORD(v37) = -1;
    if ( *(_BYTE *)(a3 + 3136) || *(_QWORD *)(a3 + 6768) )
    {
      v43 = 0x3F8000003F800000LL;
      v44 = 0x3F8000003F800000LL;
      v30 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)a3, (CSpriteVisualContent *)((char *)this + 92));
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x67u);
        return 0LL;
      }
    }
    else
    {
      if ( (v20 & 0x20) != 0 )
        McTemplateU0qq(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT_Start,
          18LL,
          *(unsigned int *)(a3 + 6760));
      v21 = *(_DWORD *)(a3 + 480);
      v7 = 1;
      v42 = 0;
      if ( v21 )
      {
        v22 = (unsigned int)(v21 - 1);
        v23 = *(_QWORD *)(a3 + 496);
        v24 = *(_OWORD *)(68 * v22 + v23 + 16);
        v41[0] = *(_OWORD *)(68 * v22 + v23);
        v25 = *(_OWORD *)(68 * v22 + v23 + 32);
        v41[1] = v24;
        v26 = *(_OWORD *)(68 * v22 + v23 + 48);
        LODWORD(v23) = *(_DWORD *)(68 * v22 + v23 + 64);
        v41[2] = v25;
        v41[3] = v26;
        v42 = v23;
      }
      else
      {
        CMILMatrix::operator=(v41, v17, v18, v19);
      }
      if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
      {
        v40 = *(_OWORD *)((char *)this + 92);
        CMILMatrix::Transform2DBoundsHelper<0>(v41, &v40, &v43);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0ffff(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
            v33,
            v34,
            v44,
            SBYTE4(v44));
      }
      if ( v9 )
      {
        v35 = CContent::DrawAsDrawList(this, (const struct CVisualTree **)a3, v39, (__int64)a5, (int)a6, v38);
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x82u);
      }
      else
      {
        CPrimitiveGroup::ProcessHeatMapChanges(this);
        v27 = CDrawingContext::DrawPrimitiveGroup(
                (CDrawingContext *)a3,
                this,
                *((_BYTE *)this + 577) == 0,
                (unsigned int *)&v37);
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x88u);
      }
    }
    v28 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0pq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
        this,
        (unsigned int)v37);
      v28 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    if ( v7 && (v28 & 0x20) != 0 )
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        18LL,
        *(unsigned int *)(a3 + 6760));
  }
  return 0LL;
}
