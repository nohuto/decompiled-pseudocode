/*
 * XREFs of ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0010070
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0001310 (ACPIDeviceCancelWaitWakeIrp.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00101CC (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0010234 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C00487EC (ACPIDeviceIrpWaitWakeRequestComplete.c)
 */

__int64 __fastcall ACPIDeviceIrpWaitWakeRequestPending(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  const char *v5; // rcx
  __int64 v6; // rsi
  char v7; // r8
  const char *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  KIRQL Irql; // [rsp+68h] [rbp+10h] BYREF

  v4 = (_QWORD *)a4[5];
  v5 = (const char *)&unk_1C0067B08;
  v6 = a4[25];
  v7 = 0;
  v10 = (const char *)&unk_1C0067B08;
  if ( v4 )
  {
    v11 = v4[1];
    v7 = a4[5];
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
    0x23u,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    (char)a4,
    a2,
    v7,
    v5,
    v10);
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  ++*((_DWORD *)a4 + 28);
  if ( a2 < 0 )
  {
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    *((_DWORD *)a4 + 64) = a2;
    ACPIDeviceIrpWaitWakeRequestComplete(a4);
  }
  else
  {
    v12 = (_QWORD *)qword_1C00790F8;
    if ( *(__int64 **)qword_1C00790F8 != &AcpiPowerWaitWakeList )
      __fastfail(3u);
    *a4 = &AcpiPowerWaitWakeList;
    a4[1] = v12;
    *v12 = a4;
    qword_1C00790F8 = (__int64)a4;
    if ( *(_BYTE *)(v6 + 68) )
    {
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      ACPIDeviceCancelWaitWakeIrp(v4[90], v6);
    }
    else
    {
      *((_DWORD *)a4 + 14) |= 0x40u;
      ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
      _InterlockedExchange64((volatile __int64 *)(v6 + 104), (__int64)ACPIDeviceCancelWaitWakeIrp);
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      IoReleaseCancelSpinLock(Irql);
    }
  }
  return ACPIDereferenceWaitWakePowerRequest(a4);
}
