/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2 @ 0x1C00368B8
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0036840 (StorPortAdapterPowerNotRequiredStep1.c)
 * Callees:
 *     McTemplateK0pqt @ 0x1C003418C (McTemplateK0pqt.c)
 */

NTSTATUS __fastcall StorPortAdapterPowerNotRequiredStep2(PVOID Context)
{
  unsigned __int8 v2; // di
  bool v3; // sf
  __int64 v4; // rcx
  int v5; // eax
  NTSTATUS result; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
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
  v3 = *((char *)Context + 108) < 0;
  v4 = *((_QWORD *)Context + 636);
  *((_QWORD *)Context + 671) = MEMORY[0xFFFFF78000000008];
  v5 = *(_DWORD *)(v4 + 20);
  if ( v3 )
  {
    *(_DWORD *)(v4 + 20) = v5 | 8;
    if ( !*((_QWORD *)Context + 670) )
      *((_QWORD *)Context + 670) = *((_QWORD *)Context + 671);
  }
  else
  {
    *(_DWORD *)(v4 + 20) = v5 & 0xFFFFFFF7;
  }
  result = PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 636));
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      LODWORD(v10) = v2;
      LODWORD(Contexta) = *((_DWORD *)Context + 14);
      return McTemplateK0pqt(v7, &EventAdapterPowerNotRequiredStop, v8, **((_QWORD **)Context + 636), Contexta, v10);
    }
  }
  return result;
}
