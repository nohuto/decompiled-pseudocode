/*
 * XREFs of NdisMIdleNotificationConfirm @ 0x1C006FC80
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelWaitWake @ 0x1C0010580 (ndisCancelWaitWake.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C0010794 (ndisCancelWakeUpDpcTimer.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072C0C (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007A148 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisRequestDeviceLowPower @ 0x1C00B0C28 (ndisRequestDeviceLowPower.c)
 *     ndisRequestWaitWake @ 0x1C00CA3B0 (ndisRequestWaitWake.c)
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
  if ( (unsigned __int8)byte_1C0099616 >= 4u )
    WPP_SF_qD(0xFu, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, (__int64)Context, a2);
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
      NdisTraceLoggingUnexpectedSelectiveSuspendError(Context, 0x320u, v8);
      v10->LastUnexpectedFailureLine[1] = v10->LastUnexpectedFailureLine[0];
      v10->LastUnexpectedFailureLine[0] = 800;
      if ( (unsigned __int8)byte_1C0099616 >= 2u )
        WPP_SF_dq(0x10u, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, v9, Context);
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
      NdisTraceLoggingUnexpectedSelectiveSuspendError(Context, 0x33Au, v11);
      v13->LastUnexpectedFailureLine[1] = v13->LastUnexpectedFailureLine[0];
      v13->LastUnexpectedFailureLine[0] = 826;
      if ( (unsigned __int8)byte_1C0099616 >= 2u )
        WPP_SF_dq(0x11u, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, v12, Context);
      v14 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
      SelectiveSuspend->Flags.Value &= ~8u;
      v15 = v14;
      KeSetEvent(&SelectiveSuspend->PowerSuspendCompleteEvent, 0, 0);
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v15);
    }
    if ( (unsigned __int8)byte_1C0099616 >= 4u )
      WPP_SF_q(0x12u, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, (__int64)Context);
  }
}
