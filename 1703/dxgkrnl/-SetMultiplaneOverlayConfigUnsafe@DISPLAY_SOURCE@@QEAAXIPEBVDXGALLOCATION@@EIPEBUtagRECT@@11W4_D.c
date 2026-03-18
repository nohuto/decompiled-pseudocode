/*
 * XREFs of ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00E9360
 * Callers:
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00E68B0 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@HI@Z @ 0x1C01BA878 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00E9224 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 */

void __fastcall DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        DISPLAY_SOURCE *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        __int64 a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11)
{
  unsigned __int8 v11; // si
  const struct DXGALLOCATION *v12; // r14
  __int64 v13; // rbp
  __int64 v15; // rbx
  const struct tagRECT *v16; // rcx
  char *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v11 = a4;
  v12 = (const struct DXGALLOCATION *)a3;
  v13 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 7527LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( v11 && !v12 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 7528LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( (unsigned int)v13 >= *((_DWORD *)this + 798) )
    goto LABEL_30;
  v15 = 168 * v13;
  if ( *((_DWORD *)this + 42 * v13 + 270) == -1 )
  {
    if ( *(_DWORD *)((char *)this + v15 + 1084) != -1 )
    {
      v20 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v20 + 24) = 7370LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *(_DWORD *)((char *)this + v15 + 1080) == -1 )
      goto LABEL_30;
  }
  _mm_lfence();
  v16 = (const struct tagRECT *)(v15 + 80LL * *(int *)((char *)this + v15 + 1080));
  v17 = (char *)this + (_QWORD)v16 + 1088;
  if ( !v17 )
  {
LABEL_30:
    a3 = a6;
    LODWORD(a4) = a5;
LABEL_31:
    a2 = a7;
LABEL_32:
    v16 = a8;
    goto LABEL_33;
  }
  if ( !v11 )
  {
    if ( !v17[12] )
      goto LABEL_26;
    goto LABEL_30;
  }
  a4 = a5;
  a3 = a6;
  if ( *((_DWORD *)v17 + 2) != a5
    || *((_DWORD *)v17 + 4) != a6->left
    || *((_DWORD *)v17 + 6) != a6->right
    || *((_DWORD *)v17 + 5) != a6->top
    || *((_DWORD *)v17 + 7) != a6->bottom )
  {
    goto LABEL_31;
  }
  a2 = a7;
  if ( *((_DWORD *)v17 + 8) != a7->left
    || *((_DWORD *)v17 + 10) != a7->right
    || *((_DWORD *)v17 + 9) != a7->top
    || *((_DWORD *)v17 + 11) != a7->bottom )
  {
    goto LABEL_32;
  }
  v16 = a8;
  if ( *((_DWORD *)v17 + 12) == a8->left
    && *((_DWORD *)v17 + 14) == a8->right
    && *((_DWORD *)v17 + 13) == a8->top
    && *((_DWORD *)v17 + 15) == a8->bottom
    && *((_DWORD *)v17 + 16) == a9
    && *((_DWORD *)v17 + 17) == a10
    && *((_DWORD *)v17 + 18) == a11 )
  {
LABEL_26:
    if ( *((_DWORD *)this + 798) <= (unsigned int)v13 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v16, a2, a3, a4);
      *(_QWORD *)(v21 + 24) = 7536LL;
      WdLogEvent5_WdAssertion(v21);
    }
    *(_QWORD *)v17 = v12;
    v17[12] = v11;
    return;
  }
LABEL_33:
  DISPLAY_SOURCE::CreateNewPlaneConfig(this, (unsigned int)v13, v12, v11, a4, a3, a2, v16, a9, a10, a11);
  if ( (unsigned int)v13 >= *((_DWORD *)this + 798) )
    *((_DWORD *)this + 798) = v13 + 1;
  if ( (_DWORD)v13 && v11 )
    *((_BYTE *)this + 3200) = 1;
}
