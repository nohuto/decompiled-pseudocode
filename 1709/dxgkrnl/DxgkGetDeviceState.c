/*
 * XREFs of DxgkGetDeviceState @ 0x1C00B3B20
 * Callers:
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01936F0 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 *     McTemplateK0pqqqqxx @ 0x1C00261C4 (McTemplateK0pqqqqxx.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C016F0D0 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C01968F8 (-VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C019DAD4 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceState(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // r13
  int DeviceState; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rsi
  _D3DKMT_GETDEVICESTATE *v13; // rbx
  _D3DKMT_GETDEVICESTATE *v14; // rcx
  __int64 v15; // rcx
  struct DXGDEVICE *v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // rsi
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rcx
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  D3DKMT_DEVICESTATE_TYPE StateType; // ecx
  D3DKMT_DEVICESTATE_TYPE v39; // ecx
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  _D3DKMT_GETDEVICESTATE v49; // [rsp+58h] [rbp-70h] BYREF
  int v50; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGDEVICE *v51; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGDEVICE *v52; // [rsp+E8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2028);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  DeviceState = 0;
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v12 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v35 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v12 = *v35;
      }
    }
  }
  if ( v12 )
  {
    v13 = &v49;
    if ( v4 )
    {
      v14 = (_D3DKMT_GETDEVICESTATE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v14 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
      v49 = *v14;
    }
    else
    {
      v13 = (_D3DKMT_GETDEVICESTATE *)a1;
    }
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v52, v13->hDevice, v12, &v51);
    v16 = v51;
    if ( v51 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL);
      _InterlockedIncrement64((volatile signed __int64 *)(v17 + 24));
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v17 + 120, 0LL);
      if ( *(_BYTE *)(v17 + 185) )
      {
        StateType = v13->StateType;
        if ( ((StateType - 1) & 0xFFFFFFFA) == 0 && StateType != D3DKMT_DEVICESTATE_PRESENT )
        {
          if ( *(_DWORD *)(v17 + 176) == 1 )
          {
            if ( v13->StateType == D3DKMT_DEVICESTATE_EXECUTION )
              v13->PresentState.VidPnSourceId = 1;
            else
              DeviceState = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
                              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v17 + 3888),
                              (struct DXGPROCESS *)v12,
                              v51,
                              v13);
          }
          else
          {
            v39 = v13->StateType;
            if ( v39 == D3DKMT_DEVICESTATE_EXECUTION )
              v13->PresentState.VidPnSourceId = 4;
            v18 = 0LL;
            DeviceState = 0;
            if ( v39 != D3DKMT_DEVICESTATE_EXECUTION )
              DeviceState = -1073741130;
          }
          goto LABEL_22;
        }
      }
      v20 = (unsigned int)v13->StateType;
      if ( (_DWORD)v20 == 1 )
      {
        p_PresentState = &v13->PresentState;
        if ( v13 == (_D3DKMT_GETDEVICESTATE *)-8LL )
        {
          v44 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v44 + 24) = 9029LL;
          WdLogEvent5_WdAssertion(v44);
        }
        v22 = *((_DWORD *)v51 + 102);
        if ( v22 != 1 )
        {
          v45 = v22 - 2;
          if ( v45 )
          {
            v46 = (unsigned int)(v45 - 1);
            if ( (_DWORD)v46 )
            {
              if ( (_DWORD)v46 == 1 )
              {
                p_PresentState->VidPnSourceId = 4;
                v18 = 0LL;
              }
              else
              {
                v47 = WdLogNewEntry5_WdAssertion(v46);
                *(_QWORD *)(v47 + 24) = 9127LL;
                WdLogEvent5_WdAssertion(v47);
                p_PresentState->VidPnSourceId = 4;
                v18 = 3221225473LL;
              }
            }
            else
            {
              p_PresentState->VidPnSourceId = 3;
              v18 = 0LL;
            }
            goto LABEL_21;
          }
          v25 = 2;
          v18 = 0LL;
          goto LABEL_20;
        }
        if ( *((_BYTE *)v51 + 1693) )
        {
          v18 = 0LL;
          goto LABEL_19;
        }
        v18 = (*(unsigned int (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 504LL) + 8LL)
                                                            + 192LL))(
                *((_QWORD *)v51 + 75),
                &v50);
        LOBYTE(v23) = v50 < 0;
        v24 = v50 & 0x7FFFFFFF;
        v50 &= ~0x80000000;
        if ( (int)v18 >= 0 )
        {
          if ( v24 )
          {
            v19 = 0x1C0000000uLL;
            switch ( v24 )
            {
              case 2:
              case 11:
              case 12:
              case 13:
                p_PresentState->VidPnSourceId = 5;
                break;
              case 6:
                p_PresentState->VidPnSourceId = 6;
                break;
              case 7:
                p_PresentState->VidPnSourceId = 3;
                break;
              case 9:
              case 10:
              case 15:
              case 16:
              case 17:
              case 18:
              case 19:
              case 24:
                p_PresentState->VidPnSourceId = 7;
                break;
              case 14:
              case 22:
                p_PresentState->VidPnSourceId = 4;
                break;
              default:
                v48 = WdLogNewEntry5_WdAssertion(v23);
                *(_QWORD *)(v48 + 24) = 9114LL;
                WdLogEvent5_WdAssertion(v48);
                v18 = 3221225473LL;
                p_PresentState->VidPnSourceId = 5;
                break;
            }
            goto LABEL_21;
          }
          if ( (_BYTE)v23 )
          {
            v25 = 2;
            goto LABEL_20;
          }
LABEL_19:
          v25 = 1;
LABEL_20:
          p_PresentState->VidPnSourceId = v25;
        }
LABEL_21:
        DeviceState = v18;
        goto LABEL_22;
      }
      v30 = v20 - 2;
      if ( v30 )
      {
        v31 = v30 - 2;
        if ( v31 )
        {
          v40 = v31 - 1;
          if ( !v40 )
          {
            if ( *((_DWORD *)v51 + 102) == 1 )
            {
              if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL)) )
              {
                (*(void (__fastcall **)(_QWORD, D3DKMT_DEVICEPAGEFAULT_STATE *))(*(_QWORD *)(*(_QWORD *)(v41 + 504) + 8LL)
                                                                               + 200LL))(
                  *((_QWORD *)v51 + 75),
                  &v13->PageFaultState);
              }
              else
              {
                v13->PageFaultState.FaultedPrimitiveAPISequenceNumber = -1LL;
                v18 = 0LL;
                v13->PresentState.PresentStats.PresentCount = 0;
                v13->PresentState.PresentStats.PresentRefreshCount = -1;
                v13->PresentState.PresentStats.SyncRefreshCount = 0;
                v13->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
              }
            }
            else
            {
              DeviceState = -1073741130;
            }
            goto LABEL_22;
          }
          if ( v40 != 1 )
          {
            DeviceState = -1073741811;
            goto LABEL_22;
          }
          if ( *((_DWORD *)v51 + 102) != 1 )
          {
            DeviceState = -1073741130;
            goto LABEL_22;
          }
          DeviceState = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2)
                                                                                                  + 504LL)
                                                                                      + 8LL)
                                                                          + 184LL))(
                          *((_QWORD *)v51 + 75),
                          v13->PresentState.VidPnSourceId,
                          0LL);
          v13->PresentQueueState.bQueuedPresentLimitReached = 0;
          if ( DeviceState != -1071775486 )
          {
LABEL_22:
            if ( bTracingEnabled )
            {
              v26 = (unsigned int)(v13->StateType - 1);
              if ( v13->StateType == D3DKMT_DEVICESTATE_EXECUTION )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0xq(v26, &DeviceStateEvent, v19, v51, v13->PresentState.VidPnSourceId);
              }
              else if ( v13->StateType == D3DKMT_DEVICESTATE_PRESENT
                     && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                McTemplateK0pqqqqxx(
                  v26,
                  v18,
                  v19,
                  v51,
                  v13->PresentState.VidPnSourceId,
                  v13->PresentState.PresentStats.PresentCount,
                  v13->PresentState.PresentStats.PresentRefreshCount,
                  v13->PresentState.PresentStats.SyncRefreshCount,
                  v13->PresentState.PresentStats.SyncQPCTime.QuadPart,
                  v13->PresentState.PresentStats.SyncGPUTime.QuadPart,
                  v17);
              }
            }
            if ( DeviceState >= 0 && v4 )
            {
              if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
                *(_BYTE *)MmUserProbeAddress = 0;
              *(_OWORD *)a1 = *(_OWORD *)&v13->hDevice;
              *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v13->PresentQueueState + 1);
              *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v13->PresentQueueState + 3);
              *(_QWORD *)(a1 + 48) = *((_QWORD *)&v13->PresentQueueState + 5);
            }
            ExReleasePushLockSharedEx(v17 + 120, 0LL);
            KeLeaveCriticalRegion();
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v17 + 16), (struct DXGADAPTER *)v17);
            if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              goto LABEL_108;
            return (unsigned int)DeviceState;
          }
          v18 = 0LL;
          v13->PresentQueueState.bQueuedPresentLimitReached = 1;
          goto LABEL_21;
        }
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 176LL) != 1 )
        {
          DeviceState = -1073741130;
          goto LABEL_22;
        }
        v32 = *((_QWORD *)v51 + 209);
        if ( !v32
          || (v33 = *(unsigned int *)(*(_QWORD *)(v32 + 2304) + 80LL),
              v13->PresentState.VidPnSourceId < (unsigned int)v33) )
        {
          DeviceState = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                          v51,
                          v13->PresentState.VidPnSourceId,
                          &v13->PresentStateDWM.PresentStatsDWM);
          goto LABEL_22;
        }
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 176LL) != 1 )
        {
          DeviceState = -1073741130;
          goto LABEL_22;
        }
        v43 = *((_QWORD *)v51 + 209);
        if ( !v43
          || (v33 = *(unsigned int *)(*(_QWORD *)(v43 + 2304) + 80LL),
              v13->PresentState.VidPnSourceId < (unsigned int)v33) )
        {
          DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                          v51,
                          v13->PresentState.VidPnSourceId,
                          &v13->PresentState.PresentStats);
          goto LABEL_22;
        }
      }
      v42 = WdLogNewEntry5_WdWarning(v33, v18, v19);
      *(_QWORD *)(v42 + 24) = v13->PresentState.VidPnSourceId;
      DeviceState = -1073741811;
      *(_QWORD *)(v42 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v42);
      goto LABEL_22;
    }
    v37 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v37 + 24) = v13->hDevice;
    DeviceState = -1073741811;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v11);
    DeviceState = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_108:
    McTemplateK0q(v27, &EventProfilerExit, v28, 2028);
  return (unsigned int)DeviceState;
}
