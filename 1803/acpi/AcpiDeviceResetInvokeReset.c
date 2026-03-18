/*
 * XREFs of AcpiDeviceResetInvokeReset @ 0x1C0020BA4
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0075FF0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C001A5DC (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001AB84 (ACPIDeviceInternalSynchronizeRequest.c)
 *     AcpiResetDeviceAlreadyProcessed @ 0x1C0020E2C (AcpiResetDeviceAlreadyProcessed.c)
 */

__int64 __fastcall AcpiDeviceResetInvokeReset(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // rdi
  KIRQL v7; // bp
  bool v8; // zf
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // r10
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // edx

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v6 = *(_QWORD *)(a1 + 904);
  v7 = v4;
  v8 = *(_BYTE *)(v6 + 16) == 0;
  *(_QWORD *)(v6 + 24) = a2;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v6 + 72);
    v10 = *(_QWORD **)(v9 + 48);
    if ( v10 != (_QWORD *)(v9 + 48) )
    {
      do
      {
        v11 = v10 - 5;
        v10 = (_QWORD *)*v10;
        if ( !(unsigned __int8)AcpiResetDeviceAlreadyProcessed(v9, v11, v5, v9) )
        {
          *(_QWORD *)(*(_QWORD *)(v13 + 32) + 952LL) |= 0x10000000uLL;
          ACPIDeviceInitializePowerRequest(*(_QWORD *)(v13 + 32), 4, 0LL, 0LL, 0, 0, 0);
          v12 = *(_QWORD *)(v6 + 72);
        }
        v9 = v12;
      }
      while ( v10 != (_QWORD *)(v12 + 48) );
    }
    ACPIDeviceInternalSynchronizeRequest(
      (_QWORD *)a1,
      (void (__fastcall *)(__int64, __int64, _QWORD))AcpiDeviceResetCompleteReset,
      v6);
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 336);
    *(_QWORD *)(*(_QWORD *)(v6 + 72) + 16LL) |= 0x2000uLL;
    ACPIDeviceInitializePowerRequest(
      a1,
      v14,
      (void (__fastcall *)(__int64, __int64, _QWORD))AcpiDeviceResetCompleteReset,
      v6,
      0,
      0,
      0);
  }
  KeReleaseSpinLock(&AcpiPowerLock, v7);
  return 259LL;
}
