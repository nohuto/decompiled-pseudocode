/*
 * XREFs of StorPortAdapterPowerRequiredStep2 @ 0x1C001DF8C
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C001DF00 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     Template_pqt @ 0x1C0037E00 (Template_pqt.c)
 */

void __fastcall StorPortAdapterPowerRequiredStep2(PVOID Context)
{
  int v2; // ecx
  int v3; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 636) + 8LL) + 12LL) & 1) != 0
    || *((_DWORD *)Context + 67) == 1 && (*((_BYTE *)Context + 108) & 2) == 0
    || PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)1,
         StorPortAdapterPoFxD0Completion,
         Context,
         0LL) != 259 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 636));
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_pqt(
          v2,
          (unsigned int)&EventAdapterPowerRequiredStop,
          v3,
          **((_QWORD **)Context + 636),
          *((_DWORD *)Context + 14),
          0);
    }
  }
  else
  {
    *((_BYTE *)Context + 108) |= 1u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
