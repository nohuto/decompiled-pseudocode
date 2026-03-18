/*
 * XREFs of DpiAcpiRegisterAcpiCallbacks @ 0x1C012249C
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // si
  char v5; // r15
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  AcquireMiniportListMutex();
  if ( !dword_1C006FB50 )
  {
    if ( g_pDeviceObject )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 80;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
      v3 = v9;
      if ( v9 < 0 )
      {
LABEL_13:
        v19 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v19 + 24) = v3;
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
        v12 = WdLogNewEntry5_WdEvent(v8);
        *(_QWORD *)(v12 + 24) = CallbackRegistration;
        WdLogEvent5_WdEvent(v12);
        v13 = IoRegisterPlugPlayNotification(
                EventCategoryHardwareProfileChange,
                0,
                0LL,
                g_pDriverObject,
                DpiAcpiDockEventCallback,
                g_pDeviceObject,
                &NotificationEntry);
        v3 = v13;
        if ( v13 >= 0 )
          goto LABEL_6;
        goto LABEL_13;
      }
      LODWORD(v3) = -1073741823;
    }
    v19 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v19 + 24) = -1073741823LL;
LABEL_14:
    WdLogEvent5_WdError(v19);
    goto LABEL_9;
  }
LABEL_6:
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 928))(*(_QWORD *)(v1 + 864), DpiAcpiEventCallback, a1);
  v3 = v14;
  if ( v14 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v20 + 24) = *(_QWORD *)(v1 + 928);
    *(_QWORD *)(v20 + 32) = v3;
    WdLogEvent5_WdError(v20);
  }
  else
  {
    v5 = 1;
    v17 = WdLogNewEntry5_WdEvent(v16);
    *(_QWORD *)(v17 + 24) = v3;
    WdLogEvent5_WdEvent(v17);
    *(_BYTE *)(v1 + 1142) = 1;
    ++dword_1C006FB50;
  }
  v6 = v4;
LABEL_9:
  _InterlockedExchange64(&qword_1C006FA08, 0LL);
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
