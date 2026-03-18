/*
 * XREFs of ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0174ED8
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B62C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0079478 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C00AEF74 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@1@Z @ 0x1C01755C0 (-GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATI.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
        struct _KTHREAD **this,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        unsigned int *a5,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a6,
        unsigned int *a7,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *a8)
{
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // r12d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v13; // ebx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rsi
  struct _KTHREAD *v17; // rax
  UINT v18; // ecx
  UINT v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  UINT v22; // r12d
  struct _KTHREAD *v23; // rdx
  struct _DISPLAY_PLANE_CONFIG_STATE *v24; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v26; // rsi
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v28; // rax
  struct _KTHREAD *v29; // rdx
  __int64 v30; // rcx
  RECT v31; // xmm1
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v33; // rdx
  RECT v34; // xmm1
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v35; // [rsp+50h] [rbp-78h]
  UINT v36; // [rsp+54h] [rbp-74h]
  __int64 v37; // [rsp+60h] [rbp-68h]
  __int64 v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+70h] [rbp-58h]
  int v40; // [rsp+D0h] [rbp+8h]
  unsigned int v41; // [rsp+D8h] [rbp+10h]

  if ( this[51] != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 9181LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v40 = 0;
  v11 = 0;
  v41 = 0;
  v12 = 0;
  if ( a2 == -1 )
  {
    v13 = *((_DWORD *)this + 20);
    a2 = 0;
  }
  else
  {
    v13 = a2 + 1;
  }
  v35 = v13;
  if ( a2 < v13 )
  {
    v14 = a8;
    v15 = 3760LL * a2;
    v16 = 47LL * a2;
    v39 = v16;
    do
    {
      v17 = this[14];
      if ( *((_BYTE *)v17 + v15 + 722) )
      {
        v18 = *(_DWORD *)((char *)v17 + v15 + 3736);
        v19 = *(_DWORD *)((char *)v17 + v15 + 3740);
        if ( v19 > v18 )
          v18 = v19;
        v36 = v18;
        if ( v18 )
        {
          v20 = 0LL;
          v38 = 0LL;
          v21 = 0LL;
          v37 = 0LL;
          v22 = 0;
          while ( 1 )
          {
            v23 = this[14];
            if ( *((_BYTE *)v23 + v15 + v21 + 2880) )
            {
              if ( (*((_DWORD *)v23 + 20 * v16 + 20 * v20 + 726) & 1) != 0 )
              {
                v24 = (struct _KTHREAD *)((char *)v23 + 3760 * a2 + 80 * v21 + 2896);
LABEL_18:
                if ( v24 && v11 < a3 )
                {
                  a4[v11] = *(struct DXGALLOCATION **)v24;
                  v26 = v11;
                  pPlaneAttributes = a6[v26].pPlaneAttributes;
                  a6[v26].LayerIndex = v22;
                  a6[v26].VidPnSourceId = a2;
                  GetPlaneConfigState(
                    v24,
                    &pPlaneAttributes->Flags,
                    &pPlaneAttributes->SrcRect,
                    &pPlaneAttributes->DstRect,
                    &pPlaneAttributes->ClipRect,
                    &pPlaneAttributes->Rotation,
                    &pPlaneAttributes->Blend,
                    &pPlaneAttributes->ColorSpace,
                    &pPlaneAttributes->SDRWhiteLevel);
                  v11 = ++v40;
                  a6[v26].pPlaneAttributes->DirtyRectCount = 0;
                  a6[v26].pPlaneAttributes->pDirtyRects = 0LL;
                  v28 = a6[v26].pPlaneAttributes;
                  v21 = v37;
                  v16 = v39;
                  v28->StretchQuality = DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH;
                }
              }
            }
            else
            {
              LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                            (struct _KTHREAD *)((char *)v23 + 3760 * a2),
                                            v22);
              v21 = v37;
              v24 = LatestPlaneConfigInternal;
              if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
                goto LABEL_18;
            }
            ++v21;
            v20 = v38 + 1;
            v37 = v21;
            ++v22;
            ++v38;
            if ( v22 >= v36 )
            {
              v14 = a8;
              v12 = v41;
              v13 = v35;
              break;
            }
          }
        }
        v29 = this[14];
        if ( !*((_BYTE *)v29 + v15 + 3696) )
        {
          LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v29 + 3760 * a2));
          if ( !LatestPostCompositionConfigInternal || !*(_BYTE *)LatestPostCompositionConfigInternal )
            goto LABEL_30;
          v33 = v12;
          v14[v33].VidPnSourceId = a2;
          v14[v33].PostComposition.Flags.Value = 0;
          v14[v33].PostComposition.SrcRect = *(RECT *)((char *)LatestPostCompositionConfigInternal + 4);
          v34 = *(RECT *)((char *)LatestPostCompositionConfigInternal + 20);
          v14[v33].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
          v14[v33].PostComposition.DstRect = v34;
          goto LABEL_29;
        }
        if ( *((_BYTE *)v29 + v15 + 3700) )
        {
          v30 = v12;
          v14[v30].VidPnSourceId = a2;
          v14[v30].PostComposition.Flags.Value = 0;
          v14[v30].PostComposition.SrcRect = *(RECT *)((char *)this[14] + v15 + 3704);
          v31 = *(RECT *)((char *)this[14] + v15 + 3720);
          v14[v30].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
          v14[v30].PostComposition.DstRect = v31;
LABEL_29:
          v41 = ++v12;
        }
      }
LABEL_30:
      v16 += 47LL;
      ++a2;
      v15 += 3760LL;
      v39 = v16;
    }
    while ( a2 < v13 );
  }
  *a5 = v11;
  *a7 = v12;
}
