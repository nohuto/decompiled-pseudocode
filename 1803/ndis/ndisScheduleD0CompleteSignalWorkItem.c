/*
 * XREFs of ndisScheduleD0CompleteSignalWorkItem @ 0x1C0066528
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C000FCCC (ndisRequestDevicePowerD0.c)
 *     ndisSetPowerResumeComplete @ 0x1C0071CE0 (ndisSetPowerResumeComplete.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001A1A0 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisScheduleD0CompleteSignalWorkItem(__int64 a1, int a2)
{
  KIRQL v4; // si
  bool v5; // zf

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_BYTE *)(a1 + 4596) == 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1709405;
  if ( v5 && ndisReferenceMiniport(a1) )
  {
    *(_BYTE *)(a1 + 4596) = 1;
    *(_DWORD *)(a1 + 4592) = a2;
    ndisScheduleWorkItemInternal(a1 + 4512);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
