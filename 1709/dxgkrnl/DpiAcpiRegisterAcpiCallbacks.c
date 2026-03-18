/*
 * XREFs of DpiAcpiRegisterAcpiCallbacks @ 0x1C0122784
 * Callers:
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // si
  char v5; // r15
  char v6; // bp
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  NTSTATUS v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  AcquireMiniportListMutex();
  if ( !dword_1C00609D0 )
  {
    if ( g_pDeviceObject )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 80;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
      v3 = v8;
      if ( v8 < 0 )
      {
LABEL_13:
        v22 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v22 + 24) = v3;
        goto LABEL_14;
      }
      CallbackRegistration = ExRegisterCallback(
                               CallbackObject,
                               (PCALLBACK_FUNCTION)DpiAcpiPowerStateCallback,
                               g_pDeviceObject);
      ObfDereferenceObject(CallbackObject);
      if ( CallbackRegistration )
      {
        v4 = 1;
        v13 = WdLogNewEntry5_WdEvent(v7, v10, v11, v12);
        *(_QWORD *)(v13 + 24) = CallbackRegistration;
        WdLogEvent5_WdEvent(v13);
        v14 = IoRegisterPlugPlayNotification(
                EventCategoryHardwareProfileChange,
                0,
                0LL,
                g_pDriverObject,
                DpiAcpiDockEventCallback,
                g_pDeviceObject,
                &NotificationEntry);
        v3 = v14;
        if ( v14 >= 0 )
          goto LABEL_6;
        goto LABEL_13;
      }
      LODWORD(v3) = -1073741823;
    }
    v22 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v22 + 24) = -1073741823LL;
LABEL_14:
    WdLogEvent5_WdError(v22);
    goto LABEL_9;
  }
LABEL_6:
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 928))(*(_QWORD *)(v1 + 864), DpiAcpiEventCallback, a1);
  v3 = v15;
  if ( v15 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v23 + 24) = *(_QWORD *)(v1 + 928);
    *(_QWORD *)(v23 + 32) = v3;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    v5 = 1;
    v20 = WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
    *(_QWORD *)(v20 + 24) = v3;
    WdLogEvent5_WdEvent(v20);
    *(_BYTE *)(v1 + 1142) = 1;
    ++dword_1C00609D0;
  }
  v6 = v4;
LABEL_9:
  _InterlockedExchange64(&qword_1C0060888, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( (int)v3 < 0 )
  {
    *(_BYTE *)(v1 + 1142) = 0;
    if ( v6 == 1 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
    }
    if ( v4 == 1 )
    {
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
    if ( v5 == 1 )
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PDEVICE_OBJECT, unsigned int, __int64)))(v1 + 936))(
        *(_QWORD *)(v1 + 864),
        DpiAcpiEventCallback);
  }
  return (unsigned int)v3;
}
