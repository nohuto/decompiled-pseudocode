/*
 * XREFs of IoCreateDevice @ 0x140549C50
 * Callers:
 *     RawMountVolume @ 0x140554038 (RawMountVolume.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     VRegSetup @ 0x1405C7A40 (VRegSetup.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PiSwGetChildPdo @ 0x1405E3DF8 (PiSwGetChildPdo.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     ViDdiDriverEntry @ 0x1407A88B0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1407C2A44 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     WmipDriverEntry @ 0x140843D40 (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x140843EC0 (PiDaDriverEntry.c)
 *     RawInitialize @ 0x140844430 (RawInitialize.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     IopInsertRemoveDevice @ 0x1400FAFD8 (IopInsertRemoveDevice.c)
 *     KeInitializeDeviceQueue @ 0x1400FB050 (KeInitializeDeviceQueue.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14054A09C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PoVolumeDevice @ 0x140598584 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14059CC3C (IopCreateVpb.c)
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
  ULONG v8; // ecx
  ULONG v9; // esi
  unsigned __int64 v10; // r15
  struct _DEVICE_OBJECT *v11; // rbx
  __int16 v12; // r13
  PUNICODE_STRING p_DestinationString; // rdi
  ULONG v14; // eax
  ULONG v15; // r14d
  __int64 DefaultDeviceSecurityDescriptor; // rdx
  int v17; // ecx
  unsigned int v18; // esi
  int v19; // eax
  NTSTATUS Vpb; // edi
  __int64 v21; // rcx
  USHORT v22; // ax
  __int64 v23; // rcx
  int Flags; // eax
  ULONG Characteristics; // eax
  int inserted; // eax
  PVOID v27; // rdx
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v30; // [rsp+60h] [rbp-A0h]
  _BYTE v31[12]; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  PUNICODE_STRING v33; // [rsp+78h] [rbp-88h]
  ULONG v34; // [rsp+80h] [rbp-80h]
  PDEVICE_OBJECT *v35; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  int v37; // [rsp+98h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  PUNICODE_STRING v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t pszDest[20]; // [rsp+D8h] [rbp-28h] BYREF
  char v45[40]; // [rsp+100h] [rbp+0h] BYREF

  v8 = DeviceCharacteristics;
  v35 = DeviceObject;
  v9 = DeviceExtensionSize & 7;
  v10 = DeviceType;
  v11 = 0LL;
  Object = 0LL;
  v12 = 0;
  *(_DWORD *)&v31[8] = 0;
  P = 0LL;
  p_DestinationString = DeviceName;
  v33 = DeviceName;
  v14 = DeviceCharacteristics & 0x80;
  v34 = DeviceExtensionSize;
  v30 = v14;
  v15 = DeviceExtensionSize;
  *(_QWORD *)v31 = DeviceExtensionSize & 7;
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
      v33 = &DestinationString;
    }
    DefaultDeviceSecurityDescriptor = IopCreateDefaultDeviceSecurityDescriptor((unsigned int)v10, v8, DeviceName, v45);
    if ( (_DWORD)v10 == 3 )
    {
      v12 = 2048;
    }
    else if ( (_DWORD)v10 == 7 || (_DWORD)v10 == 8 || (_DWORD)v10 == 36 )
    {
      v12 = 512;
    }
    v37 = 48;
    v38 = 0LL;
    v39 = p_DestinationString;
    v41 = DefaultDeviceSecurityDescriptor;
    v17 = IopCaseInsensitive != 0 ? 576 : 512;
    v42 = 0LL;
    v40 = v17;
    if ( Exclusive )
    {
      v17 |= 0x20u;
      v40 = v17;
    }
    if ( p_DestinationString )
      v40 = v17 | 0x10;
    if ( v9 )
      v9 = 8 - v9;
    v18 = v15 + v9;
    if ( v18 >= 0xFFFFFE48 )
    {
      Vpb = -1073741811;
      goto LABEL_35;
    }
    v19 = ObCreateObjectEx(
            0,
            (_DWORD *)IoDeviceObjectType,
            (__int64)&v37,
            0,
            (__int64)&v31[4],
            v18 + 440,
            0,
            0,
            &Object,
            0LL);
    v11 = (struct _DEVICE_OBJECT *)Object;
    Vpb = v19;
    if ( v19 < 0 )
      goto LABEL_35;
    memset(Object, 0, v18 + 440);
    v15 = v34;
    v21 = (__int64)&v11[1] + v18;
    v22 = v34 + 336;
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
    Flags = v11->Flags;
    if ( Exclusive )
      Flags = 136;
    v11->Flags = Flags;
    if ( v33 )
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
    Characteristics = v11->Characteristics;
    if ( (Characteristics & 1) == 0 && (Characteristics & 0x40000) == 0 )
      v11->DeviceObjectExtension->ExtensionFlags |= 0x800u;
    inserted = ObInsertObjectEx(v11, 0LL, 3u, 1, 0, &Object, (unsigned __int64 *)&Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(DriverObject);
      v11 = (struct _DEVICE_OBJECT *)Object;
      v27 = Object;
      *((_QWORD *)Object + 1) = DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)v27, 1);
      if ( v11->Vpb )
        PoVolumeDevice(v11);
      ObCloseHandle(Handle, 0);
      goto LABEL_35;
    }
    if ( inserted != -1073741771 || (v14 = v30) == 0 )
    {
      v11 = 0LL;
LABEL_35:
      if ( *(_QWORD *)&v31[4] )
        ExFreePoolWithTag(*(PVOID *)&v31[4], 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      *v35 = v11;
      return Vpb;
    }
    if ( *(_QWORD *)&v31[4] )
    {
      ExFreePoolWithTag(*(PVOID *)&v31[4], 0);
      v14 = v30;
      *(_QWORD *)&v31[4] = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v14 = v30;
      P = 0LL;
    }
    p_DestinationString = v33;
    v11 = (struct _DEVICE_OBJECT *)Object;
    v9 = *(_DWORD *)v31;
    v8 = DeviceCharacteristics;
  }
  Vpb = IopCreateVpb(v11);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent(&v11->DeviceLock, SynchronizationEvent, 1u);
    goto LABEL_18;
  }
  ObfDereferenceObject(v11);
  if ( *(_QWORD *)&v31[4] )
    ExFreePoolWithTag(*(PVOID *)&v31[4], 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *v35 = 0LL;
  return Vpb;
}
