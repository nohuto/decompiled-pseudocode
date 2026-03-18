/*
 * XREFs of OSNotifyCreate @ 0x1C002E5E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C002010C (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreateDevice @ 0x1C002E708 (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C002E808 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreatePowerResource @ 0x1C002E99C (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateProcessor @ 0x1C002EA1C (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C002EAFC (OSNotifyCreateThermalZone.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, ULONG_PTR a2)
{
  int v4; // edx
  KIRQL v5; // si
  char v6; // di
  char Device; // al
  int v8; // edx

  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2);
      goto LABEL_12;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
      goto LABEL_12;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      goto LABEL_12;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      goto LABEL_12;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
LABEL_12:
      v6 = Device;
      goto LABEL_13;
  }
  LOBYTE(v4) = 2;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v4,
    21,
    10,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    a1);
  v6 = 0;
LABEL_13:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  dword_1C00678C0 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
  byte_1C00678C4 = 0;
  WPP_RECORDER_SF_qsL(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    6,
    11,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    a2,
    (__int64)&dword_1C00678C0,
    v6);
  return 0LL;
}
