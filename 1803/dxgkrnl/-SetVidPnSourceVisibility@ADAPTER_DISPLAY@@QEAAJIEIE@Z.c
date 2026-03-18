/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4
 * Callers:
 *     ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z @ 0x1C002E170 (-ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C010DA38 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C010F350 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0152D80 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0153734 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01560D4 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C0157CFC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01D6024 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C0214AB0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021E594 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0019C48 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019CA4 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0019D28 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001A1C0 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0028138 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00E1408 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1C010C754 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C010CA28 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0153150 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0159E20 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        BOOLEAN a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  char v9; // bl
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // r14
  char v13; // r9
  ADAPTER_RENDER *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r12d
  __int64 v23; // rcx
  DXGADAPTER *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // [rsp+30h] [rbp-48h]
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v42; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v43; // [rsp+40h] [rbp-38h]
  ADAPTER_RENDER *v44[2]; // [rsp+48h] [rbp-30h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v45; // [rsp+58h] [rbp-20h] BYREF

  v5 = a2;
  v6 = 3760LL * a2;
  *(_QWORD *)&v45.VidPnSourceId = 0LL;
  *(_QWORD *)&v45.Y = 0LL;
  v42 = 0LL;
  v9 = *(_BYTE *)(v6 + *((_QWORD *)this + 14) + 721);
  v40 = v9;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v30 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v30 + 24) = 1670LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( a3 && !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v5) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v31 + 24) = 1671LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v11 = *((_QWORD *)this + 2);
  v45.VidPnSourceId = v5;
  v42.VidPnSourceId = v5;
  v42.Visible = a3;
  v12 = 0;
  v43 = (unsigned __int8)v5 | (v9 != 0 ? 0x80000000 : 0) | (a3 != 0 ? 0x40000000 : 0);
  v45.Flags.Value ^= (*(_BYTE *)&v45.Flags.0 ^ a3) & 1;
  if ( !a5 )
  {
    if ( *(_DWORD *)(v11 + 276) == 32902 && *(int *)(v11 + 2104) < 4864 )
    {
      v13 = 0;
    }
    else if ( DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v11) )
    {
      v12 = v13;
      goto LABEL_11;
    }
    v12 = 0;
    goto LABEL_11;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v33 + 24) = 1692LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v11 = *((_QWORD *)this + 2);
  v13 = 0;
LABEL_11:
  v14 = *(ADAPTER_RENDER **)(v11 + 2464);
  LODWORD(v44[0]) = 0;
  v44[1] = v14;
  if ( v14 && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v34 + 24) = 1720LL;
      WdLogEvent5_WdAssertion(v34);
    }
    v16 = *((_QWORD *)this + 2);
    if ( v12 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v16 + 2464), 6, v5, 1);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v16 + 2464), 0, 1 << v5, 0, 1 << v5);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v44, 1 << v5);
    }
  }
  if ( !a3 )
  {
    v25 = (DXGADAPTER *)*((_QWORD *)this + 2);
    if ( *((_BYTE *)v25 + 2410) )
    {
      if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v25) )
        ADAPTER_DISPLAY::DisableMPOPlanes(this, v5, 0);
    }
    else
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v5);
    }
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v45, v26) < 0 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v39 + 24) = 1800LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v29 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v42, v28);
    v19 = v29;
    if ( v29 >= 0 )
      goto LABEL_20;
LABEL_37:
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v35[3] = v5;
    v35[4] = *((_QWORD *)this + 2);
    v35[5] = v19;
    WdLogEvent5_WdError(v35);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)this, v5, 1);
    v22 = a4;
    goto LABEL_21;
  }
  v17 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v42, v11);
  v19 = v17;
  if ( v17 < 0 )
    goto LABEL_37;
  if ( ADAPTER_DISPLAY::IsPointerVisible(this, v5) )
  {
    v36 = *((_QWORD *)this + 14);
    v45.X = *(_DWORD *)(v6 + v36 + 728);
    v45.Y = *(_DWORD *)(v6 + v36 + 732);
    LODWORD(v19) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v45, v20);
    if ( (int)v19 < 0 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37);
      *(_QWORD *)(v38 + 24) = 1775LL;
      WdLogEvent5_WdAssertion(v38);
    }
  }
LABEL_20:
  LOBYTE(v21) = a3;
  v22 = a4;
  LOBYTE(v20) = v40;
  DisplayScenarioJournalVidPnSourceVisibility(
    *(_QWORD *)(*((_QWORD *)this + 2) + 268LL),
    (unsigned int)v5,
    v20,
    v21,
    a4);
LABEL_21:
  DxgkLogCodePointPacket(0x44u, v43, v22, v19, *(_QWORD *)(*((_QWORD *)this + 2) + 268LL));
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 2464LL);
  if ( v23 && v12 )
    ADAPTER_RENDER::FlushScheduler(v23, 7, v5, 1);
  CVidSchSuspendResume::Resume(v44);
  return (unsigned int)v19;
}
