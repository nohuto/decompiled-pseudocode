/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x1C020E0A8
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01F24BC (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     WdmlibIoCreateDeviceSecure @ 0x1C01EB5F0 (WdmlibIoCreateDeviceSecure.c)
 *     DpiAppendNumberToString @ 0x1C01FCCE8 (DpiAppendNumberToString.c)
 *     DpiGdoSetupGdiParameters @ 0x1C020E84C (DpiGdoSetupGdiParameters.c)
 */

__int64 __fastcall DpiGdoCreateGdiObjects(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r14
  PVOID DeviceExtension; // rdi
  char v8; // r13
  char v9; // r12
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rax
  int v18; // eax
  _QWORD *v19; // rdx
  PDEVICE_OBJECT v20; // rax
  NTSTATUS v21; // eax
  _QWORD *v22; // rax
  PVOID *v23; // rcx
  BOOLEAN v25; // [rsp+30h] [rbp-51h]
  char v26; // [rsp+58h] [rbp-29h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-21h] BYREF
  PRKMUTEX Mutex; // [rsp+68h] [rbp-19h]
  struct _UNICODE_STRING DeviceName; // [rsp+70h] [rbp-11h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+80h] [rbp-1h] BYREF
  char v34; // [rsp+100h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 0;
  Mutex = (PRKMUTEX)(v3 + 3416);
  KeWaitForSingleObject((PVOID)(v3 + 3416), Executive, 0, 0, 0LL);
  v6 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      DeviceObject = 0LL;
      *(_QWORD *)&DeviceName.Length = 0LL;
      DeviceName.Buffer = 0LL;
      DeviceExtension = 0LL;
      *(_QWORD *)&SymbolicLinkName.Length = 0LL;
      v8 = 0;
      SymbolicLinkName.Buffer = 0LL;
      v9 = 0;
      v34 = 0;
      v26 = 0;
      LODWORD(v5) = DpiAppendNumberToString(L"\\Device\\Video", *(_DWORD *)(a3 + 4 * v6), &DeviceName);
      if ( (int)v5 < 0 )
        goto LABEL_21;
      v10 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v3 + 40) + 32LL),
              0xC8u,
              &DeviceName,
              0x23u,
              0x100u,
              v25,
              &SDDL_DEVOBJ_KERNEL_ONLY,
              &GUID_SD_GDO,
              &DeviceObject);
      v5 = v10;
      if ( v10 < 0 )
        goto LABEL_4;
      LODWORD(v5) = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *(_DWORD *)(a3 + 4 * v6) + 1, &SymbolicLinkName);
      if ( (int)v5 < 0 )
        goto LABEL_21;
      v13 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
      v5 = v13;
      if ( v13 < 0 )
        goto LABEL_4;
      v34 = 1;
      DeviceExtension = DeviceObject->DeviceExtension;
      *((_DWORD *)DeviceExtension + 4) = 1953656900;
      *((_DWORD *)DeviceExtension + 5) = 6;
      *((_QWORD *)DeviceExtension + 3) = DeviceObject;
      *((_QWORD *)DeviceExtension + 4) = a1;
      *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v3 + 40);
      *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v3 + 48);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
      *((_QWORD *)DeviceExtension + 13) = DpiGdoDispatchCreate;
      *((_QWORD *)DeviceExtension + 14) = DpiGdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 15) = &DpiGdoDispatchIoctl;
      *((_DWORD *)DeviceExtension + 38) = *(_DWORD *)(a3 + 4 * v6);
      *((_DWORD *)DeviceExtension + 39) = v6;
      if ( (unsigned int)v6 >= 0x10 )
      {
        v15 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v15 + 24) = (unsigned int)v6;
        WdLogEvent5_WdError(v15);
      }
      v16 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
              0LL,
              (PUNICODE_STRING)DeviceExtension + 10);
      v5 = v16;
      if ( v16 < 0 )
        goto LABEL_4;
      v8 = 1;
      LODWORD(v5) = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, (unsigned int)v6);
      if ( (int)v5 < 0 )
        goto LABEL_20;
      v17 = *(_QWORD *)(v3 + 3728);
      *((_DWORD *)DeviceExtension + 48) = -1;
      *((_QWORD *)DeviceExtension + 22) = v17;
      v18 = DMgrWriteDeviceCountToRegistry();
      v5 = v18;
      if ( v18 < 0 )
        goto LABEL_4;
      v19 = *(_QWORD **)(v3 + 3408);
      if ( *v19 != v3 + 3400 )
        __fastfail(3u);
      *((_QWORD *)DeviceExtension + 1) = v19;
      *(_QWORD *)DeviceExtension = v3 + 3400;
      *v19 = DeviceExtension;
      *(_QWORD *)(v3 + 3408) = DeviceExtension;
      v20 = DeviceObject;
      ++*(_DWORD *)(v3 + 3472);
      v26 = 1;
      v20->Flags |= 4u;
      DeviceObject->Flags &= ~0x80u;
      v21 = IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 1u);
      v5 = v21;
      if ( v21 < 0 )
      {
LABEL_4:
        v12 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v12 + 24) = v5;
        WdLogEvent5_WdError(v12);
      }
      else
      {
        v9 = 1;
      }
      if ( (int)v5 < 0 )
        break;
LABEL_29:
      RtlFreeUnicodeString(&DeviceName);
      RtlFreeUnicodeString(&SymbolicLinkName);
      if ( (int)v5 >= 0 )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 < a2 )
          continue;
      }
      goto LABEL_31;
    }
    if ( v9 == 1 && DeviceExtension )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 0);
    if ( v8 == 1 )
LABEL_20:
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 10);
LABEL_21:
    DMgrWriteDeviceCountToRegistry();
    if ( v34 == 1 )
      IoDeleteSymbolicLink(&SymbolicLinkName);
    if ( DeviceObject )
    {
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
    if ( v26 == 1 )
    {
      v22 = *(_QWORD **)DeviceExtension;
      if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
        || (v23 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v23 != DeviceExtension) )
      {
        __fastfail(3u);
      }
      *v23 = v22;
      v22[1] = v23;
      --*(_DWORD *)(v3 + 3472);
    }
    goto LABEL_29;
  }
LABEL_31:
  KeReleaseMutex(Mutex, 0);
  return (unsigned int)v5;
}
