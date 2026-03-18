/*
 * XREFs of ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C015104C
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01888EC (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C010DCD8 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C010DD10 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0150DE4 (-AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C0155F74 (-PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x1C0156070 (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 */

bool __fastcall ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(struct _KTHREAD **this)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // r13d
  struct _KTHREAD *v5; // rdi
  bool v6; // si
  __int64 v7; // r15
  __int64 v8; // r12
  struct _KTHREAD *v9; // rbp
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v11; // r9
  char *v12; // r8
  unsigned int v13; // ecx
  const struct tagRECT *v14; // rdx
  __int64 v15; // rax
  int v16; // ebx
  const struct tagRECT *v17; // r9
  unsigned int v18; // r11d
  const struct tagRECT *v19; // rcx
  unsigned int v20; // r8d
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v21; // r11d
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  unsigned __int8 v23; // dl
  int v24; // ecx
  unsigned int v25; // eax
  struct _DISPLAY_PLANE_CONFIG *v27; // [rsp+50h] [rbp-58h]
  unsigned __int8 v28; // [rsp+B0h] [rbp+8h]
  int v29; // [rsp+B8h] [rbp+10h]
  unsigned int v30; // [rsp+C0h] [rbp+18h]
  char *v31; // [rsp+C8h] [rbp+20h]

  if ( this[51] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 9321LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = 0;
  v4 = 0;
  v29 = 0;
  v30 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  v5 = this[14];
  do
  {
    v6 = 0;
    v7 = 3760LL * v4;
    v8 = 0LL;
    v9 = v5;
    if ( !*(_DWORD *)((char *)v5 + v7 + 3740) )
      goto LABEL_15;
    while ( 1 )
    {
      if ( !*((_BYTE *)v5 + v7 + v8 + 2880) )
        goto LABEL_13;
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((struct _KTHREAD *)((char *)v5 + v7), v8);
      v9 = this[14];
      v27 = LatestPlaneConfigInternal;
      v11 = 47LL * v4;
      v12 = (char *)v9 + 80 * v11 + 80 * v8;
      v31 = v12;
      v13 = *((_DWORD *)v12 + 726);
      v28 = v13;
      if ( LatestPlaneConfigInternal )
        break;
      if ( (v13 & 1) != 0 )
        goto LABEL_19;
      v5 = this[14];
LABEL_13:
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)((char *)v5 + v7 + 3740) )
      {
        v3 = v30;
        v9 = v5;
        goto LABEL_15;
      }
    }
    v14 = (const struct tagRECT *)(v12 + 2924);
    v15 = v11 + 37 + (unsigned int)v8;
    v16 = (v13 >> 4) & 1;
    v17 = (const struct tagRECT *)(v12 + 2908);
    v18 = *((_DWORD *)v12 + 726);
    v5 = this[14];
    v19 = (const struct tagRECT *)(v12 + 2940);
    v20 = v16 | 2;
    v21 = (v18 >> 2) & 1;
    if ( (v28 & 0x20) == 0 )
      v20 = v16;
    if ( PlaneConfigsMatch(
           v27,
           v28 & 1,
           v20,
           v17,
           v14,
           v19,
           *((enum _D3DDDI_ROTATION *)v31 + 739),
           v21,
           *((enum D3DDDI_COLOR_SPACE_TYPE *)v9 + 20 * v15),
           *((_DWORD *)v31 + 741)) )
    {
      goto LABEL_13;
    }
LABEL_19:
    v3 = v30;
    v6 = 1;
LABEL_15:
    v5 = v9;
    if ( !*((_BYTE *)v9 + v7 + 3696) )
    {
LABEL_22:
      if ( !v6 )
        goto LABEL_24;
LABEL_23:
      v24 = (1 << v4) | v29;
      v29 = v24;
      goto LABEL_25;
    }
    if ( v6 )
      goto LABEL_23;
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v9 + v7));
    v5 = this[14];
    v23 = *((_BYTE *)v5 + v7 + 3700);
    if ( !LatestPostCompositionConfigInternal )
    {
      v6 = v23 != 0;
      goto LABEL_22;
    }
    if ( !PostCompositionConfigsMatch(
            LatestPostCompositionConfigInternal,
            v23,
            (const struct tagRECT *)((char *)v5 + v7 + 3704),
            (const struct tagRECT *)((char *)v5 + v7 + 3720)) )
    {
      v6 = 1;
      goto LABEL_22;
    }
LABEL_24:
    v24 = v29;
LABEL_25:
    v25 = v3 + 1;
    if ( !v6 )
      v25 = v3;
    ++v4;
    v3 = v25;
    v30 = v25;
  }
  while ( v4 < *((_DWORD *)this + 20) );
  return v25 > 1 && !ADAPTER_DISPLAY::AreSourcesSyncLocked((ADAPTER_DISPLAY *)this, v24);
}
