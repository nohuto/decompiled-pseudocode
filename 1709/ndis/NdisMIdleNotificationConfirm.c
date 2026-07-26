/*
 * XREFs of NdisMIdleNotificationConfirm @ 0x1C006F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelWaitWake @ 0x1C001F088 (ndisCancelWaitWake.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C001F308 (ndisCancelWakeUpDpcTimer.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072390 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0079984 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisRequestWaitWake @ 0x1C00AE030 (ndisRequestWaitWake.c)
 *     ndisRequestDeviceLowPower @ 0x1C00C6A7C (ndisRequestDeviceLowPower.c)
 */

void __fastcall NdisMIdleNotificationConfirm(struct _NDIS_MINIPORT_BLOCK *Context, unsigned int a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  KIRQL v5; // al
  unsigned int Value; // ecx
  KIRQL v7; // bl
  int v8; // eax
  int v9; // r15d
  _NDIS_SELECTIVE_SUSPEND *v10; // rbx
  int v11; // eax
  int v12; // ebp
  _NDIS_SELECTIVE_SUSPEND *v13; // rbx
  KIRQL v14; // al
  KIRQL v15; // bl

  SelectiveSuspend = Context->SelectiveSuspend;
  if ( (unsigned __int8)byte_1C0098756 >= 4u )
    WPP_SF_qD(0xFu, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, (__int64)Context, a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  v7 = v5;
  if ( (Value & 0x100) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisAoAcIdleRequestConfirm(Context);
  }
  else
  {
    SelectiveSuspend->Flags.Value = Value | 8;
    KeClearEvent(&SelectiveSuspend->PowerSuspendCompleteEvent);
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
    ndisCancelWakeUpDpcTimer((__int64)Context);
    ndisCancelWaitWake((__int64)Context);
    v8 = ndisRequestWaitWake(Context, ndisIdleWaitWakeCallback);
    v9 = v8;
    if ( v8 != 259 )
    {
      v10 = Context->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(Context, 0x301u, v8);
      v10->LastUnexpectedFailureLine[1] = v10->LastUnexpectedFailureLine[0];
      v10->LastUnexpectedFailureLine[0] = 769;
      if ( (unsigned __int8)byte_1C0098756 >= 2u )
        WPP_SF_dq(0x10u, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, v9, Context);
    }
    SelectiveSuspend->LastRequestedIdlePowerState = a2;
    v11 = ndisRequestDeviceLowPower(Context, a2, &ndisPowerSuspendRequestComplete, Context, 3);
    v12 = v11;
    if ( v11 == 259 )
    {
      KeWaitForSingleObject(&SelectiveSuspend->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
    }
    else
    {
      v13 = Context->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(Context, 0x31Bu, v11);
      v13->LastUnexpectedFailureLine[1] = v13->LastUnexpectedFailureLine[0];
      v13->LastUnexpectedFailureLine[0] = 795;
      if ( (unsigned __int8)byte_1C0098756 >= 2u )
        WPP_SF_dq(0x11u, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, v12, Context);
      v14 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
      SelectiveSuspend->Flags.Value &= ~8u;
      v15 = v14;
      KeSetEvent(&SelectiveSuspend->PowerSuspendCompleteEvent, 0, 0);
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v15);
    }
    if ( (unsigned __int8)byte_1C0098756 >= 4u )
      WPP_SF_q(0x12u, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, (__int64)Context);
  }
}
