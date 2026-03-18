/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C0009D50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0009B6C (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000DE58 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase6(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rax
  char v4; // r8
  void *v5; // rdx
  __int64 v6; // rcx
  POWER_STATE v7; // ebx
  struct _DEVICE_OBJECT *v8; // rdi
  KIRQL v9; // bl
  __int64 v11; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C0066CD0;
  v4 = 0;
  v5 = &unk_1C0066CD0;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = *(void **)(v1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(void **)(v1 + 568);
    }
  }
  v11 = (__int64)v5;
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v5,
    10,
    79,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a1,
    v4,
    (__int64)v2,
    v11);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v7.SystemState = *(_SYSTEM_POWER_STATE *)(v1 + 496);
  *(POWER_STATE *)(v1 + 336) = v7;
  v8 = *(struct _DEVICE_OBJECT **)(v1 + 720);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v8 )
    PoSetPowerState(v8, DevicePowerState, v7);
  *(_DWORD *)(a1 + 256) = 0;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 208), 0, 1);
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v9);
  return 0LL;
}
