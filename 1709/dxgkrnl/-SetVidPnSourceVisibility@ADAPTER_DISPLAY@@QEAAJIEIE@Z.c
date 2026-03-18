/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z @ 0x1C00114A0 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C007EA24 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00ACD28 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00AD1DC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00AE718 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00BBD0C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C010240C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0175B20 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F2B14 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0002030 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007718 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C000EF94 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0020D88 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00791B8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C00AB3CC (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00AB678 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AB8E4 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01774BC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  BOOLEAN v7; // r15
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  DXGADAPTER *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // [rsp+30h] [rbp-48h]
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v39; // [rsp+38h] [rbp-40h] BYREF
  int v40; // [rsp+40h] [rbp-38h]
  ADAPTER_RENDER *v41; // [rsp+48h] [rbp-30h] BYREF
  __int64 v42; // [rsp+50h] [rbp-28h]
  struct _DXGKARG_SETPOINTERPOSITION v43; // [rsp+58h] [rbp-20h] BYREF

  v5 = a2;
  v6 = 3760LL * a2;
  v7 = a3;
  *(_QWORD *)&v43.VidPnSourceId = 0LL;
  *(_QWORD *)&v43.Y = 0LL;
  v39 = 0LL;
  v9 = *((_QWORD *)this + 14);
  v40 = a4;
  v38 = *(_BYTE *)(v6 + v9 + 721);
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v30 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v30 + 24) = 1669LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( v7 && !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v5) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v31 + 24) = 1670LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v10 = 0;
  v43.VidPnSourceId = v5;
  v39.VidPnSourceId = v5;
  v39.Visible = v7;
  v11 = *((_QWORD *)this + 2);
  v43.Flags.Value ^= (*(_BYTE *)&v43.Flags.0 ^ v7) & 1;
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v32 + 24) = 1686LL;
      WdLogEvent5_WdAssertion(v32);
    }
    LOBYTE(a3) = 0;
  }
  else
  {
    if ( *(_DWORD *)(v11 + 276) == 32902 && *(int *)(v11 + 1968) < 4864 )
    {
      LOBYTE(a3) = 0;
      goto LABEL_38;
    }
    if ( !DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v11) )
    {
LABEL_38:
      v10 = 0;
      goto LABEL_8;
    }
    v10 = a3;
  }
LABEL_8:
  v12 = *((_QWORD *)this + 2);
  LODWORD(v41) = 0;
  v42 = *(_QWORD *)(v12 + 2312);
  if ( v42 && (_BYTE)a3 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v12) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v33 + 24) = 1714LL;
      WdLogEvent5_WdAssertion(v33);
    }
    if ( v10 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 2312LL), 6, v5, 1);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2312LL),
        0,
        1 << v5,
        0,
        1 << v5);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)&v41, 1 << v5);
    }
  }
  if ( v7 )
  {
    v26 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v39, a3);
    v22 = v26;
    if ( v26 >= 0 )
    {
      if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v19);
        *(_QWORD *)(v35 + 24) = 4781LL;
        WdLogEvent5_WdAssertion(v35);
      }
      v27 = *((_QWORD *)this + 14);
      if ( *(_BYTE *)(v6 + v27 + 724) )
      {
        v43.X = *(_DWORD *)(v6 + v27 + 728);
        v43.Y = *(_DWORD *)(v6 + v27 + 732);
        LODWORD(v22) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v43, v20);
        if ( (int)v22 < 0 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v36 + 24) = 1769LL;
          WdLogEvent5_WdAssertion(v36);
        }
      }
      goto LABEL_20;
    }
LABEL_40:
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v34[3] = v5;
    v34[4] = *((_QWORD *)this + 2);
    v34[5] = v22;
    WdLogEvent5_WdError(v34);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)this, v5, 1);
    goto LABEL_21;
  }
  v14 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( *((_BYTE *)v14 + 2266) )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v14) )
      ADAPTER_DISPLAY::DisableMPOPlanes(this, v5, 0);
  }
  else
  {
    ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v5);
  }
  if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v43, v15) < 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v37 + 24) = 1794LL;
    WdLogEvent5_WdAssertion(v37);
  }
  v18 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v39, v17);
  v22 = v18;
  if ( v18 < 0 )
    goto LABEL_40;
LABEL_20:
  LOBYTE(v21) = v7;
  LOBYTE(v20) = v38;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 268LL),
    (unsigned int)v5,
    v20,
    v21,
    v40);
LABEL_21:
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 2312LL);
  if ( v23 && v10 )
    ADAPTER_RENDER::FlushScheduler(v23, 7, v5, 1);
  CVidSchSuspendResume::Resume(&v41);
  return (unsigned int)v22;
}
