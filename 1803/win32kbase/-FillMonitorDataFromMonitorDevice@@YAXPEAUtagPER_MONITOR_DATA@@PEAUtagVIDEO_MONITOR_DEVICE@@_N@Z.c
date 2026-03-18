/*
 * XREFs of ?FillMonitorDataFromMonitorDevice@@YAXPEAUtagPER_MONITOR_DATA@@PEAUtagVIDEO_MONITOR_DEVICE@@_N@Z @ 0x1C0052D14
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004B498 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FillMonitorDataFromMonitorDevice(
        struct tagPER_MONITOR_DATA *a1,
        struct tagVIDEO_MONITOR_DEVICE *a2,
        char a3)
{
  int v3; // eax
  int v4; // r9d
  _DWORD *v5; // rsi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  int v7; // ebx
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF

  *(_DWORD *)a1 = 0;
  v3 = 0;
  v4 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    *(_DWORD *)a1 = 1;
    v3 = 1;
    v4 = *(_DWORD *)a2;
  }
  if ( (v4 & 2) == 0 )
  {
    v3 |= 2u;
    *(_DWORD *)a1 = v3;
    v4 = *(_DWORD *)a2;
  }
  if ( v4 >= 0 )
  {
    v3 |= 0x80000000;
    *(_DWORD *)a1 = v3;
    v4 = *(_DWORD *)a2;
  }
  if ( (v4 & 0x40000000) == 0 )
    *(_DWORD *)a1 = v3 | 0x40000000;
  *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 1);
  *((_QWORD *)a1 + 1) = *((_QWORD *)a2 + 1);
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  if ( a3 )
  {
    *((_DWORD *)a1 + 5) = 0;
    v5 = (_DWORD *)((char *)a1 + 28);
    *((_DWORD *)a1 + 6) = 0;
    if ( (int)((__int64 (__fastcall *)(char *, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C01A1BE0)(
                (char *)a2 + 8,
                *((unsigned int *)a2 + 1),
                &Object,
                &DeviceObject) < 0
      || (AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject),
          wil_details_FeaturePropertyCache_ReportUsageToService(
            (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
            8395569LL,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0181C90,
            0,
            3),
          v7 = GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324CBu, 0LL, 0, v5, 4u, &v10, 1u, 0),
          ObfDereferenceObject(AttachedDeviceReference),
          ObfDereferenceObject(Object),
          v7 < 0) )
    {
      *v5 = -1;
    }
  }
}
