/*
 * XREFs of DecrementActivePinCount @ 0x1C0018F84
 * Callers:
 *     PinSetDeviceState @ 0x1C0019000 (PinSetDeviceState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecrementActivePinCount(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  void *v3; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v2 = *(_QWORD *)(v1 + 16);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 692), 0xFFFFFFFF) == 1 )
  {
    v3 = *(void **)(v2 + 504);
    if ( v3 )
      PoClearPowerRequest(v3, PowerRequestSystemRequired);
    *(_QWORD *)(v2 + 512) = PoRegisterDeviceForIdleDetection(
                              *(PDEVICE_OBJECT *)(v1 + 32),
                              *(_DWORD *)(v2 + 528),
                              *(_DWORD *)(v2 + 532),
                              (DEVICE_POWER_STATE)*(_DWORD *)(v2 + 524));
  }
  return 0LL;
}
