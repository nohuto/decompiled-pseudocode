/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x1C0119A28
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0112030 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C0119D18 (DpiAppendNumberToString.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0119E10 (DpiGdoSetupGdiParameters.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C011A5A4 (WdmlibIoCreateDeviceSecure.c)
 */

__int64 __fastcall DpiGdoCreateGdiObjects(__int64 a1, unsigned int a2, ULONG *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  unsigned int v7; // r14d
  ULONG v8; // edx
  char v9; // r15
  PVOID DeviceExtension; // rdi
  char v11; // r13
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  _QWORD *v23; // rdx
  PDEVICE_OBJECT v24; // rax
  NTSTATUS v25; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rcx
  PVOID *v31; // rax
  BOOLEAN v32; // [rsp+30h] [rbp-41h]
  char v33; // [rsp+58h] [rbp-19h]
  char v34; // [rsp+59h] [rbp-18h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-11h] BYREF
  PRKMUTEX Mutex; // [rsp+68h] [rbp-9h]
  struct _UNICODE_STRING DeviceName; // [rsp+70h] [rbp-1h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+80h] [rbp+Fh] BYREF
  char v41; // [rsp+F0h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v6) = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 168));
  Mutex = (PRKMUTEX)(v3 + 3392);
  KeWaitForSingleObject((PVOID)(v3 + 3392), Executive, 0, 0, 0LL);
  v7 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = *a3;
      DeviceObject = 0LL;
      v9 = 0;
      *(_QWORD *)&DeviceName.Length = 0LL;
      DeviceExtension = 0LL;
      DeviceName.Buffer = 0LL;
      v11 = 0;
      *(_QWORD *)&SymbolicLinkName.Length = 0LL;
      SymbolicLinkName.Buffer = 0LL;
      v33 = 0;
      v34 = 0;
      v41 = 0;
      LODWORD(v6) = DpiAppendNumberToString(L"\\Device\\Video", v8, &DeviceName);
      if ( (int)v6 < 0 )
        goto LABEL_25;
      v12 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v3 + 40) + 32LL),
              0xC8u,
              &DeviceName,
              0x23u,
              0x100u,
              v32,
              &SDDL_DEVOBJ_KERNEL_ONLY,
              &GUID_SD_GDO,
              &DeviceObject);
      v6 = v12;
      if ( v12 < 0 )
        goto LABEL_18;
      LODWORD(v6) = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *a3 + 1, &SymbolicLinkName);
      if ( (int)v6 < 0 )
        goto LABEL_25;
      v15 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
      v6 = v15;
      if ( v15 < 0 )
      {
LABEL_18:
        v27 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v27 + 24) = v6;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        v33 = 1;
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
        *((_DWORD *)DeviceExtension + 38) = *a3;
        *((_DWORD *)DeviceExtension + 39) = v7;
        if ( v7 >= 0x10 )
        {
          v28 = WdLogNewEntry5_WdError(v17, v16);
          *(_QWORD *)(v28 + 24) = v7;
          WdLogEvent5_WdError(v28);
        }
        v18 = IoRegisterDeviceInterface(
                *(PDEVICE_OBJECT *)(v3 + 152),
                &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                0LL,
                (PUNICODE_STRING)DeviceExtension + 10);
        v6 = v18;
        if ( v18 < 0 )
          goto LABEL_19;
        v41 = 1;
        LODWORD(v6) = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, v7);
        if ( (int)v6 < 0 )
          goto LABEL_24;
        v21 = *(_QWORD *)(v3 + 3704);
        *((_DWORD *)DeviceExtension + 48) = -1;
        *((_QWORD *)DeviceExtension + 22) = v21;
        v22 = DMgrWriteDeviceCountToRegistry();
        v6 = v22;
        if ( v22 < 0 )
          goto LABEL_19;
        v23 = *(_QWORD **)(v3 + 3384);
        if ( *v23 != v3 + 3376 )
          __fastfail(3u);
        *((_QWORD *)DeviceExtension + 1) = v23;
        *(_QWORD *)DeviceExtension = v3 + 3376;
        *v23 = DeviceExtension;
        *(_QWORD *)(v3 + 3384) = DeviceExtension;
        v24 = DeviceObject;
        ++*(_DWORD *)(v3 + 3448);
        v34 = 1;
        v24->Flags |= 4u;
        DeviceObject->Flags &= ~0x80u;
        v25 = IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 1u);
        v6 = v25;
        if ( v25 < 0 )
        {
LABEL_19:
          v29 = WdLogNewEntry5_WdError(v20, v19);
          *(_QWORD *)(v29 + 24) = v6;
          WdLogEvent5_WdError(v29);
          v9 = v41;
        }
        else
        {
          v11 = 1;
          v9 = 1;
        }
      }
      if ( (int)v6 < 0 )
        break;
LABEL_15:
      RtlFreeUnicodeString(&DeviceName);
      RtlFreeUnicodeString(&SymbolicLinkName);
      if ( (int)v6 >= 0 )
      {
        ++v7;
        ++a3;
        if ( v7 < a2 )
          continue;
      }
      goto LABEL_17;
    }
    if ( v11 == 1 && DeviceExtension )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 0);
    if ( v9 == 1 )
LABEL_24:
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 10);
LABEL_25:
    DMgrWriteDeviceCountToRegistry();
    if ( v33 == 1 )
      IoDeleteSymbolicLink(&SymbolicLinkName);
    if ( DeviceObject )
    {
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
    if ( v34 == 1 )
    {
      v30 = *(_QWORD **)DeviceExtension;
      v31 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension || *v31 != DeviceExtension )
        __fastfail(3u);
      *v31 = v30;
      v30[1] = v31;
      --*(_DWORD *)(v3 + 3448);
    }
    goto LABEL_15;
  }
LABEL_17:
  KeReleaseMutex(Mutex, 0);
  return (unsigned int)v6;
}
