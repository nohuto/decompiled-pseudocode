/*
 * XREFs of ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@HI@Z @ 0x1C01BA878
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0005208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9330 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00E9360 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C0172EE0 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        const struct tagRECT **a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v7; // r14
  DISPLAY_SOURCE *v9; // rsi
  __int64 v10; // rdx
  __int64 i; // rdi
  D3DKMT_MULTIPLANE_OVERLAY3 *v12; // rdx
  unsigned int *p_Flags; // r9
  __int64 LayerIndex; // r10
  const struct tagRECT *v15; // rdx
  const struct tagRECT *v16; // r8
  const struct tagRECT *v17; // rcx
  unsigned int v18; // eax
  const struct tagRECT *v19; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // r8
  struct tagRECT *p_DstRect; // r9
  struct tagRECT *p_SrcRect; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  enum _D3DDDI_ROTATION v30; // [rsp+40h] [rbp-40h]
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v31; // [rsp+48h] [rbp-38h]
  enum D3DDDI_COLOR_SPACE_TYPE v32; // [rsp+50h] [rbp-30h]
  struct tagRECT v33; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v34[16]; // [rsp+70h] [rbp-10h] BYREF

  v7 = (int)a4;
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v34,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL) + 400LL),
    (__int64)a3,
    a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
  v9 = (DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL) + 112LL)
                        + 3208LL * a2->VidPnSourceId);
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(v9);
  for ( i = 0LL; (unsigned int)i < a2->PresentPlaneCount; i = (unsigned int)(i + 1) )
  {
    v12 = a2->ppPresentPlanes[i];
    if ( (v12->InputFlags.Value & 1) != 0 )
    {
      p_Flags = &v12->pPlaneAttributes->Flags;
      LayerIndex = v12->LayerIndex;
      v15 = (const struct tagRECT *)(p_Flags + 5);
      v32 = p_Flags[18];
      v16 = (const struct tagRECT *)(p_Flags + 1);
      v17 = (const struct tagRECT *)(p_Flags + 9);
      v31 = p_Flags[14];
      v30 = p_Flags[13];
      v18 = *p_Flags;
      LOBYTE(p_Flags) = 1;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        v9,
        (const struct tagRECT *)(unsigned int)LayerIndex,
        a3[LayerIndex],
        (__int64)p_Flags,
        v18,
        v16,
        v15,
        v17,
        v30,
        v31,
        v32);
    }
    else
    {
      v19 = (const struct tagRECT *)v12->LayerIndex;
      *(_QWORD *)&v33.left = 0LL;
      *(_QWORD *)&v33.right = 0LL;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        v9,
        v19,
        0LL,
        0LL,
        0,
        &v33,
        &v33,
        &v33,
        D3DDDI_ROTATION_IDENTITY,
        D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
        D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709);
    }
  }
  pPostComposition = a2->pPostComposition;
  if ( pPostComposition )
  {
    p_DstRect = &pPostComposition->DstRect;
    LOBYTE(v10) = 1;
    p_SrcRect = &pPostComposition->SrcRect;
  }
  else
  {
    p_DstRect = &v33;
    *(_QWORD *)&v33.left = 0LL;
    p_SrcRect = &v33;
    *(_QWORD *)&v33.right = 0LL;
    v10 = 0LL;
  }
  DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(v9, v10, p_SrcRect, p_DstRect);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v23, v24, v25);
  if ( (int)v7 > -1 )
    DXGDEVICE::SetDisplayedPrimary(
      *((DXGDEVICE **)this + 2),
      a2->VidPnSourceId,
      (const struct DXGALLOCATION *)a3[v7],
      a5,
      0);
  if ( v34[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v26, v27, v28);
  return 0LL;
}
