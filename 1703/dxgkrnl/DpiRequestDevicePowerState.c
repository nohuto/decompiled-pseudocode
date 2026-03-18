/*
 * XREFs of DpiRequestDevicePowerState @ 0x1C0012DDC
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C00204DC (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiSuspendAdapterDpc @ 0x1C003D3F0 (DpiSuspendAdapterDpc.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C016F9B0 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DpiSetDevicePowerTransitionState @ 0x1C00035FC (DpiSetDevicePowerTransitionState.c)
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 *     DxgkReportDevicePoweredOn @ 0x1C0023694 (DxgkReportDevicePoweredOn.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C003CF78 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C003CFF8 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C003D244 (DpiRequestDevicePowerIrp.c)
 *     DpiCancelAsyncRequest @ 0x1C0042770 (DpiCancelAsyncRequest.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x1C00427DC (DpiSendAsyncResumeAdapterRequest.c)
 */

void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rax
  int v7; // ecx
  int v8; // r8d
  KSPIN_LOCK *v9; // rcx
  _QWORD *v10; // rax
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  _QWORD *v15; // rax
  int v16; // edx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // r8
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdPower();
  v6[3] = v5;
  v6[4] = v3;
  v6[5] = v4;
  WdLogEvent5_WdPower(v6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_pqq(v7, (unsigned int)&Dxgk_DpiRequestDevicePowerState, v8, *(_QWORD *)(v3 + 3704), v5, v4);
  v9 = (KSPIN_LOCK *)(v3 + 3880);
  if ( (_DWORD)v5 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(v9, &v28);
    v17 = (_QWORD *)WdLogNewEntry5_WdPower();
    v17[3] = *(int *)(v3 + 3944);
    v17[4] = *(int *)(v3 + 3948);
    v17[5] = 0LL;
    WdLogEvent5_WdPower(v17);
    if ( *(_DWORD *)(v3 + 3784) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 3944) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      *(_QWORD *)(v22 + 24) = 3633LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(v3 + 3948) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) + 3888LL), 1u);
    }
    if ( *(_DWORD *)(v3 + 3944) == 1 )
    {
      DpiCancelAsyncRequest(v3);
    }
    else
    {
      if ( *(_DWORD *)(v3 + 3944) != 2 )
      {
        if ( *(_DWORD *)(v3 + 3944) == 3 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdPower();
          v26[3] = v3;
          v26[4] = 0LL;
          v26[5] = 0LL;
          WdLogEvent5_WdPower(v26);
          DpiSendAsyncResumeAdapterRequest(v3);
          v16 = 7;
        }
        else
        {
          if ( *(_DWORD *)(v3 + 3944) != 4 )
          {
            if ( *(_DWORD *)(v3 + 3944) != 5 )
            {
LABEL_21:
              if ( (_DWORD)v4 != 2 )
              {
LABEL_22:
                p_LockHandle = &v28;
                goto LABEL_23;
              }
LABEL_34:
              if ( *(_DWORD *)(v3 + 3944) != 6 )
              {
                v25 = (_QWORD *)WdLogNewEntry5_WdPower();
                v25[3] = v3;
                v25[4] = *(int *)(v3 + 3944);
                v25[5] = 2LL;
                WdLogEvent5_WdPower(v25);
                DxgkReportDevicePoweredOn(*(_QWORD *)(v3 + 3704));
              }
              goto LABEL_22;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
              Template_pqq(1, (unsigned int)&EventPowerRequestDuringD3, v20, *(_QWORD *)(v3 + 3704), 1, v4);
          }
          v15 = (_QWORD *)WdLogNewEntry5_WdPower();
          v15[3] = v3;
          v15[4] = 0LL;
          v15[5] = 0LL;
          WdLogEvent5_WdPower(v15);
          DpiRequestDevicePowerIrp(v3, 1LL);
          v16 = 6;
        }
LABEL_20:
        DpiSetDevicePowerTransitionState(v3, v16);
        goto LABEL_21;
      }
      if ( (_DWORD)v4 == 2 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdPower();
        v24[3] = v3;
        v24[4] = 0LL;
        v24[5] = 0LL;
        WdLogEvent5_WdPower(v24);
        goto LABEL_34;
      }
    }
    v16 = 0;
    goto LABEL_20;
  }
  KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
  v10 = (_QWORD *)WdLogNewEntry5_WdPower();
  v10[3] = *(int *)(v3 + 3944);
  v10[4] = *(int *)(v3 + 3948);
  v10[5] = 0LL;
  WdLogEvent5_WdPower(v10);
  if ( (_DWORD)v4 == 2 )
    *(_DWORD *)(v3 + 3948) = 1;
  if ( !*(_DWORD *)(v3 + 3888) && ((_DWORD)v4 != 1 || *(_DWORD *)(v3 + 3948)) )
  {
    v11 = *(_DWORD *)(v3 + 3944);
    if ( v11 == 3 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdPower();
      v23[3] = v3;
      v23[4] = 0LL;
      v23[5] = 0LL;
      WdLogEvent5_WdPower(v23);
      DpiRequestDevicePowerIrp(v3, 4LL);
      DpiSetDevicePowerTransitionState(v3, 4);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v11 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdPower();
      v12[3] = v3;
      v12[4] = 0LL;
      v12[5] = 0LL;
      WdLogEvent5_WdPower(v12);
      DpiSetDevicePowerTransitionState(v3, 1);
      v13 = (_QWORD *)(v3 + 3792);
      if ( !*(_QWORD *)(v3 + 3792) )
      {
        *(_DWORD *)(v3 + 3816) = 1;
        v27 = *(_QWORD **)(v3 + 3776);
        if ( *v27 != v3 + 3768 )
          __fastfail(3u);
        *(_QWORD *)(v3 + 3800) = v27;
        *v13 = v3 + 3768;
        *v27 = v13;
        *(_QWORD *)(v3 + 3776) = v13;
        KeSetEvent((PRKEVENT)(v3 + 3736), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 3944) - 4) > 1 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
  p_LockHandle = &LockHandle;
LABEL_23:
  KeReleaseInStackQueuedSpinLock(p_LockHandle);
}
