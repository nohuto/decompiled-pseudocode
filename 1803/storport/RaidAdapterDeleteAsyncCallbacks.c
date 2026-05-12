/*
 * XREFs of RaidAdapterDeleteAsyncCallbacks @ 0x1C0025B64
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C0064554 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00647E0 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterCancelPauseTimer @ 0x1C00251DC (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDisConnectMSIInterrupt @ 0x1C0063870 (RaidAdapterDisConnectMSIInterrupt.c)
 *     RaidAdapterDisConnectNonMSIInterrupt @ 0x1C00638B8 (RaidAdapterDisConnectNonMSIInterrupt.c)
 */

void __fastcall RaidAdapterDeleteAsyncCallbacks(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 i; // rbx
  void *v8; // rcx
  void *v9; // rcx
  char v10; // al

  KeCancelTimer((PKTIMER)(a1 + 1664));
  KeCancelTimer((PKTIMER)(a1 + 5480));
  v2 = KfRaiseIrql(2u);
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 1856));
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 4216));
  KeLowerIrql(v2);
  KeFlushQueuedDpcs();
  if ( *(_BYTE *)(a1 + 4449) )
  {
    RaidAdapterDisConnectMSIInterrupt(a1);
    *(_QWORD *)(a1 + 4432) = 0LL;
    *(_BYTE *)(a1 + 4449) = 0;
  }
  else if ( *(_QWORD *)(a1 + 664) )
  {
    RaidAdapterDisConnectNonMSIInterrupt(a1);
  }
  v5 = *(void **)(a1 + 5096);
  if ( v5 )
  {
    PoUnregisterPowerSettingCallback(v5);
    *(_QWORD *)(a1 + 5096) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 5112);
  if ( v6 )
  {
    PoUnregisterCoalescingCallback(v6, v3, v4);
    *(_QWORD *)(a1 + 5112) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4896); i = (unsigned int)(i + 1) )
    PoUnregisterPowerSettingCallback(*(PVOID *)(*(_QWORD *)(a1 + 4912) + 8 * i));
  v8 = *(void **)(a1 + 4904);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_DWORD *)(a1 + 4896) = 0;
    *(_QWORD *)(a1 + 4904) = 0LL;
    *(_QWORD *)(a1 + 4912) = 0LL;
  }
  v9 = *(void **)(a1 + 5120);
  if ( v9 )
  {
    PoUnregisterPowerSettingCallback(v9);
    *(_QWORD *)(a1 + 5120) = 0LL;
  }
  v10 = *(_BYTE *)(a1 + 109);
  if ( (v10 & 8) != 0 )
  {
    *(_BYTE *)(a1 + 109) = v10 & 0xF7;
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5128), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5128));
  }
}
