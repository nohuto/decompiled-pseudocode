/*
 * XREFs of ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIPEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAVDXGALLOCATION@@0PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0171324
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185D44 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C0171960 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int *a3,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a4,
        struct DXGALLOCATION **a5,
        unsigned int *a6,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *a7)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v7; // ebx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r14d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v12; // r13d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v13; // rsi
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rax
  UINT v16; // r15d
  UINT v17; // r12d
  UINT v18; // eax
  unsigned int v19; // r13d
  __int64 v20; // rsi
  __int64 v21; // r10
  __int64 v22; // r9
  struct _KTHREAD *v23; // rdx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  struct _KTHREAD *v27; // rdx
  __int64 v28; // rcx
  RECT v29; // xmm1
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v31; // rdx
  RECT v32; // xmm1
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v33; // [rsp+20h] [rbp-68h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+30h] [rbp-58h]
  unsigned int v36; // [rsp+90h] [rbp+8h]
  unsigned int v37; // [rsp+98h] [rbp+10h]
  unsigned int *v38; // [rsp+A0h] [rbp+18h]

  v38 = a3;
  v7 = a2;
  if ( this[51] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 8337LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v37 = 0;
  v10 = 0;
  v36 = 0;
  v11 = 0;
  if ( v7 == -1 )
  {
    v12 = *((_DWORD *)this + 20);
    v7 = 0;
  }
  else
  {
    v12 = v7 + 1;
  }
  v33 = v12;
  if ( v7 < v12 )
  {
    v13 = a7;
    v14 = 3208LL * v7;
    while ( 1 )
    {
      v15 = this[14];
      if ( *((_BYTE *)v15 + v14 + 722) )
      {
        v16 = *(_DWORD *)((char *)v15 + v14 + 3192);
        v17 = 0;
        v18 = *(_DWORD *)((char *)v15 + v14 + 3196);
        if ( v18 > v16 )
          v16 = v18;
        if ( v16 )
        {
          v19 = v36;
          v20 = 0LL;
          v21 = 0LL;
          v34 = 0LL;
          v22 = v14;
          v35 = v14;
          while ( 1 )
          {
            v23 = this[14];
            if ( *((_BYTE *)v23 + v14 + v20 + 2504) )
            {
              if ( *((_BYTE *)v23 + v22 + 2524) )
              {
                a3 = (unsigned int *)((char *)v23 + 3208 * v7 + v21 + 2512);
LABEL_18:
                if ( a3 )
                {
                  v25 = v19++;
                  a5[v25] = *(struct DXGALLOCATION **)a3;
                  v25 *= 32LL;
                  v26 = *(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25);
                  *(UINT *)((char *)&a4->LayerIndex + v25) = v17;
                  *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&a4->VidPnSourceId + v25) = v7;
                  *v26 = a3[2];
                  (*(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25))->SrcRect = (RECT)*((_OWORD *)a3 + 1);
                  (*(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25))->DstRect = (RECT)*((_OWORD *)a3 + 2);
                  (*(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25))->ClipRect = (RECT)*((_OWORD *)a3 + 3);
                  (*(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25))->Rotation = a3[16];
                  (*(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25))->Blend = a3[17];
                  (*(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25))->DirtyRectCount = 0;
                  (*(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25))->pDirtyRects = 0LL;
                  (*(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25))->ColorSpace = a3[18];
                  (*(D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)((char *)&a4->pPlaneAttributes + v25))->StretchQuality = DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH;
                }
              }
            }
            else
            {
              LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                            (struct _KTHREAD *)((char *)v23 + 3208 * v7),
                                            v17,
                                            (__int64)a3,
                                            v22);
              v22 = v35;
              v21 = v34;
              a3 = (unsigned int *)LatestPlaneConfigInternal;
              if ( LatestPlaneConfigInternal && *((_BYTE *)LatestPlaneConfigInternal + 12) )
                goto LABEL_18;
            }
            v21 += 80LL;
            v22 += 80LL;
            ++v17;
            v34 = v21;
            ++v20;
            v35 = v22;
            if ( v17 >= v16 )
            {
              v13 = a7;
              v11 = v37;
              v36 = v19;
              v12 = v33;
              break;
            }
          }
        }
        v27 = this[14];
        if ( *((_BYTE *)v27 + v14 + 3152) && *((_BYTE *)v27 + v14 + 3156) )
        {
          v28 = v11;
          v13[v28].VidPnSourceId = v7;
          v13[v28].PostComposition.Flags.Value = 0;
          v13[v28].PostComposition.SrcRect = *(RECT *)((char *)this[14] + v14 + 3160);
          v29 = *(RECT *)((char *)this[14] + v14 + 3176);
          v13[v28].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
          v13[v28].PostComposition.DstRect = v29;
        }
        else
        {
          LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v27 + 3208 * v7));
          if ( !LatestPostCompositionConfigInternal || !*(_BYTE *)LatestPostCompositionConfigInternal )
            goto LABEL_29;
          v31 = v11;
          v13[v31].VidPnSourceId = v7;
          v13[v31].PostComposition.Flags.Value = 0;
          v13[v31].PostComposition.SrcRect = *(RECT *)((char *)LatestPostCompositionConfigInternal + 4);
          v32 = *(RECT *)((char *)LatestPostCompositionConfigInternal + 20);
          v13[v31].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
          v13[v31].PostComposition.DstRect = v32;
        }
        v37 = ++v11;
      }
LABEL_29:
      ++v7;
      v14 += 3208LL;
      if ( v7 >= v12 )
      {
        v10 = v36;
        break;
      }
    }
  }
  *v38 = v10;
  *a6 = v11;
}
