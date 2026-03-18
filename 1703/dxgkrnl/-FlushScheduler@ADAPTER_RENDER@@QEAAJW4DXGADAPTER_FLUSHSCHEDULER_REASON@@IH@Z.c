/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0096610 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C00A5E80 (DxgkFlushPresentHistory.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D34C4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D357C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E763C (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E7A8C (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01016C0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0104760 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104BA4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C016D678 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C016E57C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016F098 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C016F704 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0173FB4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0174230 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0174384 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0174658 (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01833D0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0196A04 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 *     ?VmBusSendFlushAdapter@DXGADAPTER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z @ 0x1C00302DC (-VmBusSendFlushAdapter@DXGADAPTER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00CD184 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C00CD204 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00D3750 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  DXGADAPTER *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  _DWORD *v52; // rax
  __int64 v53; // rax
  _DWORD *v54; // rax
  __int64 v55; // rax

  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER **)(a1 + 16);
  if ( *((_BYTE *)v8 + 186) )
    return DXGADAPTER::VmBusSendFlushAdapter((__int64)v8, a2, a3);
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(v8);
  if ( bTracingEnabled )
  {
    v9 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqq((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &Dxgk_FlushScheduler, v10);
  }
  v12 = WdLogNewEntry5_WdEvent(v9);
  *(_QWORD *)(v12 + 24) = v7;
  *(_QWORD *)(v12 + 32) = v5;
  WdLogEvent5_WdEvent(v12);
  v17 = 1;
  if ( (int)v7 > 6 )
  {
    if ( (_DWORD)v7 == 7 )
      goto LABEL_21;
    if ( (_DWORD)v7 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v53 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v16);
        *(_QWORD *)(v53 + 24) = 2448LL;
        WdLogEvent5_WdAssertion(v53);
      }
      if ( !IsDxgmms2 )
      {
        LODWORD(v54) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
        if ( (*v54 & 0x10) != 0 )
          return 0LL;
      }
      v21 = 1LL;
      LOBYTE(v16) = a4 != 0;
      goto LABEL_11;
    }
    v14 = (unsigned int)(v7 - 9);
    if ( (_DWORD)v7 != 9 )
    {
      if ( (_DWORD)v7 == 10 )
      {
LABEL_21:
        if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
        {
          v55 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
          *(_QWORD *)(v55 + 24) = 2443LL;
          WdLogEvent5_WdAssertion(v55);
        }
        ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v7 == 10);
        return 0LL;
      }
      goto LABEL_42;
    }
LABEL_14:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v51 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v16);
      *(_QWORD *)(v51 + 24) = 2402LL;
      WdLogEvent5_WdAssertion(v51);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
      {
LABEL_19:
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v7 == 9);
        return 0LL;
      }
    }
    else
    {
      LODWORD(v52) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
      if ( (*v52 & 0x10) != 0 )
        goto LABEL_19;
    }
    LOBYTE(v16) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 416),
      1LL,
      (unsigned int)v5,
      v16);
    goto LABEL_19;
  }
  if ( (_DWORD)v7 == 6 )
    goto LABEL_14;
  v30 = v7 - 1;
  if ( !v30 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v16);
      *(_QWORD *)(v37 + 24) = 2384LL;
      WdLogEvent5_WdAssertion(v37);
    }
    LOBYTE(v16) = a4 != 0;
    v21 = 0LL;
LABEL_11:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 416),
      v21,
      (unsigned int)v5,
      v16);
    return 0LL;
  }
  v34 = v30 - 1;
  if ( !v34 )
    goto LABEL_43;
  v35 = v34 - 1;
  if ( !v35 )
  {
    v17 = 6;
    goto LABEL_43;
  }
  v36 = v35 - 1;
  if ( !v36 )
  {
    v17 = 7;
    goto LABEL_43;
  }
  if ( v36 == 1 )
  {
    v17 = 15;
    goto LABEL_43;
  }
LABEL_42:
  v38 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
  *(_QWORD *)(v38 + 24) = 2474LL;
  WdLogEvent5_WdAssertion(v38);
LABEL_43:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL) != 2 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
    *(_QWORD *)(v43 + 24) = 2490LL;
    WdLogEvent5_WdAssertion(v43);
  }
  v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 48LL))(
          *(_QWORD *)(a1 + 416),
          v17);
  v49 = v44;
  if ( v17 >= 6 && v44 < 0 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
    *(_QWORD *)(v50 + 24) = 2497LL;
    WdLogEvent5_WdAssertion(v50);
  }
  return v49;
}
