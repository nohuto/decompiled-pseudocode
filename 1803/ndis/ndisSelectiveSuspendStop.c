/*
 * XREFs of ndisSelectiveSuspendStop @ 0x1C0071928
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0074268 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPowerSaveStop @ 0x1C00B11E8 (ndisPowerSaveStop.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BC208 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisWdfNotifySystemPower @ 0x1C00EECC0 (ndisWdfNotifySystemPower.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisCancelWaitWake @ 0x1C0010580 (ndisCancelWaitWake.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006ECF4 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006F2A4 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006F340 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisCancelIdleRequestSync @ 0x1C0070648 (ndisCancelIdleRequestSync.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C0070AF0 (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

void __fastcall ndisSelectiveSuspendStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v5; // r12
  char v6; // r14
  unsigned int v7; // r15d
  KIRQL v8; // bp
  char v9; // r13
  bool v10; // zf
  KIRQL v11; // dl
  unsigned int Value; // eax
  __int64 v13; // rdx
  KIRQL v14; // al

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = 0;
  v6 = 0;
  v7 = a1->Flags & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  v9 = ndisIsPowerReferencedForSelectiveSuspend((__int64)SelectiveSuspend, v7 != 0) == 0;
  if ( v7
    && !SelectiveSuspend->PendingControlOps.Value
    && !SelectiveSuspend->PendingPnPEventCount
    && !SelectiveSuspend->PendingDirectOidCount
    && !SelectiveSuspend->PendingCancelDirectOidCount
    && !SelectiveSuspend->PendingSendNblCount
    && !SelectiveSuspend->PendingCancelSendCount
    && !SelectiveSuspend->PendingReceiveReturnCount
    && !SelectiveSuspend->StopFlags.Value )
  {
    v6 = 1;
    KeClearEvent(&SelectiveSuspend->WdfD0LockedForSSEvent);
  }
  if ( (unsigned __int8)byte_1C0099616 >= 4u )
    WPP_SF_qD(0x21u, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, (__int64)a1, a2);
  if ( a2 > 6 )
  {
    switch ( a2 )
    {
      case 7:
        SelectiveSuspend->StopFlags.Value |= 0x40u;
        break;
      case 8:
        ++SelectiveSuspend->PendingPnPOpCount;
        SelectiveSuspend->StopFlags.Value |= 0x80u;
        break;
      case 11:
        SelectiveSuspend->StopFlags.Value |= 0x400u;
        break;
      case 13:
        SelectiveSuspend->StopFlags.Value |= 0x1000u;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 6:
        SelectiveSuspend->StopFlags.Value |= 0x20u;
        break;
      case 1:
        SelectiveSuspend->StopFlags.Value |= 1u;
        break;
      case 2:
        SelectiveSuspend->StopFlags.Value |= 2u;
        break;
      case 3:
        SelectiveSuspend->StopFlags.Value |= 4u;
        SelectiveSuspend->Flags.Value |= 0x400u;
        break;
      case 4:
        SelectiveSuspend->StopFlags.Value |= 8u;
        break;
      case 5:
        SelectiveSuspend->StopFlags.Value |= 0x10u;
        break;
    }
  }
  ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v9, a2, 0);
  if ( v7 )
  {
    if ( v6 )
      goto LABEL_42;
    v10 = KeReadStateEvent(&SelectiveSuspend->WdfD0LockedForSSEvent) == 0;
  }
  else
  {
    Value = SelectiveSuspend->Flags.Value;
    if ( (Value & 1) != 0 )
    {
      KeCancelTimer(&SelectiveSuspend->IdleTimer.Timer);
      SelectiveSuspend->Flags.Value &= ~1u;
      v5 = 1;
      Value = SelectiveSuspend->Flags.Value;
    }
    v10 = (Value & 0x200) == 0;
  }
  if ( !v10 )
  {
    v11 = v8;
LABEL_51:
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v11);
    return;
  }
LABEL_42:
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
  if ( !v7 )
  {
    ndisCancelWaitWake((__int64)a1);
    if ( v5 )
    {
      KeFlushQueuedDpcs();
      KeWaitForSingleObject(&SelectiveSuspend->IdleWorkItemCompleteEvent, Executive, 0, 0, 0LL);
    }
    ndisCancelIdleRequestSync(a1, a2, 0, 1);
    v14 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value |= 0x200u;
    v11 = v14;
    goto LABEL_51;
  }
  if ( a2 == 6 )
  {
    ndisWdfAcquirePowerReferenceHelper(a1, 0, 0);
    ndisWdfSelectiveSuspendResumeOperations(a1, v13, 1);
  }
  else if ( v6 )
  {
    ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
  }
  else
  {
    KeWaitForSingleObject(&SelectiveSuspend->WdfD0LockedForSSEvent, Executive, 0, 0, 0LL);
  }
}
