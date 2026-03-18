/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0084B00 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0084BB8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00ACD28 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00AD1DC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00BA9E0 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00BB7E0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkFlushPresentHistory @ 0x1C00F8EC0 (DxgkFlushPresentHistory.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0102064 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C010240C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C0170DFC (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C0171D4C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C017286C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0177AA4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0177D20 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0177F14 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01781E8 (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01875D0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01ABB54 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F2B14 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C0083CB8 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0083D60 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0084D8C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  int v22; // ecx
  struct VMBCHANNEL__ *v23; // rcx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+30h] [rbp-48h] BYREF
  int v41; // [rsp+38h] [rbp-40h]
  int v42; // [rsp+3Ch] [rbp-3Ch]
  int v43; // [rsp+40h] [rbp-38h]
  int v44; // [rsp+48h] [rbp-30h]
  int v45; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v46; // [rsp+50h] [rbp-28h]

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v8 = a2;
  if ( *(_BYTE *)(v6 + 185) )
  {
    v22 = *(_DWORD *)(*(_QWORD *)(v6 + 3904) + 3912LL);
    v40 = 0LL;
    v41 = 0;
    v42 = 0;
    v44 = v22;
    v23 = *(struct VMBCHANNEL__ **)(v6 + 3888);
    v43 = 43;
    v45 = a2;
    v46 = a3;
    return VmBusSendSyncMessageStatusReturn(v23, (struct DXGKVMB_COMMAND_BASE *)&v40, 0x28u, (struct _MDL *)v6);
  }
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &Dxgk_FlushScheduler, v9);
  v11 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v11 + 24) = v8;
  *(_QWORD *)(v11 + 32) = v5;
  WdLogEvent5_WdEvent(v11);
  v14 = 1;
  if ( (int)v8 > 6 )
  {
    if ( (_DWORD)v8 == 7 )
      goto LABEL_23;
    if ( (_DWORD)v8 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v37 + 24) = 2503LL;
        WdLogEvent5_WdAssertion(v37);
      }
      if ( !IsDxgmms2 )
      {
        LODWORD(v38) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
        if ( (*v38 & 0x10) != 0 )
          return 0LL;
      }
      v16 = 1LL;
      LOBYTE(v13) = a4 != 0;
      goto LABEL_13;
    }
    v12 = (unsigned int)(v8 - 9);
    if ( (_DWORD)v8 != 9 )
    {
      if ( (_DWORD)v8 == 10 )
      {
LABEL_23:
        if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
        {
          v39 = WdLogNewEntry5_WdAssertion(v19);
          *(_QWORD *)(v39 + 24) = 2498LL;
          WdLogEvent5_WdAssertion(v39);
        }
        ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 10);
        return 0LL;
      }
      goto LABEL_42;
    }
LABEL_16:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v35 + 24) = 2457LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
      {
LABEL_21:
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 9);
        return 0LL;
      }
    }
    else
    {
      LODWORD(v36) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
      if ( (*v36 & 0x10) != 0 )
        goto LABEL_21;
    }
    LOBYTE(v13) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 512),
      1LL,
      (unsigned int)v5,
      v13);
    goto LABEL_21;
  }
  if ( (_DWORD)v8 == 6 )
    goto LABEL_16;
  v20 = v8 - 1;
  if ( !v20 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v27 + 24) = 2439LL;
      WdLogEvent5_WdAssertion(v27);
    }
    LOBYTE(v13) = a4 != 0;
    v16 = 0LL;
LABEL_13:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL) + 672LL))(
      *(_QWORD *)(a1 + 512),
      v16,
      (unsigned int)v5,
      v13);
    return 0LL;
  }
  v24 = v20 - 1;
  if ( !v24 )
    goto LABEL_43;
  v25 = v24 - 1;
  if ( !v25 )
  {
    v14 = 6;
    goto LABEL_43;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    v14 = 7;
    goto LABEL_43;
  }
  if ( v26 == 1 )
  {
    v14 = 15;
    goto LABEL_43;
  }
LABEL_42:
  v28 = WdLogNewEntry5_WdAssertion(v12);
  *(_QWORD *)(v28 + 24) = 2529LL;
  WdLogEvent5_WdAssertion(v28);
LABEL_43:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL) != 2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v29);
    *(_QWORD *)(v30 + 24) = 2545LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL) + 48LL))(
          *(_QWORD *)(a1 + 512),
          v14);
  v33 = v31;
  if ( v14 >= 6 && v31 < 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v34 + 24) = 2552LL;
    WdLogEvent5_WdAssertion(v34);
  }
  return v33;
}
