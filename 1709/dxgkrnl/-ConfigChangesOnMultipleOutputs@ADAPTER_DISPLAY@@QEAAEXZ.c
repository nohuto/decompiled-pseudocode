/*
 * XREFs of ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C0173738
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B62C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0079478 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C00AEF74 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C01759C4 (-PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x1C0175ABC (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(struct _KTHREAD **this)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // r13d
  struct _KTHREAD *v5; // r15
  char v6; // bp
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r14
  DISPLAY_SOURCE *v10; // rax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  DISPLAY_SOURCE *v12; // rcx
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rcx
  struct _KTHREAD *v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdi
  const struct tagRECT *v18; // r10
  const struct tagRECT *v19; // r9
  __int64 v20; // r11
  unsigned int v21; // eax
  const struct tagRECT *v22; // rcx
  __int64 v23; // r11
  unsigned int v24; // r8d
  unsigned int v26; // [rsp+90h] [rbp+8h]
  struct _DISPLAY_PLANE_CONFIG *v27; // [rsp+98h] [rbp+10h]

  if ( this[51] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 9298LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = 0;
  v4 = 0;
  v26 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  while ( 2 )
  {
    v5 = this[14];
    v6 = 0;
    v7 = v4;
    v8 = 0LL;
    v9 = 3760LL * v4;
    v10 = (struct _KTHREAD *)((char *)v5 + v9);
    if ( !*(_DWORD *)((char *)v5 + v9 + 3740) )
      goto LABEL_10;
    while ( 1 )
    {
      if ( !*((_BYTE *)v10 + v8 + 2880) )
        goto LABEL_18;
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(v10, v8);
      v5 = this[14];
      v27 = LatestPlaneConfigInternal;
      if ( LatestPlaneConfigInternal )
        break;
      if ( (*((_DWORD *)v5 + 940 * v7 + 20 * (unsigned int)v8 + 726) & 1) != 0 )
        goto LABEL_8;
LABEL_18:
      v8 = (unsigned int)(v8 + 1);
      v10 = (struct _KTHREAD *)((char *)v5 + v9);
      if ( (unsigned int)v8 >= *(_DWORD *)((char *)v5 + v9 + 3740) )
        goto LABEL_9;
    }
    v16 = (unsigned int)v8 + 47 * v7;
    v17 = 80 * v16;
    v18 = (const struct tagRECT *)((char *)v5 + 80 * v16 + 2924);
    v19 = (const struct tagRECT *)((char *)v5 + 80 * v16 + 2908);
    v20 = 5 * (v16 + 37);
    v21 = *((_DWORD *)v5 + 20 * v16 + 726);
    v22 = (const struct tagRECT *)((char *)v5 + 80 * v16 + 2940);
    v23 = 2 * v20;
    v24 = (v21 >> 4) & 1 | 2;
    if ( (v21 & 0x20) == 0 )
      v24 = (v21 >> 4) & 1;
    if ( PlaneConfigsMatch(
           v27,
           *((_BYTE *)v5 + v17 + 2904) & 1,
           v24,
           v19,
           v18,
           v22,
           *(enum _D3DDDI_ROTATION *)((char *)v5 + v17 + 2956),
           (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)((*(_DWORD *)((char *)v5 + v17 + 2904) >> 2) & 1),
           *((enum D3DDDI_COLOR_SPACE_TYPE *)v5 + 2 * v23),
           *(_DWORD *)((char *)v5 + v17 + 2964)) )
    {
      v7 = v4;
      goto LABEL_18;
    }
LABEL_8:
    v6 = 1;
LABEL_9:
    v3 = v26;
LABEL_10:
    v12 = (struct _KTHREAD *)((char *)this[14] + v9);
    if ( !*((_BYTE *)v12 + 3696) )
      goto LABEL_22;
    if ( !v6 )
    {
      LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(v12);
      v14 = this[14];
      if ( !LatestPostCompositionConfigInternal )
      {
        v15 = *((_BYTE *)v14 + v9 + 3700) == 0;
        goto LABEL_23;
      }
      if ( PostCompositionConfigsMatch(
             LatestPostCompositionConfigInternal,
             *((_BYTE *)v14 + v9 + 3700),
             (const struct tagRECT *)((char *)v14 + v9 + 3704),
             (const struct tagRECT *)((char *)v14 + v9 + 3720)) )
      {
        goto LABEL_25;
      }
      v6 = 1;
LABEL_22:
      v15 = v6 == 0;
LABEL_23:
      if ( v15 )
        goto LABEL_25;
    }
    v26 = ++v3;
    if ( v3 <= 1 )
    {
LABEL_25:
      if ( ++v4 >= *((_DWORD *)this + 20) )
        return 0;
      continue;
    }
    return 1;
  }
}
