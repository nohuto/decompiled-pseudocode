/*
 * XREFs of DxgkGetDeviceState @ 0x1C008F710
 * Callers:
 *     ?VmBusGetDeviceState@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D8E0 (-VmBusGetDeviceState@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendGetDeviceState@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1C0030460 (-VmBusSendGetDeviceState@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICEST.c)
 *     Template_pqqqqxx @ 0x1C0034F08 (Template_pqqqqxx.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C016B684 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C0188724 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceState(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // bl
  int DeviceState; // r12d
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // r15
  _D3DKMT_GETDEVICESTATE *v12; // r14
  _D3DKMT_GETDEVICESTATE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGDEVICE *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  D3DKMT_DEVICEPRESENT_STATE *p_PresentState; // r15
  int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rcx
  struct _KTHREAD ***ThreadProperty; // rax
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
  __int64 v49; // rcx
  struct DXGDEVICE *v50; // [rsp+50h] [rbp-A8h] BYREF
  struct DXGDEVICE *v51[4]; // [rsp+58h] [rbp-A0h] BYREF
  char v52; // [rsp+78h] [rbp-80h]
  _D3DKMT_GETDEVICESTATE v53; // [rsp+80h] [rbp-78h] BYREF
  int v54; // [rsp+110h] [rbp+18h] BYREF
  int v55; // [rsp+118h] [rbp+20h]

  v55 = 2028;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2028);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  DeviceState = 0;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v11 = *ThreadProperty;
    }
  }
  if ( v11 )
  {
    v12 = &v53;
    if ( v4 )
    {
      v13 = (_D3DKMT_GETDEVICESTATE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v13 = (_D3DKMT_GETDEVICESTATE *)MmUserProbeAddress;
      v53 = *v13;
    }
    else
    {
      v12 = (_D3DKMT_GETDEVICESTATE *)a1;
    }
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v51, v12->hDevice, v11, &v50);
    v16 = v50;
    if ( v50 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)v50 + 2) + 16LL);
      v51[1] = (struct DXGDEVICE *)v17;
      v51[3] = (struct DXGDEVICE *)v17;
      _InterlockedIncrement64((volatile signed __int64 *)(v17 + 24));
      v51[2] = (struct DXGDEVICE *)-1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v17 + 120, 0LL);
      v52 = 1;
      if ( *(_BYTE *)(v17 + 186) )
      {
        StateType = v12->StateType;
        if ( ((StateType - 1) & 0xFFFFFFFA) == 0 && StateType != D3DKMT_DEVICESTATE_PRESENT )
        {
          if ( *(_DWORD *)(v17 + 176) == 1 )
          {
            if ( v12->StateType == D3DKMT_DEVICESTATE_EXECUTION )
              v12->PresentState.VidPnSourceId = 1;
            else
              DeviceState = DXGADAPTER::VmBusSendGetDeviceState((DXGADAPTER *)v17, (struct DXGPROCESS *)v11, v50, v12);
          }
          else
          {
            v39 = v12->StateType;
            if ( v39 == D3DKMT_DEVICESTATE_EXECUTION )
              v12->PresentState.VidPnSourceId = 4;
            v18 = 0LL;
            DeviceState = 0;
            if ( v39 != D3DKMT_DEVICESTATE_EXECUTION )
              DeviceState = -1073741130;
          }
          goto LABEL_22;
        }
      }
      v21 = (unsigned int)v12->StateType;
      if ( (_DWORD)v21 == 1 )
      {
        p_PresentState = &v12->PresentState;
        if ( v12 == (_D3DKMT_GETDEVICESTATE *)-8LL )
        {
          v44 = WdLogNewEntry5_WdAssertion(v21, v18, v19, v20);
          *(_QWORD *)(v44 + 24) = 8985LL;
          WdLogEvent5_WdAssertion(v44);
        }
        v23 = *((_DWORD *)v50 + 102);
        if ( v23 != 1 )
        {
          v45 = v23 - 2;
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
                v47 = WdLogNewEntry5_WdAssertion(v46, v18, v19, v20);
                *(_QWORD *)(v47 + 24) = 9082LL;
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
          v27 = 2;
          v18 = 0LL;
          goto LABEL_20;
        }
        if ( *((_BYTE *)v50 + 1821) )
        {
          v18 = 0LL;
          goto LABEL_19;
        }
        v18 = (*(unsigned int (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 408LL) + 8LL)
                                                            + 192LL))(
                *((_QWORD *)v50 + 75),
                &v54);
        LOBYTE(v25) = v54 < 0;
        v26 = v54 & 0x7FFFFFFF;
        v54 &= ~0x80000000;
        if ( (int)v18 >= 0 )
        {
          if ( v26 )
          {
            v19 = 0x1C0000000uLL;
            switch ( v26 )
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
                p_PresentState->VidPnSourceId = 7;
                break;
              case 14:
              case 22:
                p_PresentState->VidPnSourceId = 4;
                break;
              default:
                v48 = WdLogNewEntry5_WdAssertion(v25, v18, 0x1C0000000uLL, v24);
                *(_QWORD *)(v48 + 24) = 9069LL;
                WdLogEvent5_WdAssertion(v48);
                v18 = 3221225473LL;
                p_PresentState->VidPnSourceId = 5;
                break;
            }
            goto LABEL_21;
          }
          if ( (_BYTE)v25 )
          {
            v27 = 2;
            goto LABEL_20;
          }
LABEL_19:
          v27 = 1;
LABEL_20:
          p_PresentState->VidPnSourceId = v27;
        }
LABEL_21:
        DeviceState = v18;
        goto LABEL_22;
      }
      v31 = v21 - 2;
      if ( v31 )
      {
        v32 = v31 - 2;
        if ( v32 )
        {
          v40 = v32 - 1;
          if ( !v40 )
          {
            if ( *((_DWORD *)v50 + 102) == 1 )
            {
              if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL)) )
              {
                (*(void (__fastcall **)(_QWORD, D3DKMT_DEVICEPAGEFAULT_STATE *))(*(_QWORD *)(*(_QWORD *)(v41 + 408) + 8LL)
                                                                               + 200LL))(
                  *((_QWORD *)v50 + 75),
                  &v12->PageFaultState);
              }
              else
              {
                v12->PageFaultState.FaultedPrimitiveAPISequenceNumber = -1LL;
                v18 = 0LL;
                v12->PresentState.PresentStats.PresentCount = 0;
                v12->PresentState.PresentStats.PresentRefreshCount = -1;
                v12->PresentState.PresentStats.SyncRefreshCount = 0;
                v12->PresentState.PresentStats.SyncQPCTime.QuadPart = 0LL;
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
          if ( *((_DWORD *)v50 + 102) != 1 )
          {
            DeviceState = -1073741130;
            goto LABEL_22;
          }
          DeviceState = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2)
                                                                                                  + 408LL)
                                                                                      + 8LL)
                                                                          + 184LL))(
                          *((_QWORD *)v50 + 75),
                          v12->PresentState.VidPnSourceId,
                          0LL);
          v12->PresentQueueState.bQueuedPresentLimitReached = 0;
          if ( DeviceState != -1071775486 )
          {
LABEL_22:
            if ( bTracingEnabled )
            {
              v49 = (unsigned int)(v12->StateType - 1);
              if ( v12->StateType == D3DKMT_DEVICESTATE_EXECUTION )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  Template_xq(v49, &DeviceStateEvent, v19, v50, v12->PresentState.VidPnSourceId);
              }
              else if ( v12->StateType == D3DKMT_DEVICESTATE_PRESENT
                     && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                Template_pqqqqxx(
                  v49,
                  v18,
                  v19,
                  v50,
                  v12->PresentState.VidPnSourceId,
                  v12->PresentState.PresentStats.PresentCount,
                  v12->PresentState.PresentStats.PresentRefreshCount,
                  v12->PresentState.PresentStats.SyncRefreshCount,
                  v12->PresentState.PresentStats.SyncQPCTime.QuadPart,
                  v12->PresentState.PresentStats.SyncGPUTime.QuadPart);
              }
            }
            if ( DeviceState >= 0 && v4 )
            {
              if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
                *(_BYTE *)MmUserProbeAddress = 0;
              *(_OWORD *)a1 = *(_OWORD *)&v12->hDevice;
              *(_OWORD *)(a1 + 16) = *(_OWORD *)(&v12->PresentQueueState + 1);
              *(_OWORD *)(a1 + 32) = *(_OWORD *)(&v12->PresentQueueState + 3);
              *(_QWORD *)(a1 + 48) = *((_QWORD *)&v12->PresentQueueState + 5);
            }
            ExReleasePushLockSharedEx(v17 + 120, 0LL);
            KeLeaveCriticalRegion();
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v17 + 16), (struct DXGADAPTER *)v17);
            if ( v51[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v51[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51[0] + 2), v51[0]);
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              goto LABEL_107;
            return (unsigned int)DeviceState;
          }
          v18 = 0LL;
          v12->PresentQueueState.bQueuedPresentLimitReached = 1;
          goto LABEL_21;
        }
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 176LL) != 1 )
        {
          DeviceState = -1073741130;
          goto LABEL_22;
        }
        v33 = *((_QWORD *)v50 + 225);
        if ( !v33
          || (v34 = *(unsigned int *)(*(_QWORD *)(v33 + 2280) + 80LL),
              v12->PresentState.VidPnSourceId < (unsigned int)v34) )
        {
          DeviceState = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                          v50,
                          v12->PresentState.VidPnSourceId,
                          &v12->PresentStateDWM.PresentStatsDWM);
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
        v43 = *((_QWORD *)v50 + 225);
        if ( !v43
          || (v34 = *(unsigned int *)(*(_QWORD *)(v43 + 2280) + 80LL),
              v12->PresentState.VidPnSourceId < (unsigned int)v34) )
        {
          DeviceState = DXGDEVICE::QueryLastCompletedPresentId(
                          v50,
                          v12->PresentState.VidPnSourceId,
                          &v12->PresentState.PresentStats);
          goto LABEL_22;
        }
      }
      v42 = WdLogNewEntry5_WdWarning(v34, v18, v19, v20);
      *(_QWORD *)(v42 + 24) = v12->PresentState.VidPnSourceId;
      DeviceState = -1073741811;
      *(_QWORD *)(v42 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v42);
      goto LABEL_22;
    }
    v37 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v37 + 24) = v12->hDevice;
    DeviceState = -1073741811;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    if ( v51[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v51[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51[0] + 2), v51[0]);
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v10, v9);
    DeviceState = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_107:
    Template_q(v28, &EventProfilerExit, v29, 2028);
  return (unsigned int)DeviceState;
}
