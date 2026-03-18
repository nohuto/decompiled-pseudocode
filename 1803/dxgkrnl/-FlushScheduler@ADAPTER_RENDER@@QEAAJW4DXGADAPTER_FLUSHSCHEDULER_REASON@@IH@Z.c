/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00DC9B0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F4FB0 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F5048 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkDisplayOnOff @ 0x1C010F5D0 (DxgkDisplayOnOff.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0147DBC (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C014848C (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C014D9CC (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014F2D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0152D80 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0153734 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C0157CFC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C015BA34 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015BD40 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C015BF48 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015C280 (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DxgkFlushPresentHistory @ 0x1C01672D0 (DxgkFlushPresentHistory.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C016F530 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01A0D58 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiPowerArbiterThread @ 0x1C01F11D0 (DpiPowerArbiterThread.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021E594 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00A63DC (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C00A6484 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F51FC (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ebp
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // ecx
  struct VMBCHANNEL__ *v23; // rcx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+30h] [rbp-48h] BYREF
  int v43; // [rsp+38h] [rbp-40h]
  int v44; // [rsp+3Ch] [rbp-3Ch]
  int v45; // [rsp+40h] [rbp-38h]
  int v46; // [rsp+48h] [rbp-30h]
  int v47; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v48; // [rsp+50h] [rbp-28h]

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v8 = a2;
  if ( *(_BYTE *)(v6 + 185) )
  {
    v22 = *(_DWORD *)(*(_QWORD *)(v6 + 4128) + 4136LL);
    v42 = 0LL;
    v43 = 0;
    v44 = 0;
    v46 = v22;
    v23 = *(struct VMBCHANNEL__ **)(v6 + 4080);
    v45 = 43;
    v47 = a2;
    v48 = a3;
    return VmBusSendSyncMessageStatusReturn(v23, (struct DXGKVMB_COMMAND_BASE *)&v42, 0x28u, (struct _MDL *)v6);
  }
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16));
  if ( bTracingEnabled )
  {
    v10 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqq((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &Dxgk_FlushScheduler, v11);
  }
  v13 = WdLogNewEntry5_WdEvent(v10, v9);
  *(_QWORD *)(v13 + 24) = v8;
  *(_QWORD *)(v13 + 32) = v5;
  WdLogEvent5_WdEvent(v13);
  v16 = 1;
  if ( (int)v8 > 6 )
  {
    if ( (_DWORD)v8 == 7 )
    {
LABEL_7:
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v41 + 24) = 2774LL;
        WdLogEvent5_WdAssertion(v41);
      }
      ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 10);
      return 0LL;
    }
    if ( (_DWORD)v8 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v39 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v39 + 24) = 2779LL;
        WdLogEvent5_WdAssertion(v39);
      }
      if ( !IsDxgmms2 )
      {
        LODWORD(v40) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
        if ( (*v40 & 0x10) != 0 )
          return 0LL;
      }
      v21 = 1LL;
      LOBYTE(v15) = a4 != 0;
      goto LABEL_25;
    }
    v14 = (unsigned int)(v8 - 9);
    if ( (_DWORD)v8 != 9 )
    {
      if ( (_DWORD)v8 == 10 )
        goto LABEL_7;
      goto LABEL_41;
    }
LABEL_13:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v37 + 24) = 2733LL;
      WdLogEvent5_WdAssertion(v37);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
      {
LABEL_18:
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 9);
        return 0LL;
      }
    }
    else
    {
      LODWORD(v38) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
      if ( (*v38 & 0x10) != 0 )
        goto LABEL_18;
    }
    LOBYTE(v15) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL) + 784LL))(
      *(_QWORD *)(a1 + 528),
      1LL,
      (unsigned int)v5,
      v15);
    goto LABEL_18;
  }
  if ( (_DWORD)v8 == 6 )
    goto LABEL_13;
  v24 = v8 - 1;
  if ( !v24 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v29 + 24) = 2715LL;
      WdLogEvent5_WdAssertion(v29);
    }
    LOBYTE(v15) = a4 != 0;
    v21 = 0LL;
LABEL_25:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL) + 784LL))(
      *(_QWORD *)(a1 + 528),
      v21,
      (unsigned int)v5,
      v15);
    return 0LL;
  }
  v25 = v24 - 1;
  if ( !v25 )
    goto LABEL_42;
  v26 = v25 - 1;
  if ( !v26 )
  {
    v16 = 6;
    goto LABEL_42;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    v16 = 7;
    goto LABEL_42;
  }
  if ( v27 == 1 )
  {
    v16 = 15;
    goto LABEL_42;
  }
LABEL_41:
  v30 = WdLogNewEntry5_WdAssertion(v14);
  *(_QWORD *)(v30 + 24) = 2805LL;
  WdLogEvent5_WdAssertion(v30);
LABEL_42:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL) != 2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v32 + 24) = 2821LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL) + 48LL))(
          *(_QWORD *)(a1 + 528),
          v16);
  v35 = v33;
  if ( v16 >= 6 && v33 < 0 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v36 + 24) = 2828LL;
    WdLogEvent5_WdAssertion(v36);
  }
  return v35;
}
