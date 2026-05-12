/*
 * XREFs of StorPortAdapterPowerRequiredStep2 @ 0x1C0036AD0
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C00369E0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     McTemplateK0pqt @ 0x1C003418C (McTemplateK0pqt.c)
 */

void __fastcall StorPortAdapterPowerRequiredStep2(PVOID Context)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  __int64 v5; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 636) + 8LL) + 12LL) & 1) != 0
    || *((_DWORD *)Context + 67) == 1 && (*((_BYTE *)Context + 108) & 2) == 0
    || PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)1,
         (PREQUEST_POWER_COMPLETE)StorPortAdapterPoFxD0Completion,
         Context,
         0LL) != 259 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 636));
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      {
        LODWORD(v5) = 0;
        LODWORD(Contexta) = *((_DWORD *)Context + 14);
        McTemplateK0pqt(v2, &EventAdapterPowerRequiredStop, v3, **((_QWORD **)Context + 636), Contexta, v5);
      }
    }
  }
  else
  {
    *((_BYTE *)Context + 108) |= 1u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
