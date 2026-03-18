/*
 * XREFs of ACPIThermalStopZoneWorker @ 0x1C003DBCC
 * Callers:
 *     ACPIThermalWorker @ 0x1C0089A40 (ACPIThermalWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C00357B0 (ACPIUnregisterForDeviceNotifications.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C003BF8C (ACPIThermalCompletePendingIrps.c)
 *     ACPIThermalLoopEx @ 0x1C003CE8C (ACPIThermalLoopEx.c)
 *     AcpiThermalDestroyContraints @ 0x1C003E0B0 (AcpiThermalDestroyContraints.c)
 */

LONG __fastcall ACPIThermalStopZoneWorker(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rcx
  IRP *v4; // rcx
  void *v5; // rcx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  void *v8; // rcx
  KIRQL v9; // al
  __int64 v10; // r9
  _QWORD *v11; // r8

  v1 = *(_QWORD *)(a1 + 200);
  if ( *(_BYTE *)(v1 + 274) )
    IoCancelIrp(*(PIRP *)(v1 + 208));
  ACPIThermalCompletePendingIrps(a1);
  v3 = *(void **)(v1 + 240);
  if ( v3 )
  {
    IoUnregisterPlugPlayNotificationEx(v3);
    IoFreeIrp(*(PIRP *)(v1 + 208));
    ObfDereferenceObject(*(PVOID *)(v1 + 216));
    *(_QWORD *)(v1 + 240) = 0LL;
  }
  *(_QWORD *)(v1 + 208) = 0LL;
  *(_QWORD *)(v1 + 216) = 0LL;
  v4 = *(IRP **)(v1 + 192);
  if ( v4 )
  {
    IoFreeIrp(v4);
    *(_QWORD *)(v1 + 192) = 0LL;
  }
  v5 = *(void **)(v1 + 200);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *(_QWORD *)(v1 + 200) = 0LL;
  }
  v6 = *(volatile signed __int32 **)(v1 + 112);
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    *(_QWORD *)(v1 + 112) = 0LL;
  }
  v7 = *(volatile signed __int32 **)(v1 + 120);
  if ( v7 )
  {
    AMLIDereferenceHandleEx(v7);
    *(_QWORD *)(v1 + 120) = 0LL;
  }
  v8 = *(void **)(v1 + 312);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v1 + 304) = 0LL;
    *(_QWORD *)(v1 + 312) = 0LL;
  }
  AcpiThermalDestroyContraints(a1);
  if ( (*(_DWORD *)(a1 + 192) & 0x1000) != 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    v10 = *(_QWORD *)(a1 + 208);
    if ( *(_QWORD *)(v10 + 8) != a1 + 208 || (v11 = *(_QWORD **)(a1 + 216), *v11 != a1 + 208) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v9);
  }
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 720));
  if ( *(_QWORD *)(a1 + 224) )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 720), 2u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x54706341u);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  ACPIThermalLoopEx(a1, 23839, 0);
  return KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
}
