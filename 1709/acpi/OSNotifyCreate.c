/*
 * XREFs of OSNotifyCreate @ 0x1C001C840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     OSNotifyCreateDevice @ 0x1C001A86C (OSNotifyCreateDevice.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C001C944 (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0028A5C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C0029320 (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C002A160 (OSNotifyCreateThermalZone.c)
 *     OSNotifyCreatePowerResource @ 0x1C0051F1C (OSNotifyCreatePowerResource.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, ULONG_PTR a2)
{
  int v4; // edx
  KIRQL v5; // si
  char Device; // al
  char v7; // di
  int v8; // edx

  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2, 0LL);
      break;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
      break;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      break;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      break;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
      break;
    default:
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        21,
        10,
        (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
        a1);
      v7 = 0;
      goto LABEL_4;
  }
  v7 = Device;
LABEL_4:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  dword_1C0079638 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
  byte_1C007963C = 0;
  WPP_RECORDER_SF_qsL(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    6,
    11,
    (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
    a2,
    (__int64)&dword_1C0079638,
    v7);
  return 0LL;
}
