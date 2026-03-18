/*
 * XREFs of AcpiDeviceResetInvokeReset @ 0x1C004ACD4
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C00874E0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C00021C0 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C0002A38 (ACPIDeviceInitializePowerRequest.c)
 *     AcpiResetDeviceAlreadyProcessed @ 0x1C004AF58 (AcpiResetDeviceAlreadyProcessed.c)
 */

__int64 __fastcall AcpiDeviceResetInvokeReset(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  KIRQL v8; // bp
  bool v9; // zf
  _QWORD **v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r10
  __int64 v13; // r10
  int v14; // edx

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v7 = *(_QWORD *)(a1 + 904);
  v8 = v4;
  v9 = *(_BYTE *)(v7 + 16) == 0;
  *(_QWORD *)(v7 + 24) = a2;
  if ( v9 )
  {
    v10 = (_QWORD **)(*(_QWORD *)(v7 + 72) + 48LL);
    v11 = *v10;
    if ( *v10 != v10 )
    {
      do
      {
        v12 = v11 - 5;
        v11 = (_QWORD *)*v11;
        if ( !(unsigned __int8)AcpiResetDeviceAlreadyProcessed(*(_QWORD *)(v7 + 72), v12, v5, v6) )
        {
          *(_QWORD *)(*(_QWORD *)(v13 + 32) + 952LL) |= 0x10000000uLL;
          ACPIDeviceInitializePowerRequest(*(_QWORD *)(v13 + 32), 4, 0LL, 0LL, 0, 0, 0);
        }
      }
      while ( v11 != (_QWORD *)(*(_QWORD *)(v7 + 72) + 48LL) );
    }
    ACPIDeviceInternalSynchronizeRequest((_QWORD *)a1, (__int64)AcpiDeviceResetCompleteReset, v7);
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 336);
    *(_QWORD *)(*(_QWORD *)(v7 + 72) + 16LL) |= 0x2000uLL;
    ACPIDeviceInitializePowerRequest(a1, v14, (_SLIST_ENTRY *)AcpiDeviceResetCompleteReset, v7, 0, 0, 0);
  }
  KeReleaseSpinLock(&AcpiPowerLock, v8);
  return 259LL;
}
