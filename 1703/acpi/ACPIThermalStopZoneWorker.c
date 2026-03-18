/*
 * XREFs of ACPIThermalStopZoneWorker @ 0x1C0058610
 * Callers:
 *     ACPIThermalWorker @ 0x1C0090A20 (ACPIThermalWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ACPIThermalLoopEx @ 0x1C0021610 (ACPIThermalLoopEx.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0021A24 (ACPIThermalCompletePendingIrps.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C0054DE0 (ACPIUnregisterForDeviceNotifications.c)
 *     AcpiThermalDestroyContraints @ 0x1C00587E4 (AcpiThermalDestroyContraints.c)
 */

LONG __fastcall ACPIThermalStopZoneWorker(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  void *v4; // rcx
  IRP *v5; // rcx
  void *v6; // rcx
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // rcx
  void *v9; // rcx
  KIRQL v10; // al
  __int64 v11; // r9
  _QWORD *v12; // r8

  v1 = *(_QWORD *)(a1 + 200);
  if ( *(_BYTE *)(v1 + 274) )
    IoCancelIrp(*(PIRP *)(v1 + 208));
  ACPIThermalCompletePendingIrps(a1);
  v4 = *(void **)(v1 + 240);
  if ( v4 )
  {
    IoUnregisterPlugPlayNotificationEx(v4);
    IoFreeIrp(*(PIRP *)(v1 + 208));
    ObfDereferenceObject(*(PVOID *)(v1 + 216));
    *(_QWORD *)(v1 + 240) = 0LL;
  }
  v5 = *(IRP **)(v1 + 192);
  *(_QWORD *)(v1 + 216) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  if ( v5 )
  {
    IoFreeIrp(v5);
    *(_QWORD *)(v1 + 192) = 0LL;
  }
  v6 = *(void **)(v1 + 200);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *(_QWORD *)(v1 + 200) = 0LL;
  }
  v7 = *(volatile signed __int32 **)(v1 + 112);
  if ( v7 )
  {
    AMLIDereferenceHandleEx(v7, v3);
    *(_QWORD *)(v1 + 112) = 0LL;
  }
  v8 = *(volatile signed __int32 **)(v1 + 120);
  if ( v8 )
  {
    AMLIDereferenceHandleEx(v8, v3);
    *(_QWORD *)(v1 + 120) = 0LL;
  }
  v9 = *(void **)(v1 + 312);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v1 + 304) = 0LL;
    *(_QWORD *)(v1 + 312) = 0LL;
  }
  AcpiThermalDestroyContraints(a1);
  if ( (*(_DWORD *)(a1 + 192) & 0x1000) != 0 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    v11 = *(_QWORD *)(a1 + 208);
    v12 = *(_QWORD **)(a1 + 216);
    if ( *(_QWORD *)(v11 + 8) != a1 + 208 || *v12 != a1 + 208 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v10);
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
