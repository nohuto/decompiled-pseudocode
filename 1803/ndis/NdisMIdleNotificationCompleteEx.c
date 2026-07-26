/*
 * XREFs of NdisMIdleNotificationCompleteEx @ 0x1C006FB80
 * Callers:
 *     NdisMIdleNotificationComplete @ 0x1C006FB60 (NdisMIdleNotificationComplete.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisRequestPowerResume @ 0x1C0071150 (ndisRequestPowerResume.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C0071784 (ndisSelectiveSuspendResumeOperations.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0072EAC (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

void __fastcall NdisMIdleNotificationCompleteEx(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v5; // si
  unsigned int Value; // eax
  __int64 v7; // r8
  __int64 v8; // r9

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  ndisLogMiniportEvent((__int64)a1, 0x11u);
  if ( (unsigned __int8)byte_1C0099616 >= 4u )
    WPP_SF_qD(0x1Bu, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, (__int64)a1, a2);
  SelectiveSuspend->Flags.Value &= ~4u;
  KeSetEvent(&SelectiveSuspend->IdleNotificationCompleteEvent, 0, 0);
  SelectiveSuspend->Flags.Value &= ~0x80u;
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x100) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    if ( a2 >= 0 && a1->CurrentDevicePowerState == PowerDeviceD3 )
      ndisAoAcScheduleWakeWorkItem(a1, NdisMEventD0_AoAcSurpriseWake);
  }
  else if ( (Value & 0x10) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisRequestPowerResume(a1);
  }
  else
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisSelectiveSuspendResumeOperations(a1, 0LL);
  }
  ndisDereferenceMiniport((__int64)a1, 0x15u, v7, v8);
}
