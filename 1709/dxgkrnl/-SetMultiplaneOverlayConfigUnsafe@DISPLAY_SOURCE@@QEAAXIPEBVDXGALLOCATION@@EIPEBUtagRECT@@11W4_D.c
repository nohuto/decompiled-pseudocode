/*
 * XREFs of ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00AF150
 * Callers:
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00ABF00 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C01CFC68 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C01D2E18 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0079478 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00AEFAC (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 */

void __fastcall DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        unsigned __int8 a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        char a14)
{
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v19; // rcx
  struct _DISPLAY_PLANE_CONFIG *v20; // rbx
  unsigned int v21; // r10d
  unsigned int v22; // ecx
  const struct tagRECT *v23; // r9
  const struct tagRECT *v24; // r8
  const struct tagRECT *v25; // rdx
  unsigned int v26; // ecx
  enum _D3DDDIFORMAT v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v28 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v28 + 24) = 8270LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( a4 && !a3 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v29 + 24) = 8271LL;
    WdLogEvent5_WdAssertion(v29);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, a2);
  v20 = LatestPlaneConfigInternal;
  if ( !LatestPlaneConfigInternal )
  {
LABEL_30:
    v21 = a5;
LABEL_31:
    v23 = a6;
LABEL_32:
    v24 = a7;
LABEL_33:
    v25 = a8;
    goto LABEL_34;
  }
  if ( !a4 )
  {
    if ( (*((_BYTE *)LatestPlaneConfigInternal + 8) & 1) == 0 )
      goto LABEL_26;
    goto LABEL_30;
  }
  v21 = a5;
  v22 = *((_DWORD *)LatestPlaneConfigInternal + 2);
  if ( ((v22 >> 4) & 1) != ((a5 & 1) != 0) || ((v22 >> 5) & 1) != ((a5 & 2) != 0) )
    goto LABEL_31;
  v23 = a6;
  if ( *((_DWORD *)LatestPlaneConfigInternal + 3) != a6->left
    || *((_DWORD *)LatestPlaneConfigInternal + 5) != a6->right
    || *((_DWORD *)LatestPlaneConfigInternal + 4) != a6->top
    || *((_DWORD *)LatestPlaneConfigInternal + 6) != a6->bottom )
  {
    goto LABEL_32;
  }
  v24 = a7;
  if ( *((_DWORD *)LatestPlaneConfigInternal + 7) != a7->left
    || *((_DWORD *)LatestPlaneConfigInternal + 9) != a7->right
    || *((_DWORD *)LatestPlaneConfigInternal + 8) != a7->top
    || *((_DWORD *)LatestPlaneConfigInternal + 10) != a7->bottom )
  {
    goto LABEL_33;
  }
  v25 = a8;
  if ( *((_DWORD *)LatestPlaneConfigInternal + 11) == a8->left
    && *((_DWORD *)LatestPlaneConfigInternal + 13) == a8->right
    && *((_DWORD *)LatestPlaneConfigInternal + 12) == a8->top
    && *((_DWORD *)LatestPlaneConfigInternal + 14) == a8->bottom
    && *((_DWORD *)LatestPlaneConfigInternal + 15) == a9 )
  {
    v19 = (v22 >> 2) & 1;
    if ( (_DWORD)v19 == (a10 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
      && *((_DWORD *)LatestPlaneConfigInternal + 16) == a11
      && *((_DWORD *)LatestPlaneConfigInternal + 17) == a12 )
    {
LABEL_26:
      if ( *((_DWORD *)this + 934) <= a2 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v19);
        *(_QWORD *)(v30 + 24) = 8279LL;
        WdLogEvent5_WdAssertion(v30);
      }
      v26 = *((_DWORD *)v20 + 2) & 0xFFFFFFFE;
      *(_QWORD *)v20 = a3;
      *((_DWORD *)v20 + 2) = (2 * (a4 & 1)) | a4 & 1 | v26 & 0xFFFFFFFD;
      return;
    }
  }
LABEL_34:
  v27 = a13;
  if ( a13 == (D3DDDIFMT_FORCE_UINT|0x80000000) && LatestPlaneConfigInternal )
    v27 = *((_DWORD *)LatestPlaneConfigInternal + 18);
  DISPLAY_SOURCE::CreateNewPlaneConfig(this, a2, a3, a4, v21, v23, v24, v25, a9, a10, a11, a12, v27, a14);
  if ( a2 >= *((_DWORD *)this + 934) )
    *((_DWORD *)this + 934) = a2 + 1;
  if ( a2 && a4 )
    *((_BYTE *)this + 3744) = 1;
}
