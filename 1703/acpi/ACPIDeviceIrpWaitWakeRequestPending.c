/*
 * XREFs of ACPIDeviceIrpWaitWakeRequestPending @ 0x1C001E8B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C000DCF4 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C001EA0C (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001EF58 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0048950 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0049408 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 */

__int64 __fastcall ACPIDeviceIrpWaitWakeRequestPending(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  const char *v5; // rcx
  __int64 v6; // rsi
  char v7; // r8
  const char *v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rax
  KIRQL Irql; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD **)(a4 + 40);
  v5 = (const char *)&unk_1C0066CD0;
  v6 = *(_QWORD *)(a4 + 200);
  v7 = 0;
  v10 = (const char *)&unk_1C0066CD0;
  if ( v4 )
  {
    v11 = v4[1];
    v7 = *(_QWORD *)(a4 + 40);
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v4[70];
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = (const char *)v4[71];
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0x11u,
    0x22u,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a4,
    a2,
    v7,
    v5,
    v10);
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  ++*(_DWORD *)(a4 + 112);
  if ( a2 < 0 )
  {
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    *(_DWORD *)(a4 + 256) = a2;
    ACPIDeviceIrpWaitWakeRequestComplete(a4);
  }
  else
  {
    v12 = (__int64 *)qword_1C0077038;
    if ( *(__int64 **)qword_1C0077038 != &AcpiPowerWaitWakeList )
      __fastfail(3u);
    *(_QWORD *)a4 = &AcpiPowerWaitWakeList;
    *(_QWORD *)(a4 + 8) = v12;
    *v12 = a4;
    qword_1C0077038 = a4;
    if ( *(_BYTE *)(v6 + 68) )
    {
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      ACPIDeviceCancelWaitWakeIrp(v4[90], v6);
    }
    else
    {
      *(_DWORD *)(a4 + 56) |= 0x40u;
      ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
      _InterlockedExchange64((volatile __int64 *)(v6 + 104), (__int64)ACPIDeviceCancelWaitWakeIrp);
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      IoReleaseCancelSpinLock(Irql);
    }
  }
  return ACPIDereferenceWaitWakePowerRequest(a4);
}
