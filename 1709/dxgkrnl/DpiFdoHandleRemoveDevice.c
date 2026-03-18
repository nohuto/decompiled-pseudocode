/*
 * XREFs of DpiFdoHandleRemoveDevice @ 0x1C01DDBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiCheckSpbResourceLeakage @ 0x1C0032EF4 (DpiCheckSpbResourceLeakage.c)
 *     DpiFdoHandleStopDevice @ 0x1C01DDF40 (DpiFdoHandleStopDevice.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C01DED10 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoResetFdo @ 0x1C01DEDB0 (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C01E6A24 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C01E8600 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C01E89D0 (DpiPdoDestroyPendingPdoObjects.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C01E9B40 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiFdoHandleRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rdi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rcx
  PVOID *v10; // rax
  __int64 v11; // rcx
  void *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  void *v15; // rcx
  int v16; // eax
  void (__fastcall *v17)(_QWORD); // rax
  void (__fastcall *v18)(_QWORD); // rax
  void (__fastcall *v19)(_QWORD); // rax
  void (__fastcall *v20)(_QWORD); // rax
  unsigned int v21; // ebx

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C0060A88 == DeviceObject )
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v7);
    qword_1C0060A88 = 0LL;
  }
  _InterlockedExchange64(&qword_1C0060888, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    if ( (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1
      && (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 1) <= 1 )
    {
      DpiFdoHandleStopDevice(DeviceObject, Irp);
    }
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      DpiPdoDestroyPendingPdoObjects(DeviceObject);
      DpiFdoRemoveChildDescriptors(DeviceObject);
    }
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, 0x20u);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v8 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v8;
  *((_DWORD *)DeviceExtension + 59) = 7;
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C0060A80 == DeviceObject )
    qword_1C0060A80 = 0LL;
  _InterlockedExchange64(&qword_1C0060888, 0LL);
  KeReleaseMutex(Mutex, 0);
  KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
  v9 = *(_QWORD **)DeviceExtension;
  if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
    || (v10 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v10 != DeviceExtension) )
  {
    __fastfail(3u);
  }
  *v10 = v9;
  v9[1] = v10;
  --*(_DWORD *)(v5 + 128);
  v11 = *((_QWORD *)DeviceExtension + 21);
  if ( *(_DWORD *)(v11 + 104) == 1 )
  {
    ExDeleteResourceLite((PERESOURCE)v11);
    v12 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1 )
  {
    v13 = (_DWORD *)*((_QWORD *)DeviceExtension + 165);
    if ( v13[2] == 1 && v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)DeviceExtension + 165) = 0LL;
    }
    v14 = (_DWORD *)*((_QWORD *)DeviceExtension + 166);
    if ( v14[2] == 1 && v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)DeviceExtension + 166) = 0LL;
    }
    if ( *((_DWORD *)DeviceExtension + 126) )
      DpiLdaUnLinkDeviceFromChain(DeviceObject);
    v15 = (void *)*((_QWORD *)DeviceExtension + 137);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      *((_QWORD *)DeviceExtension + 137) = 0LL;
    }
    DpiCheckSpbResourceLeakage((__int64)DeviceExtension);
  }
  KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    v16 = *((_DWORD *)DeviceExtension + 5);
    if ( v16 == 2 )
    {
      DpiFdoResetFdo(DeviceObject);
    }
    else if ( v16 != 3 )
    {
      goto LABEL_46;
    }
    if ( DeviceExtension[1142] == 1 )
      DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
    v17 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 73);
    if ( v17 )
    {
      v17(*((_QWORD *)DeviceExtension + 71));
      memset(DeviceExtension + 560, 0, 0x40uLL);
    }
    v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 81);
    if ( v18 )
    {
      v18(*((_QWORD *)DeviceExtension + 79));
      memset(DeviceExtension + 624, 0, 0x30uLL);
    }
    v19 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 87);
    if ( v19 )
    {
      v19(*((_QWORD *)DeviceExtension + 85));
      memset(DeviceExtension + 672, 0, 0xB8uLL);
    }
    v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 110);
    if ( v20 )
    {
      v20(*((_QWORD *)DeviceExtension + 108));
      memset(DeviceExtension + 856, 0, 0x58uLL);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 32);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 33);
  }
LABEL_46:
  Irp->IoStatus.Status = 0;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v21 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  DpiDxgkDdiRemoveDevice(v5, *((_QWORD *)DeviceExtension + 6));
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 20));
  IoDeleteDevice(DeviceObject);
  return v21;
}
