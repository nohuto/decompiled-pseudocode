/*
 * XREFs of RaUnitQuiesceDeviceSrb @ 0x1C0010EA0
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQuiesceDeviceSrb(__int64 a1, IRP *a2)
{
  if ( *(int *)(a1 + 476) <= 0 )
  {
    *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
    return RaidCompleteRequestEx(a2, 0, 0);
  }
  else
  {
    *(_QWORD *)(a1 + 1600) = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(a1 + 1592),
      (PIO_WORKITEM_ROUTINE)RaidUnitQuiesceDeviceWorkRoutine,
      CriticalWorkQueue,
      (PVOID)(a1 + 1592));
    return 259LL;
  }
}
