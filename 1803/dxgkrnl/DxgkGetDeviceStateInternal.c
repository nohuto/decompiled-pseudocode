/*
 * XREFs of DxgkGetDeviceStateInternal @ 0x1C0097064
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001C090 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C00E5AE0 (DxgkGetDeviceState.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00154E0 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z @ 0x1C002471C (-VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z.c)
 *     McTemplateK0pqqqqxx @ 0x1C002FA9C (McTemplateK0pqqqqxx.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00E8670 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C00F2E80 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C018313C (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C018B9A0 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceStateInternal(ULONG64 a1, char a2, __int64 a3)
{
  int v5; // ebx
  struct _KTHREAD **Current; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // zf
  _D3DKMT_GETDEVICESTATE *v12; // rdi
  _D3DKMT_GETDEVICESTATE *v13; // rax
  __int64 v14; // rcx
  DXGDEVICE *v15; // r14
  __int64 v16; // rax
  char *v17; // r15
  __int64 v18; // r13
  _QWORD *v19; // rdx
  __int64 v20; // r8
  D3DKMT_DEVICESTATE_TYPE *p_StateType; // rsi
  D3DKMT_DEVICESTATE_TYPE v22; // eax
  int DeviceState; // eax
  int v24; // eax
  unsigned __int8 IsDxgmms2; // al
  LARGE_INTEGER v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  struct DXGPROCESS *v33; // [rsp+50h] [rbp-A8h]
  int v34; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-98h]
  char v36[8]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v37; // [rsp+70h] [rbp-88h]
  char v38; // [rsp+78h] [rbp-80h]
  _D3DKMT_GETDEVICESTATE v39; // [rsp+80h] [rbp-78h] BYREF
  DXGDEVICE *v41; // [rsp+110h] [rbp+18h] BYREF
  char v42; // [rsp+118h] [rbp+20h] BYREF

  v35 = 0LL;
  v34 = 2028;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2028);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2028);
  v5 = 0;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v33 = (struct DXGPROCESS *)Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    v5 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( (qword_1C0079010 & 2) == 0 )
      return (unsigned int)v5;
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
    goto LABEL_65;
  }
  v12 = &v39;
  if ( a2 )
  {
    v13 = (_D3DKMT_GETDEVICESTATE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
    v39 = *v13;
  }
  else
  {
    v12 = (_D3DKMT_GETDEVICESTATE *)a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v12->hDevice, Current, &v41);
  v15 = v41;
  if ( !v41 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v12->hDevice;
    v5 = -1073741811;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v42);
    goto LABEL_6;
  }
  v17 = (char *)v41 + 16;
  v37 = *(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL);
  v18 = v37;
  v38 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  p_StateType = &v12->StateType;
  if ( *(_BYTE *)(v18 + 185)
    && (((*p_StateType - 1) & 0xFFFFFFFB) == 0 || *p_StateType == D3DKMT_DEVICESTATE_PRESENT_QUEUE) )
  {
    v22 = *p_StateType;
    v15 = v41;
    if ( *(_DWORD *)(v18 + 176) != 1 )
    {
      if ( v22 == D3DKMT_DEVICESTATE_EXECUTION )
      {
        v12->PresentState.VidPnSourceId = 4;
        goto LABEL_50;
      }
      goto LABEL_44;
    }
    if ( v22 == D3DKMT_DEVICESTATE_EXECUTION )
    {
      v12->PresentState.VidPnSourceId = 1;
      goto LABEL_50;
    }
    DeviceState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v18 + 4080),
                    v33,
                    v41,
                    v12);
    goto LABEL_49;
  }
  switch ( *p_StateType )
  {
    case D3DKMT_DEVICESTATE_EXECUTION:
      DeviceState = DXGDEVICE::GetDeviceExecutionState(v15, &v12->ExecutionState);
      goto LABEL_49;
    case D3DKMT_DEVICESTATE_PRESENT:
      v15 = v41;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 16LL) + 176LL) == 1 )
      {
        v30 = *((_QWORD *)v41 + 211);
        if ( v30 )
        {
          v28 = *(unsigned int *)(*(_QWORD *)(v30 + 2456) + 80LL);
          if ( v12->PresentState.VidPnSourceId >= (unsigned int)v28 )
            goto LABEL_41;
        }
        DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                        v41,
                        v12->PresentState.VidPnSourceId,
                        &v12->PresentState.PresentStats);
        goto LABEL_49;
      }
LABEL_44:
      v5 = -1073741130;
      break;
    case D3DKMT_DEVICESTATE_PRESENT_DWM:
      v15 = v41;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 16LL) + 176LL) == 1 )
      {
        v27 = *((_QWORD *)v41 + 211);
        if ( v27 )
        {
          v28 = *(unsigned int *)(*(_QWORD *)(v27 + 2456) + 80LL);
          if ( v12->PresentState.VidPnSourceId >= (unsigned int)v28 )
          {
LABEL_41:
            v29 = WdLogNewEntry5_WdWarning(v28, v19, v20);
            *(_QWORD *)(v29 + 24) = v12->PresentState.VidPnSourceId;
            v5 = -1073741811;
            *(_QWORD *)(v29 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v29);
            break;
          }
        }
        DeviceState = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                        v41,
                        v12->PresentState.VidPnSourceId,
                        &v12->PresentStateDWM.PresentStatsDWM);
LABEL_49:
        v5 = DeviceState;
        break;
      }
      goto LABEL_44;
    case D3DKMT_DEVICESTATE_PAGE_FAULT:
      if ( *((_DWORD *)v15 + 106) == 1 )
      {
        IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)v17 + 16LL));
        v15 = v41;
        if ( IsDxgmms2 )
        {
          _guard_dispatch_icall_fptr();
        }
        else
        {
          *v19 = -1LL;
          v12->PresentState.PresentStats.PresentCount = v26.LowPart;
          v12->PresentState.PresentStats.PresentRefreshCount = -1;
          v12->PresentState.PresentStats.SyncRefreshCount = v26.LowPart;
          v12->PresentState.PresentStats.SyncQPCTime = v26;
        }
      }
      else
      {
        v5 = -1073741130;
        v15 = v41;
      }
      break;
    case D3DKMT_DEVICESTATE_PRESENT_QUEUE:
      v24 = *((_DWORD *)v15 + 106);
      v15 = v41;
      if ( v24 != 1 )
        goto LABEL_44;
      v5 = VIDSCH_EXPORT::VidSchWaitForQueuedPresentLimit(
             *(VIDSCH_EXPORT **)(*(_QWORD *)v17 + 520LL),
             *((struct _VIDSCH_DEVICE **)v41 + 77),
             v12->PresentState.VidPnSourceId,
             0);
      v12->PresentQueueState.bQueuedPresentLimitReached = 0;
      if ( v5 == -1071775486 )
      {
        v5 = 0;
        v12->PresentQueueState.bQueuedPresentLimitReached = 1;
      }
      break;
    default:
      v5 = -1073741811;
      break;
  }
LABEL_50:
  if ( bTracingEnabled )
  {
    v31 = (unsigned int)(*p_StateType - 1);
    if ( *p_StateType == D3DKMT_DEVICESTATE_EXECUTION )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0xq(v31, &DeviceStateEvent, v20, v15, v12->PresentState.VidPnSourceId);
    }
    else if ( *p_StateType == D3DKMT_DEVICESTATE_PRESENT && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqqqqxx(
        v31,
        (__int64)v19,
        v20,
        v15,
        v12->PresentState.VidPnSourceId,
        v12->PresentState.PresentStats.PresentCount,
        v12->PresentState.PresentStats.PresentRefreshCount,
        v12->PresentState.PresentStats.SyncRefreshCount,
        v12->PresentState.PresentStats.SyncQPCTime.QuadPart,
        v12->PresentState.PresentStats.SyncGPUTime.QuadPart);
    }
  }
  if ( v5 >= 0 && a2 )
  {
    if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a1 = *(_OWORD *)&v12->hDevice;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v12->PresentQueueState + 1);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v12->PresentQueueState + 3);
    *(_QWORD *)(a1 + 48) = *((_QWORD *)&v12->PresentQueueState + 5);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 )
  {
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
LABEL_65:
    if ( !v11 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v34);
  }
  return (unsigned int)v5;
}
