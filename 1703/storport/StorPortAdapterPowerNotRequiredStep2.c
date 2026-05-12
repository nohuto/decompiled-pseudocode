/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2 @ 0x1C001DB08
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C001DAB0 (StorPortAdapterPowerNotRequiredStep1.c)
 * Callees:
 *     Template_pqt @ 0x1C0037E00 (Template_pqt.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep2(PVOID Context)
{
  char v2; // di
  bool v3; // cf
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 636) + 8LL) + 12LL) & 2) == 0
    && *((_DWORD *)Context + 67) == 1
    && PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)4,
         (PREQUEST_POWER_COMPLETE)StorPortAdapterPoFxD3Completion,
         Context,
         0LL) == 259 )
  {
    *((_BYTE *)Context + 108) |= 2u;
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v3 = *((_BYTE *)Context + 108) < 0x80u;
  *((_QWORD *)Context + 671) = MEMORY[0xFFFFF78000000008];
  v4 = *((_QWORD *)Context + 636);
  if ( v3 )
  {
    *(_DWORD *)(v4 + 20) &= ~8u;
  }
  else
  {
    *(_DWORD *)(v4 + 20) |= 8u;
    if ( !*((_QWORD *)Context + 670) )
      *((_QWORD *)Context + 670) = *((_QWORD *)Context + 671);
  }
  result = PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 636));
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      return Template_pqt(
               v6,
               (unsigned int)&EventAdapterPowerNotRequiredStop,
               v7,
               **((_QWORD **)Context + 636),
               *((_DWORD *)Context + 14),
               v2);
  }
  return result;
}
