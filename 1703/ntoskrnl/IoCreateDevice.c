/*
 * XREFs of IoCreateDevice @ 0x1404A1F50
 * Callers:
 *     RawMountVolume @ 0x140421790 (RawMountVolume.c)
 *     PiSwGetChildPdo @ 0x14045A090 (PiSwGetChildPdo.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 *     VRegSetup @ 0x14059F830 (VRegSetup.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     ViDdiDriverEntry @ 0x140766D10 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140780888 (VfFilterAttach.c)
 *     RawInitialize @ 0x1407FAB30 (RawInitialize.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     WmipDriverEntry @ 0x1407FF1F0 (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x1407FF370 (PiDaDriverEntry.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     IopInsertRemoveDevice @ 0x140066840 (IopInsertRemoveDevice.c)
 *     KeInitializeDeviceQueue @ 0x1400668C0 (KeInitializeDeviceQueue.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404A1E64 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     PoVolumeDevice @ 0x1405CB990 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x1405CE748 (IopCreateVpb.c)
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
  char v8; // cl
  ULONG v9; // esi
  unsigned __int64 v10; // r15
  struct _DEVICE_OBJECT *v11; // rbx
  __int16 v12; // r13
  PUNICODE_STRING p_DestinationString; // rdi
  ULONG v14; // eax
  ULONG v15; // r14d
  void *DefaultDeviceSecurityDescriptor; // rdx
  int v17; // ecx
  unsigned int v18; // esi
  int v19; // eax
  NTSTATUS Vpb; // edi
  __int64 v21; // rcx
  USHORT v22; // ax
  __int64 v23; // rcx
  int inserted; // eax
  PVOID v25; // rdx
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v28; // [rsp+60h] [rbp-A0h]
  _BYTE v29[12]; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  PUNICODE_STRING v31; // [rsp+78h] [rbp-88h]
  ULONG v32; // [rsp+80h] [rbp-80h]
  PDEVICE_OBJECT *v33; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  int v35; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h]
  PUNICODE_STRING v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp-50h]
  void *v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t pszDest[20]; // [rsp+D8h] [rbp-28h] BYREF
  char v43[40]; // [rsp+100h] [rbp+0h] BYREF

  v8 = DeviceCharacteristics;
  v33 = DeviceObject;
  v9 = DeviceExtensionSize & 7;
  v10 = DeviceType;
  v11 = 0LL;
  Object = 0LL;
  v12 = 0;
  *(_DWORD *)&v29[8] = 0;
  P = 0LL;
  p_DestinationString = DeviceName;
  v31 = DeviceName;
  v14 = DeviceCharacteristics & 0x80;
  v32 = DeviceExtensionSize;
  v28 = v14;
  v15 = DeviceExtensionSize;
  *(_QWORD *)v29 = DeviceExtensionSize & 7;
  while ( 1 )
  {
    if ( v14 )
    {
      RtlStringCchPrintfW(
        pszDest,
        0x11uLL,
        L"\\Device\\%08lx",
        (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
      RtlInitUnicodeString(&DestinationString, pszDest);
      v11 = (struct _DEVICE_OBJECT *)Object;
      p_DestinationString = &DestinationString;
      v8 = DeviceCharacteristics;
      v31 = &DestinationString;
    }
    DefaultDeviceSecurityDescriptor = IopCreateDefaultDeviceSecurityDescriptor(
                                        v10,
                                        v8,
                                        (char)DeviceName,
                                        v43,
                                        (ACL **)&v29[4],
                                        (ACL **)&P,
                                        0LL);
    if ( (_DWORD)v10 == 3 )
    {
      v12 = 2048;
    }
    else if ( (_DWORD)v10 == 7 || (_DWORD)v10 == 8 || (_DWORD)v10 == 36 )
    {
      v12 = 512;
    }
    v35 = 48;
    v36 = 0LL;
    v37 = p_DestinationString;
    v39 = DefaultDeviceSecurityDescriptor;
    v17 = IopCaseInsensitive != 0 ? 576 : 512;
    v40 = 0LL;
    v38 = v17;
    if ( Exclusive )
    {
      v17 |= 0x20u;
      v38 = v17;
    }
    if ( p_DestinationString )
      v38 = v17 | 0x10;
    if ( v9 )
      v9 = 8 - v9;
    v18 = v15 + v9;
    if ( v18 >= 0xFFFFFE48 )
    {
      Vpb = -1073741811;
      goto LABEL_36;
    }
    v19 = ObCreateObjectEx(0, IoDeviceObjectType, (unsigned int)&v35, 0);
    v11 = (struct _DEVICE_OBJECT *)Object;
    Vpb = v19;
    if ( v19 < 0 )
      goto LABEL_36;
    memset(Object, 0, v18 + 440);
    v15 = v32;
    v21 = (__int64)&v11[1] + v18;
    v22 = v32 + 336;
    *(_QWORD *)(v21 + 8) = v11;
    v11->DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)v21;
    *(_DWORD *)v21 = 13;
    *(_QWORD *)(v21 + 88) = 0LL;
    *(_DWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 0LL;
    v11->Type = 3;
    v11->Size = v22;
    v11->DeviceType = v10;
    v11->Characteristics = DeviceCharacteristics;
    if ( (unsigned int)v10 <= 0x24 )
    {
      v23 = 0x1080000084LL;
      if ( _bittest64(&v23, v10) )
        break;
    }
LABEL_18:
    v11->AlignmentRequirement = 0;
    v11->SectorSize = v12;
    v11->Flags = 128;
    if ( Exclusive )
      v11->Flags = 136;
    if ( v31 )
      v11->Flags |= 0x40u;
    if ( v15 )
      v11->DeviceExtension = &v11[1];
    else
      v11->DeviceExtension = 0LL;
    v11->StackSize = 1;
    if ( (_DWORD)v10 == 3 || (unsigned int)v10 > 7 && ((unsigned int)v10 <= 9 || (_DWORD)v10 == 20 || (_DWORD)v10 == 32) )
    {
      v11->Queue.ListEntry.Blink = &v11->Queue.ListEntry;
      v11->Queue.ListEntry.Flink = &v11->Queue.ListEntry;
    }
    else
    {
      KeInitializeDeviceQueue(&v11->DeviceQueue);
    }
    if ( (v11->Characteristics & 0x40001) == 0 )
      v11->DeviceObjectExtension->ExtensionFlags |= 0x800u;
    inserted = ObInsertObjectEx(v11, 0LL, 0, (__int64)&Object, (__int64)&Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(DriverObject);
      v11 = (struct _DEVICE_OBJECT *)Object;
      v25 = Object;
      *((_QWORD *)Object + 1) = DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)v25, 1);
      if ( v11->Vpb )
        PoVolumeDevice(v11);
      ObCloseHandle(Handle, 0);
      goto LABEL_36;
    }
    if ( inserted != -1073741771 || (v14 = v28) == 0 )
    {
      v11 = 0LL;
LABEL_36:
      if ( *(_QWORD *)&v29[4] )
        ExFreePoolWithTag(*(PVOID *)&v29[4], 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      *v33 = v11;
      return Vpb;
    }
    if ( *(_QWORD *)&v29[4] )
    {
      ExFreePoolWithTag(*(PVOID *)&v29[4], 0);
      v14 = v28;
      *(_QWORD *)&v29[4] = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v14 = v28;
      P = 0LL;
    }
    p_DestinationString = v31;
    v11 = (struct _DEVICE_OBJECT *)Object;
    v9 = *(_DWORD *)v29;
    v8 = DeviceCharacteristics;
  }
  Vpb = IopCreateVpb(v11);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent(&v11->DeviceLock, SynchronizationEvent, 1u);
    goto LABEL_18;
  }
  ObfDereferenceObject(v11);
  if ( *(_QWORD *)&v29[4] )
    ExFreePoolWithTag(*(PVOID *)&v29[4], 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *v33 = 0LL;
  return Vpb;
}
