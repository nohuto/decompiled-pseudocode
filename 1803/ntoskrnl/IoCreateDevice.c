/*
 * XREFs of IoCreateDevice @ 0x140541590
 * Callers:
 *     RawMountVolume @ 0x140495738 (RawMountVolume.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PiSwGetChildPdo @ 0x1405E7FB8 (PiSwGetChildPdo.c)
 *     VRegSetup @ 0x140621500 (VRegSetup.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IopLegacyResourceAllocation @ 0x140650B94 (IopLegacyResourceAllocation.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     ViDdiDriverEntry @ 0x1408158E0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x14082FFB4 (VfFilterAttach.c)
 *     WmipDriverEntry @ 0x14089FCB0 (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x14089FE30 (PiDaDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x1408B7610 (RawInitialize.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     IopInsertRemoveDevice @ 0x14009FD14 (IopInsertRemoveDevice.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     KeInitializeDeviceQueue @ 0x14014C1A0 (KeInitializeDeviceQueue.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1405419D0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PoVolumeDevice @ 0x1406048A8 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x1406052D8 (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoCreateDevice(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  ULONG v7; // edi
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  ULONG v12; // ecx
  struct _DEVICE_OBJECT *v13; // rbx
  __int16 v14; // r15
  __int64 DefaultDeviceSecurityDescriptor; // rdx
  int v16; // ecx
  int v17; // eax
  NTSTATUS Vpb; // edi
  __int64 v19; // rdi
  struct _DEVOBJ_EXTENSION *v20; // rcx
  ULONG v21; // ecx
  USHORT v22; // ax
  __int64 v23; // rdx
  int v24; // eax
  ULONG Characteristics; // eax
  int inserted; // eax
  PVOID v27; // rdx
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-A0h]
  ULONG v31; // [rsp+64h] [rbp-9Ch]
  ULONG v32; // [rsp+68h] [rbp-98h]
  PVOID v33; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v44[40]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = DeviceCharacteristics;
  v10 = DeviceType;
  v31 = DeviceExtensionSize;
  v33 = 0LL;
  v11 = (unsigned __int8)DeviceCharacteristics & 0x80;
  P = 0LL;
  v32 = DeviceCharacteristics & 0x80;
  v12 = 8 - (DeviceExtensionSize & 7);
  v13 = 0LL;
  Object = 0LL;
  v14 = 0;
  if ( (DeviceExtensionSize & 7) == 0 )
    v12 = DeviceExtensionSize & 7;
  v30 = DeviceExtensionSize + v12;
  while ( 1 )
  {
    if ( (_DWORD)v11 )
    {
      RtlStringCchPrintfW(
        pszDest,
        0x11uLL,
        L"\\Device\\%08lx",
        (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
      RtlInitUnicodeString(&DestinationString, pszDest);
      v13 = (struct _DEVICE_OBJECT *)Object;
      DeviceName = &DestinationString;
    }
    DefaultDeviceSecurityDescriptor = IopCreateDefaultDeviceSecurityDescriptor((unsigned int)v10, v7, v11, v44);
    if ( (_DWORD)v10 == 3 )
    {
      v14 = 2048;
    }
    else if ( (_DWORD)v10 == 7 || (_DWORD)v10 == 8 || (_DWORD)v10 == 36 )
    {
      v14 = 512;
    }
    v36 = 48;
    v37 = 0LL;
    v38 = DeviceName;
    v40 = DefaultDeviceSecurityDescriptor;
    v16 = IopCaseInsensitive != 0 ? 576 : 512;
    v41 = 0LL;
    v39 = v16;
    if ( Exclusive )
    {
      v16 |= 0x20u;
      v39 = v16;
    }
    if ( DeviceName )
      v39 = v16 | 0x10;
    if ( v30 >= 0xFFFFFE48 )
    {
      Vpb = -1073741811;
      goto LABEL_35;
    }
    v17 = ObCreateObjectEx(0, (_DWORD *)IoDeviceObjectType, (int)&v36, 0, (__int64)&v33, v30 + 440, 0, 0, &Object, 0LL);
    v13 = (struct _DEVICE_OBJECT *)Object;
    Vpb = v17;
    if ( v17 < 0 )
      goto LABEL_35;
    v19 = v30;
    memset(Object, 0, v30 + 440);
    v20 = (struct _DEVOBJ_EXTENSION *)((char *)&v13[1] + v19);
    v20->DeviceObject = v13;
    v13->DeviceObjectExtension = v20;
    *(_DWORD *)&v20->Type = 13;
    v20->InterruptContext = 0LL;
    v20->PowerFlags = 0;
    v20->Dope = 0LL;
    v21 = v31;
    v22 = v31 + 336;
    v13->Type = 3;
    v13->Size = v22;
    v13->DeviceType = v10;
    v13->Characteristics = DeviceCharacteristics;
    if ( (unsigned int)v10 <= 0x24 )
    {
      v23 = 0x1080000084LL;
      if ( _bittest64(&v23, v10) )
        break;
    }
LABEL_18:
    v24 = 128;
    v13->AlignmentRequirement = 0;
    v13->SectorSize = v14;
    v13->Flags = 128;
    if ( Exclusive )
    {
      v24 = 136;
      v13->Flags = 136;
    }
    if ( DeviceName )
      v13->Flags = v24 | 0x40;
    if ( v21 )
      v13->DeviceExtension = &v13[1];
    else
      v13->DeviceExtension = 0LL;
    v13->StackSize = 1;
    if ( (_DWORD)v10 == 3 || (unsigned int)v10 > 7 && ((unsigned int)v10 <= 9 || (_DWORD)v10 == 20 || (_DWORD)v10 == 32) )
    {
      v13->Queue.ListEntry.Blink = &v13->Queue.ListEntry;
      v13->Queue.ListEntry.Flink = &v13->Queue.ListEntry;
    }
    else
    {
      KeInitializeDeviceQueue(&v13->DeviceQueue);
    }
    Characteristics = v13->Characteristics;
    if ( (Characteristics & 1) == 0 && (Characteristics & 0x40000) == 0 )
      v13->DeviceObjectExtension->ExtensionFlags |= 0x800u;
    inserted = ObInsertObjectEx(v13, 0LL, 3LL, 1, 0, (__int64)&Object, &Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(DriverObject);
      v13 = (struct _DEVICE_OBJECT *)Object;
      v27 = Object;
      *((_QWORD *)Object + 1) = DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)v27, 1);
      if ( v13->Vpb )
        PoVolumeDevice(v13);
      ObCloseHandle(Handle, 0);
      goto LABEL_35;
    }
    if ( inserted != -1073741771 || (DeviceCharacteristics & 0x80u) == 0 )
    {
      v13 = 0LL;
LABEL_35:
      if ( v33 )
        ExFreePoolWithTag(v33, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      *DeviceObject = v13;
      return Vpb;
    }
    if ( v33 )
    {
      ExFreePoolWithTag(v33, 0);
      v33 = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v13 = (struct _DEVICE_OBJECT *)Object;
    v7 = DeviceCharacteristics;
    v11 = v32;
  }
  Vpb = IopCreateVpb(v13);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent(&v13->DeviceLock, SynchronizationEvent, 1u);
    v21 = v31;
    goto LABEL_18;
  }
  ObfDereferenceObject(v13);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *DeviceObject = 0LL;
  return Vpb;
}
