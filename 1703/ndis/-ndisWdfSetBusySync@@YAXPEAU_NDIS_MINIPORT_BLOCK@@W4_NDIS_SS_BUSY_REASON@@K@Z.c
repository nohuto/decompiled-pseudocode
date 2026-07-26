/*
 * XREFs of ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006D794
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C24 (ndisMResetMiniportInternal.c)
 *     ndisSetBusySync @ 0x1C006FBE0 (ndisSetBusySync.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_qq @ 0x1C004FC94 (Template_qq.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006CB88 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006CDF4 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006D378 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C006EB30 (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

void __fastcall ndisWdfSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int32 a2, int a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v7; // r14
  KIRQL v8; // al
  __int64 v9; // rdx
  KIRQL v10; // r15
  _DWORD *v11; // rcx
  PKSPIN_LOCK v12; // rcx
  __int64 v13; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-28h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  LOBYTE(v9) = 1;
  v10 = v8;
  if ( (unsigned __int8)ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v9) )
  {
    ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, (enum _NDIS_SS_BUSY_REASON)a2, a3);
    ndisSelectiveSuspendSetResumeBusyReason(v11, 0, a2, a3);
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v10);
  }
  else
  {
    if ( !SelectiveSuspend->PendingControlOps.Value
      && !SelectiveSuspend->PendingPnPEventCount
      && !SelectiveSuspend->PendingDirectOidCount
      && !SelectiveSuspend->PendingCancelDirectOidCount
      && !SelectiveSuspend->PendingSendNblCount
      && !SelectiveSuspend->PendingCancelSendCount
      && !SelectiveSuspend->PendingReceiveReturnCount
      && !SelectiveSuspend->StopFlags.Value )
    {
      v7 = 1;
      KeClearEvent(&SelectiveSuspend->WdfD0LockedForSSEvent);
    }
    ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, (enum _NDIS_SS_BUSY_REASON)a2, a3);
    KeReleaseSpinLock(v12, v10);
    if ( (unsigned __int8)byte_1C0092616 >= 4u )
      WPP_SF_qD(0x24u, &WPP_3059abd58ba5345e836db04510415190_Traceguids, (__int64)a1, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    {
      LODWORD(Timeout) = a2;
      Template_qq(v13, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, (__int64)Timeout);
    }
    if ( v7 )
      ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
    else
      KeWaitForSingleObject(&SelectiveSuspend->WdfD0LockedForSSEvent, Executive, 0, 0, 0LL);
  }
}
