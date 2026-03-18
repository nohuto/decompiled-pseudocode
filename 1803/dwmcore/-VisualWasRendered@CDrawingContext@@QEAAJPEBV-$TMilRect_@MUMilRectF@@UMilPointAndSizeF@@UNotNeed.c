/*
 * XREFs of ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18006B130
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7868 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801A7114 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 */

__int64 __fastcall CDrawingContext::VisualWasRendered(__int64 a1, __int128 *a2, CVisual *a3)
{
  bool v3; // zf
  __int64 v7; // rdx
  __int64 v8; // r10
  int v9; // edx
  __int64 v10; // r8
  unsigned int v11; // r9d
  CMILMatrix *TopByReference; // rax
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  CVisual *v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+38h] [rbp-28h] BYREF
  float v22; // [rsp+48h] [rbp-18h]
  float v23; // [rsp+4Ch] [rbp-14h]
  float v24; // [rsp+50h] [rbp-10h]
  float v25; // [rsp+54h] [rbp-Ch]

  v3 = *(_BYTE *)(a1 + 6828) == 0;
  v20 = a3;
  if ( !v3 )
  {
    if ( qword_1802D6428 )
    {
      v7 = 0LL;
      if ( *((_DWORD *)qword_1802D6428 + 18) )
      {
        v8 = *((_QWORD *)qword_1802D6428 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v8 + 8 * v7)) )
        {
          v7 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v7 >= v11 )
            return 0LL;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 272LL))(v10) )
        {
          v21 = *a2;
          TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
          CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
          CScopedClipStack::GetTopGpuClipInScope((__int64 *)(a1 + 1008), 1, (__int64)&v21);
          v13 = *(float *)&v21;
          if ( v22 > *(float *)&v21 )
          {
            *(float *)&v21 = v22;
            v13 = v22;
          }
          v14 = *((float *)&v21 + 1);
          if ( v23 > *((float *)&v21 + 1) )
          {
            *((float *)&v21 + 1) = v23;
            v14 = v23;
          }
          v15 = *((float *)&v21 + 2);
          if ( *((float *)&v21 + 2) > v24 )
          {
            *((float *)&v21 + 2) = v24;
            v15 = v24;
          }
          v16 = *((float *)&v21 + 3);
          if ( *((float *)&v21 + 3) > v25 )
          {
            *((float *)&v21 + 3) = v25;
            v16 = v25;
          }
          if ( v15 <= v13 || v16 <= v14 )
            v21 = 0uLL;
          CVisual::AddToVisibleRegion(v20);
          v17 = *(_DWORD *)(a1 + 6696);
          v18 = v17 + 1;
          if ( v17 + 1 < v17 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17 + 1 < v17 ? 0x80070216 : 0, 0xB5u);
          }
          else if ( v18 > *(_DWORD *)(a1 + 6692) )
          {
            v19 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 6672, 8LL, 1LL, &v20);
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 6672) + 8LL * v17) = v20;
            *(_DWORD *)(a1 + 6696) = v18;
          }
        }
      }
    }
  }
  return 0LL;
}
