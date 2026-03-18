/*
 * XREFs of ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00A1890
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00A15E4 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 *     ??0CMutex@@QEAA@PEAJ@Z @ 0x1C0074C90 (--0CMutex@@QEAA@PEAJ@Z.c)
 *     ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C00A17C0 (-Destroy@CMonitorPDO@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00EDAE8 (--_GCMutex@@QEAAPEAXI@Z.c)
 */

CMonitorPDO *__fastcall CMonitorPDO::CMonitorPDO(CMonitorPDO *this, struct _LUID *a2, unsigned int a3, int *a4)
{
  PVOID *v4; // r15
  NTSTATUS DeviceInterfaces; // esi
  CMutex *PoolWithTag; // rax
  unsigned int v9; // edx
  CMutex *v10; // rax
  CMutex *v11; // r14
  void **v12; // rbx
  struct _KMUTANT *v13; // rcx
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-10h] BYREF
  PVOID EventCategoryData; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+50h]
  int *v18; // [rsp+A8h] [rbp+58h]

  v18 = a4;
  v17 = a3;
  v4 = (PVOID *)((char *)this + 16);
  *(_QWORD *)this = &CMonitorPDO::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  if ( *a4 < 0 )
    return this;
  *((struct _LUID *)this + 8) = *a2;
  SymbolicLinkList = 0LL;
  DeviceInterfaces = 0;
  LODWORD(EventCategoryData) = 0;
  PoolWithTag = (CMutex *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4D504F47u);
  if ( PoolWithTag )
  {
    v10 = CMutex::CMutex(PoolWithTag, (int *)&EventCategoryData);
    DeviceInterfaces = (int)EventCategoryData;
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    DeviceInterfaces = -1073741801;
    goto LABEL_14;
  }
  if ( DeviceInterfaces < 0 )
    goto LABEL_14;
  *((_QWORD *)this + 1) = v11;
  v11 = 0LL;
  v12 = (void **)*((_QWORD *)this + 1);
  CMutex::Lock(v12);
  DeviceInterfaces = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, PVOID *, PVOID *))qword_1C01907F8)(
                       a2,
                       v17,
                       &EventCategoryData,
                       v4);
  if ( DeviceInterfaces < 0 )
    goto LABEL_25;
  ObfReferenceObject(*v4);
  DeviceInterfaces = IoRegisterPlugPlayNotification(
                       EventCategoryTargetDeviceChange,
                       0,
                       EventCategoryData,
                       (PDRIVER_OBJECT)gpWin32kDriverObject,
                       CMonitorPDO::MonitorPDORemovalCallback,
                       this,
                       (PVOID *)this + 5);
  ObfDereferenceObject(EventCategoryData);
  EventCategoryData = 0LL;
  if ( DeviceInterfaces < 0 )
    goto LABEL_25;
  DeviceInterfaces = IoRegisterPlugPlayNotification(
                       EventCategoryDeviceInterfaceChange,
                       0,
                       &GUID_DEVINTERFACE_MONITOR,
                       (PDRIVER_OBJECT)gpWin32kDriverObject,
                       CMonitorPDO::MonitorInterfaceCallback,
                       this,
                       (PVOID *)this + 6);
  if ( DeviceInterfaces < 0 )
    goto LABEL_25;
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, (PDEVICE_OBJECT)*v4, 0, &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_12;
  if ( !*SymbolicLinkList )
  {
    DeviceInterfaces = -1073741823;
LABEL_25:
    v13 = (struct _KMUTANT *)*v12;
    if ( !*v12 )
      goto LABEL_14;
    goto LABEL_13;
  }
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 24), SymbolicLinkList);
LABEL_12:
  SymbolicLinkList = 0LL;
  v13 = (struct _KMUTANT *)*v12;
  if ( *v12 )
  {
LABEL_13:
    KeReleaseMutex(v13, 0);
LABEL_14:
    if ( SymbolicLinkList )
    {
      ExFreePoolWithTag(SymbolicLinkList, 0);
      SymbolicLinkList = 0LL;
    }
    if ( v11 )
      CMutex::`scalar deleting destructor'(v11, v9);
  }
  if ( DeviceInterfaces < 0 )
  {
    if ( *((_QWORD *)this + 1) )
      CMonitorPDO::Destroy(this);
    *v18 = DeviceInterfaces;
  }
  else
  {
    *((_QWORD *)this + 7) = PsGetCurrentProcessId();
  }
  return this;
}
