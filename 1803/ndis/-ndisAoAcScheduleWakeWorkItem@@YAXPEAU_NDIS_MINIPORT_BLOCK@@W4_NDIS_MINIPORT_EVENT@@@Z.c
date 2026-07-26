/*
 * XREFs of ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0072EAC
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C006FB80 (NdisMIdleNotificationCompleteEx.c)
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0074650 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     McTemplateK0jqx @ 0x1C0065DD8 (McTemplateK0jqx.c)
 */

void __fastcall ndisAoAcScheduleWakeWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // bp
  __int64 v6; // rcx

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( !AoAc->WakeWorkItemScheduled && ndisReferenceMiniport((__int64)a1) )
  {
    AoAc->WakeWorkItemScheduled = 1;
    AoAc->WakeWorkItemWakeReason = a2;
    if ( a2 == NdisMEventD0_AoAcWake )
      AoAc->WakeFlags.Value |= 1u;
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      McTemplateK0jqx(
        v6,
        &DeviceWaitWakeComplete,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value);
    if ( (unsigned __int8)byte_1C0099610 >= 4u )
      WPP_SF_qZ(0x24u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)a1, &a1->pAdapterInstanceName->Length);
    ndisScheduleWorkItemInternal((__int64)&AoAc->WakeWorkItem);
  }
  KeReleaseSpinLock(&AoAc->Lock, v5);
}
