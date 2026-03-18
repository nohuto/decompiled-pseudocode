/*
 * XREFs of ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C0170090
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185D44 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C0171960 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C017219C (-PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x1C017224C (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  int v6; // r12d
  unsigned int v7; // r14d
  char v8; // si
  __int64 v9; // rbp
  __int64 v10; // rdi
  _DWORD *v11; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // r13
  DISPLAY_SOURCE *v13; // rcx
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rcx
  struct _KTHREAD *v15; // rax
  bool v16; // zf
  struct _KTHREAD *v17; // r10
  __int64 v18; // r11

  if ( this[51] != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 8448LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = 0;
  v7 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  while ( 2 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = 3208LL * v7;
    v11 = (_DWORD *)((char *)this[14] + v10);
    if ( !v11[799] )
      goto LABEL_9;
    while ( 1 )
    {
      if ( !*((_BYTE *)v11 + v9 + 2504) )
        goto LABEL_14;
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                    (DISPLAY_SOURCE *)v11,
                                    (unsigned int)v9,
                                    a3,
                                    a4);
      if ( LatestPlaneConfigInternal )
        break;
      if ( *((_BYTE *)this[14] + 80 * v9 + v10 + 2524) )
        goto LABEL_8;
LABEL_14:
      v9 = (unsigned int)(v9 + 1);
      v11 = (_DWORD *)((char *)this[14] + v10);
      if ( (unsigned int)v9 >= v11[799] )
        goto LABEL_9;
    }
    v17 = this[14];
    v18 = v10 + 80 * v9;
    if ( PlaneConfigsMatch(
           LatestPlaneConfigInternal,
           *((_BYTE *)v17 + v18 + 2524),
           *(_DWORD *)((char *)v17 + v18 + 2520),
           (const struct tagRECT *)((char *)v17 + v18 + 2528),
           (const struct tagRECT *)((char *)v17 + v18 + 2544),
           (const struct tagRECT *)((char *)v17 + v18 + 2560),
           *(enum _D3DDDI_ROTATION *)((char *)v17 + v18 + 2576),
           *(enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *)((char *)v17 + v18 + 2580),
           *(enum D3DDDI_COLOR_SPACE_TYPE *)((char *)v17 + v18 + 2584)) )
    {
      goto LABEL_14;
    }
LABEL_8:
    v8 = 1;
LABEL_9:
    v13 = (struct _KTHREAD *)((char *)this[14] + v10);
    if ( !*((_BYTE *)v13 + 3152) )
      goto LABEL_18;
    if ( !v8 )
    {
      LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(v13);
      v15 = this[14];
      if ( !LatestPostCompositionConfigInternal )
      {
        v16 = *((_BYTE *)v15 + v10 + 3156) == 0;
        goto LABEL_19;
      }
      if ( PostCompositionConfigsMatch(
             LatestPostCompositionConfigInternal,
             *((_BYTE *)v15 + v10 + 3156),
             (const struct tagRECT *)((char *)v15 + v10 + 3160),
             (const struct tagRECT *)((char *)v15 + v10 + 3176)) )
      {
        goto LABEL_21;
      }
      v8 = 1;
LABEL_18:
      v16 = v8 == 0;
LABEL_19:
      if ( v16 )
        goto LABEL_21;
    }
    if ( (unsigned int)++v6 <= 1 )
    {
LABEL_21:
      if ( ++v7 >= *((_DWORD *)this + 20) )
        return 0;
      continue;
    }
    return 1;
  }
}
