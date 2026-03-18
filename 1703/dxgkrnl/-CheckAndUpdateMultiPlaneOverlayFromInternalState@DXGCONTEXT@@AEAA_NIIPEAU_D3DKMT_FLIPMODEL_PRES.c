/*
 * XREFs of ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BA040 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00E9360 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C016FF80 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C016FFD8 (-ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C0171868 (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 *     ?GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0171A1C (-GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C0172EE0 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C0172F80 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C017307C (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185D44 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 */

char __fastcall DXGCONTEXT::CheckAndUpdateMultiPlaneOverlayFromInternalState(
        DXGCONTEXT *this,
        unsigned int a2,
        __int64 a3,
        struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a4,
        bool a5,
        struct tagRECT *a6)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct DXGALLOCATION *PlaneAllocationUnsafe; // r15
  __int64 v13; // rax
  RECT SourceRect; // xmm0
  enum D3DDDI_COLOR_SPACE_TYPE ColorSpace; // edi
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v17; // r12d
  enum _D3DDDI_ROTATION v18; // r13d
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r9
  char v22; // di
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  enum D3DDDI_COLOR_SPACE_TYPE v27; // [rsp+58h] [rbp-59h]
  int v28; // [rsp+68h] [rbp-49h] BYREF
  D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v29; // [rsp+6Ch] [rbp-45h] BYREF
  unsigned int v30[32]; // [rsp+78h] [rbp-39h] BYREF

  v7 = a2;
  v8 = (unsigned int)a3;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL) + 112LL) + 3208LL * a2;
  PlaneAllocationUnsafe = DISPLAY_SOURCE::GetPlaneAllocationUnsafe(
                            (DISPLAY_SOURCE *)v9,
                            (unsigned int)a3,
                            a3,
                            (__int64)a4);
  if ( PlaneAllocationUnsafe )
  {
    memset(v30, 0, 0x50uLL);
    DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
      (DISPLAY_SOURCE *)v9,
      (unsigned int)v8,
      v30,
      (struct tagRECT *)&v30[1],
      (struct tagRECT *)&v30[5],
      (struct tagRECT *)&v30[9],
      (enum _D3DDDI_ROTATION *)&v30[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *)&v30[14],
      (enum D3DDDI_COLOR_SPACE_TYPE *)&v30[18]);
    SourceRect = a4->SourceRect;
    ColorSpace = a4->ColorSpace;
    *(RECT *)&v30[1] = SourceRect;
    v30[18] = ColorSpace;
    if ( a5 )
    {
      *(RECT *)&v30[5] = SourceRect;
      *(RECT *)&v30[9] = SourceRect;
      *a6 = *(struct tagRECT *)(v9 + 652);
      DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe((DISPLAY_SOURCE *)v9, (const struct tagRECT *)&v30[1], a6);
    }
    v17 = v30[14];
    v18 = v30[13];
    DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
      (DISPLAY_SOURCE *)v9,
      (unsigned int)v8,
      PlaneAllocationUnsafe,
      v30[0],
      (const struct tagRECT *)&v30[1],
      (const struct tagRECT *)&v30[5],
      (const struct tagRECT *)&v30[9],
      (enum _D3DDDI_ROTATION)v30[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v30[14],
      ColorSpace);
    v28 = 0;
    v29.0 = 0;
    DXGDEVICE::CheckMultiPlaneOverlayInternal3(*((DXGDEVICE **)this + 2), a2, &v28, &v29);
    DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe((DISPLAY_SOURCE *)v9, (unsigned int)v8, v19, v20);
    if ( !v28 )
      return 0;
    v27 = ColorSpace;
    v22 = 1;
    LOBYTE(v21) = 1;
    DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
      (DISPLAY_SOURCE *)v9,
      (const struct tagRECT *)(unsigned int)v8,
      (const struct tagRECT *)PlaneAllocationUnsafe,
      v21,
      v30[0],
      (const struct tagRECT *)&v30[1],
      (const struct tagRECT *)&v30[5],
      (const struct tagRECT *)&v30[9],
      v18,
      v17,
      v27);
    if ( a5 )
    {
      DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe((DISPLAY_SOURCE *)v9, v23, v24, v25);
      LOBYTE(v26) = 1;
      DISPLAY_SOURCE::SetPostCompositionConfigUnsafe((DISPLAY_SOURCE *)v9, v26, (const struct tagRECT *)&v30[1], a6);
    }
    return v22;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = v7;
    *(_QWORD *)(v13 + 32) = v8;
    WdLogEvent5_WdError(v13);
    return 0;
  }
}
