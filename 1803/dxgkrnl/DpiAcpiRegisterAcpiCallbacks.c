/*
 * XREFs of DpiAcpiRegisterAcpiCallbacks @ 0x1C0207E00
 * Callers:
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // si
  char v5; // r15
  char v6; // bp
  __int64 v7; // rcx
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  AcquireMiniportListMutex();
  if ( !dword_1C007A8D0 )
  {
    if ( !g_pDeviceObject )
    {
LABEL_3:
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = -1073741823LL;
LABEL_4:
      WdLogEvent5_WdError(v8);
      goto LABEL_14;
    }
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    v3 = v9;
    if ( v9 < 0 )
      goto LABEL_6;
    CallbackRegistration = ExRegisterCallback(
                             CallbackObject,
                             (PCALLBACK_FUNCTION)DpiAcpiPowerStateCallback,
                             g_pDeviceObject);
    ObfDereferenceObject(CallbackObject);
    if ( !CallbackRegistration )
    {
      LODWORD(v3) = -1073741823;
      goto LABEL_3;
    }
    v4 = 1;
    v12 = WdLogNewEntry5_WdEvent(v7, v11);
    *(_QWORD *)(v12 + 24) = CallbackRegistration;
    WdLogEvent5_WdEvent(v12);
    v13 = IoRegisterPlugPlayNotification(
            EventCategoryHardwareProfileChange,
            0,
            0LL,
            g_pDriverObject,
            (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiAcpiDockEventCallback,
            g_pDeviceObject,
            &qword_1C007A8C8);
    v3 = v13;
    if ( v13 < 0 )
    {
LABEL_6:
      v8 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v8 + 24) = v3;
      goto LABEL_4;
    }
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 928))(*(_QWORD *)(v1 + 864), DpiAcpiEventCallback, a1);
  v3 = v14;
  if ( v14 >= 0 )
  {
    v5 = 1;
    v18 = WdLogNewEntry5_WdEvent(v16, v15);
    *(_QWORD *)(v18 + 24) = v3;
    WdLogEvent5_WdEvent(v18);
    *(_BYTE *)(v1 + 1142) = 1;
    ++dword_1C007A8D0;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v1 + 928);
    *(_QWORD *)(v17 + 32) = v3;
    WdLogEvent5_WdError(v17);
  }
  v6 = v4;
LABEL_14:
  _InterlockedExchange64(&qword_1C007A788, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( (int)v3 < 0 )
  {
    *(_BYTE *)(v1 + 1142) = 0;
    if ( v6 == 1 )
    {
      IoUnregisterPlugPlayNotification(qword_1C007A8C8);
      qword_1C007A8C8 = 0LL;
    }
    if ( v4 == 1 )
    {
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
    if ( v5 == 1 )
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, unsigned int, __int64)))(v1 + 936))(
        *(_QWORD *)(v1 + 864),
        DpiAcpiEventCallback);
  }
  return (unsigned int)v3;
}
