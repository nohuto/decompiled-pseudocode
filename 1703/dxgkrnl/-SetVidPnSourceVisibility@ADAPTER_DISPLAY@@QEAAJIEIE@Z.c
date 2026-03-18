/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z @ 0x1C000FBB0 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     DmmDisablePathsFromVidPnSource @ 0x1C009A290 (DmmDisablePathsFromVidPnSource.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E763C (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E7A8C (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01016C0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104BA4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01722B0 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01B5A70 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000B558 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C00E5FF8 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E61C8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6770 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0170A54 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  BOOLEAN v7; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // [rsp+30h] [rbp-38h]
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v47; // [rsp+38h] [rbp-30h] BYREF
  int v48; // [rsp+40h] [rbp-28h]
  struct _DXGKARG_SETPOINTERPOSITION v49; // [rsp+48h] [rbp-20h] BYREF

  v5 = (unsigned int)a2;
  v6 = 3208LL * (unsigned int)a2;
  v7 = a3;
  *(_QWORD *)&v49.VidPnSourceId = 0LL;
  *(_QWORD *)&v49.Y = 0LL;
  v47 = 0LL;
  v9 = *((_QWORD *)this + 14);
  v48 = a4;
  v46 = *(_BYTE *)(v6 + v9 + 721);
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v36 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v36 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v36);
  }
  if ( v7 && !ADAPTER_DISPLAY::IsVidPnSourceActive(this, (unsigned int)v5, a3, a4) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v31, v30, a3, a4);
    *(_QWORD *)(v37 + 24) = 1215LL;
    WdLogEvent5_WdAssertion(v37);
  }
  v49.VidPnSourceId = v5;
  v47.VidPnSourceId = v5;
  v47.Visible = v7;
  v49.Flags.Value ^= (*(_BYTE *)&v49.Flags.0 ^ v7) & 1;
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v39, v38, a3, a4);
      *(_QWORD *)(v40 + 24) = 1230LL;
      WdLogEvent5_WdAssertion(v40);
    }
    v11 = 0;
  }
  else
  {
    v10 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v10 + 276) != 32902 || (v11 = 0, *(int *)(v10 + 1944) >= 4864) )
      v11 = 1;
  }
  v12 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v12 + 2288) && v11 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v12) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v41 + 24) = 1254LL;
      WdLogEvent5_WdAssertion(v41);
    }
    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 2288LL), 6, v5, 1);
  }
  if ( v7 )
  {
    v32 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v47, a3);
    v27 = v32;
    if ( v32 >= 0 )
    {
      if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
        *(_QWORD *)(v43 + 24) = 4614LL;
        WdLogEvent5_WdAssertion(v43);
      }
      v33 = *((_QWORD *)this + 14);
      if ( *(_BYTE *)(v6 + v33 + 724) )
      {
        v49.X = *(_DWORD *)(v6 + v33 + 728);
        v49.Y = *(_DWORD *)(v6 + v33 + 732);
        LODWORD(v27) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v49, v25);
        if ( (int)v27 < 0 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v35, v34, v25, v26);
          *(_QWORD *)(v44 + 24) = 1289LL;
          WdLogEvent5_WdAssertion(v44);
        }
      }
      goto LABEL_20;
    }
LABEL_38:
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v42[3] = v5;
    v42[4] = *((_QWORD *)this + 2);
    v42[5] = v27;
    WdLogEvent5_WdError(v42);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)this, v5, 1);
    goto LABEL_21;
  }
  v17 = *(_QWORD *)(v6 + *((_QWORD *)this + 14) + 688);
  if ( v17 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 2242LL) )
    {
      ADAPTER_DISPLAY::DisableMPOPlanes(this, v5);
    }
    else
    {
      a3 = *(_QWORD *)(v17 + 1800);
      if ( a3 == *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(a3 + 2280), (unsigned int)v5, a3, a4);
    }
  }
  if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v49, a3) < 0 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    *(_QWORD *)(v45 + 24) = 1320LL;
    WdLogEvent5_WdAssertion(v45);
  }
  v22 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v47, v20);
  v27 = v22;
  if ( v22 < 0 )
    goto LABEL_38;
LABEL_20:
  LOBYTE(v26) = v7;
  LOBYTE(v25) = v46;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 268LL),
    (unsigned int)v5,
    v25,
    v26,
    v48);
LABEL_21:
  v28 = *(_QWORD *)(*((_QWORD *)this + 2) + 2288LL);
  if ( v28 && v11 )
    ADAPTER_RENDER::FlushScheduler(v28, 7, v5, 1);
  return (unsigned int)v27;
}
