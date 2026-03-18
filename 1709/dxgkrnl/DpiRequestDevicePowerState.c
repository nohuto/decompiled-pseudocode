/*
 * XREFs of DpiRequestDevicePowerState @ 0x1C002D9A0
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C001F280 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiSuspendAdapterDpc @ 0x1C002DEB0 (DpiSuspendAdapterDpc.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0173190 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 *     DxgkReportDevicePoweredOn @ 0x1C0021A30 (DxgkReportDevicePoweredOn.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C002D578 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C002D5F8 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C002D858 (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C002DD88 (DpiSetDevicePowerTransitionState.c)
 *     DpiCancelAsyncRequest @ 0x1C0033A24 (DpiCancelAsyncRequest.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x1C0033A90 (DpiSendAsyncResumeAdapterRequest.c)
 */

void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  KSPIN_LOCK *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // r8
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+48h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdPower();
  v6[3] = v5;
  v6[4] = v3;
  v6[5] = v4;
  WdLogEvent5_WdPower(v6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pqq(v7, &Dxgk_DpiRequestDevicePowerState, v8, *(_QWORD *)(v3 + 3728), v5, v4);
  v9 = (KSPIN_LOCK *)(v3 + 3904);
  if ( (_DWORD)v5 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
    v10 = (_QWORD *)WdLogNewEntry5_WdPower();
    v10[3] = *(int *)(v3 + 3968);
    v10[4] = *(int *)(v3 + 3972);
    v10[5] = 0LL;
    WdLogEvent5_WdPower(v10);
    if ( *(_DWORD *)(v3 + 3808) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 3968) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v13 + 24) = 3818LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(v3 + 3972) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) + 3912LL), 1u);
    }
    if ( *(_DWORD *)(v3 + 3968) == 1 )
    {
      DpiCancelAsyncRequest(v3);
    }
    else
    {
      if ( *(_DWORD *)(v3 + 3968) != 2 )
      {
        if ( *(_DWORD *)(v3 + 3968) == 3 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdPower();
          v16[3] = v3;
          v16[4] = 0LL;
          v16[5] = 0LL;
          WdLogEvent5_WdPower(v16);
          DpiSendAsyncResumeAdapterRequest(v3);
          v15 = 7LL;
        }
        else
        {
          if ( *(_DWORD *)(v3 + 3968) != 4 )
          {
            if ( *(_DWORD *)(v3 + 3968) != 5 )
              goto LABEL_26;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
            {
              LODWORD(v27) = v4;
              LODWORD(v26) = 1;
              McTemplateK0pqq(
                (unsigned int)(*(_DWORD *)(v3 + 3968) - 4),
                &EventPowerRequestDuringD3,
                v12,
                *(_QWORD *)(v3 + 3728),
                v26,
                v27);
            }
          }
          v14 = (_QWORD *)WdLogNewEntry5_WdPower();
          v14[3] = v3;
          v14[4] = 0LL;
          v14[5] = 0LL;
          WdLogEvent5_WdPower(v14);
          DpiRequestDevicePowerIrp(v3, 1);
          v15 = 6LL;
        }
LABEL_25:
        DpiSetDevicePowerTransitionState(v3, v15);
LABEL_26:
        if ( (_DWORD)v4 != 2 )
        {
LABEL_29:
          p_LockHandle = &LockHandle;
          goto LABEL_46;
        }
LABEL_27:
        if ( *(_DWORD *)(v3 + 3968) != 6 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdPower();
          v18[3] = v3;
          v18[4] = *(int *)(v3 + 3968);
          v18[5] = 2LL;
          WdLogEvent5_WdPower(v18);
          DxgkReportDevicePoweredOn(*(_QWORD *)(v3 + 3728));
        }
        goto LABEL_29;
      }
      if ( (_DWORD)v4 == 2 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdPower();
        v17[3] = v3;
        v17[4] = 0LL;
        v17[5] = 0LL;
        WdLogEvent5_WdPower(v17);
        goto LABEL_27;
      }
    }
    v15 = 0LL;
    goto LABEL_25;
  }
  KeAcquireInStackQueuedSpinLock(v9, &v29);
  v20 = (_QWORD *)WdLogNewEntry5_WdPower();
  v20[3] = *(int *)(v3 + 3968);
  v20[4] = *(int *)(v3 + 3972);
  v20[5] = 0LL;
  WdLogEvent5_WdPower(v20);
  if ( (_DWORD)v4 == 2 )
    *(_DWORD *)(v3 + 3972) = 1;
  if ( !*(_DWORD *)(v3 + 3912) && ((_DWORD)v4 != 1 || *(_DWORD *)(v3 + 3972)) )
  {
    v21 = *(_DWORD *)(v3 + 3968);
    if ( v21 == 3 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdPower();
      v22[3] = v3;
      v22[4] = 0LL;
      v22[5] = 0LL;
      WdLogEvent5_WdPower(v22);
      DpiRequestDevicePowerIrp(v3, 4);
      DpiSetDevicePowerTransitionState(v3, 4LL);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v21 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdPower();
      v23[3] = v3;
      v23[4] = 0LL;
      v23[5] = 0LL;
      WdLogEvent5_WdPower(v23);
      DpiSetDevicePowerTransitionState(v3, 1LL);
      v24 = (_QWORD *)(v3 + 3816);
      if ( !*(_QWORD *)(v3 + 3816) )
      {
        *(_DWORD *)(v3 + 3840) = 1;
        v25 = *(_QWORD **)(v3 + 3800);
        if ( *v25 != v3 + 3792 )
          __fastfail(3u);
        *(_QWORD *)(v3 + 3824) = v25;
        *v24 = v3 + 3792;
        *v25 = v24;
        *(_QWORD *)(v3 + 3800) = v24;
        KeSetEvent((PRKEVENT)(v3 + 3760), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 3968) - 4) > 1 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
  p_LockHandle = &v29;
LABEL_46:
  KeReleaseInStackQueuedSpinLock(p_LockHandle);
}
