/*
 * XREFs of ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800973F0
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180003330 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800973C0 (-DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180047860 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18006E4A0 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x1800977B8 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800977E8 (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x1801608EC (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     McTemplateU0ffff @ 0x18019F56C (McTemplateU0ffff.c)
 *     McTemplateU0ppffff @ 0x18019F5F8 (McTemplateU0ppffff.c)
 *     McTemplateU0pq @ 0x18019F6A8 (McTemplateU0pq.c)
 */

__int64 __fastcall CPrimitiveGroup::DrawWorker(
        struct CPrimitiveGroup *a1,
        char a2,
        unsigned int *a3,
        struct D2D_SIZE_F *a4,
        _BYTE *a5,
        __int64 a6,
        struct CDrawListCache *a7)
{
  char v7; // r13
  unsigned int CurrentVisual; // r14d
  char v11; // dl
  CDrawingContext *v12; // rcx
  int v13; // eax
  char v14; // al
  int v16; // eax
  __int64 i; // r14
  struct IBitmapRealization *v18; // rbx
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  struct IBitmapRealization *v23; // [rsp+48h] [rbp-D0h] BYREF
  struct CDrawListCache *v24; // [rsp+50h] [rbp-C8h]
  struct D2D_SIZE_F *v25; // [rsp+58h] [rbp-C0h]
  __int128 v26; // [rsp+60h] [rbp-B8h]
  _BYTE v27[64]; // [rsp+70h] [rbp-A8h] BYREF
  int v28; // [rsp+B0h] [rbp-68h]
  __int128 v29; // [rsp+C0h] [rbp-58h] BYREF

  v7 = 0;
  v25 = a4;
  v24 = a7;
  if ( a5 )
    *a5 = CPrimitiveGroup::GetLargestOpaqueRect(a1, a6);
  if ( g_LockAndReadPrimitiveGroupBitmaps )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 48); i = (unsigned int)(i + 1) )
    {
      if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)a1 + 21) + 8 * i) + 64LL),
                  &v23) >= 0 )
      {
        v18 = v23;
        (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v23 + 152LL))(v23);
        (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( *((_QWORD *)a1 + 63) )
  {
    CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)(a3 + 2));
    CDrawingContext::EtwLogCurrentState((CDrawingContext *)a3);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McTemplateU0ppffff(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        Microsoft_Windows_Dwm_CoreEnableBits,
        CurrentVisual,
        (_DWORD)a1,
        *((_DWORD *)a1 + 23),
        *((_DWORD *)a1 + 24),
        *((_DWORD *)a1 + 25),
        *((_DWORD *)a1 + 26));
    LODWORD(v23) = -1;
    if ( CDrawingContext::IsBounding((CDrawingContext *)a3) )
    {
      *(_QWORD *)&v29 = 0x3F8000003F800000LL;
      *((_QWORD *)&v29 + 1) = 0x3F8000003F800000LL;
      v16 = CDrawingContext::DrawSolidRectangle(v12, (struct CPrimitiveGroup *)((char *)a1 + 92), &v29);
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x67u);
        return 0LL;
      }
    }
    else
    {
      if ( (v11 & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 18LL, a3[1690]);
      v28 = 0;
      v7 = 1;
      CMatrixStack::Top((CMatrixStack *)(a3 + 120), (struct CMILMatrix *)v27);
      if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
      {
        v26 = *(_OWORD *)((char *)a1 + 92);
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v27);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0ffff(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
            v19,
            v20,
            SBYTE8(v29),
            SBYTE12(v29));
      }
      if ( a2 )
      {
        v13 = CContent::DrawAsDrawList(a1, (CDrawingContext *)a3, v25, a6, v24);
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x82u);
      }
      else
      {
        CPrimitiveGroup::ProcessHeatMapChanges(a1);
        v21 = CDrawingContext::DrawPrimitiveGroup(
                (CDrawingContext *)a3,
                a1,
                *((_BYTE *)a1 + 577) == 0,
                (unsigned int *)&v23);
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x88u);
      }
    }
    v14 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0pq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_PRIMITIVE_GROUP_SELF_OCCLUSION_INFO,
        a1,
        (unsigned int)v23);
      v14 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    if ( v7 && (v14 & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 18LL, a3[1690]);
  }
  return 0LL;
}
