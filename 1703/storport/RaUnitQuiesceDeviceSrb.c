/*
 * XREFs of RaUnitQuiesceDeviceSrb @ 0x1C000F570
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 * Callees:
 *     <none>
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
    *(_QWORD *)(a1 + 1568) = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(a1 + 1560),
      (PIO_WORKITEM_ROUTINE)RaidUnitQuiesceDeviceWorkRoutine,
      CriticalWorkQueue,
      (PVOID)(a1 + 1560));
    return 259LL;
  }
}
