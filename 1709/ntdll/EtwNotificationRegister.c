/*
 * XREFs of EtwNotificationRegister @ 0x1800366A0
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x180065E10 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x180075710 (EtwEventRegister.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     EtwpRegisterProvider @ 0x18003652C (EtwpRegisterProvider.c)
 *     EtwpAllocateRegistration @ 0x1800368CC (EtwpAllocateRegistration.c)
 *     EtwpCheckForPrivatePreEnable @ 0x1800369D8 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpInsertRegistration @ 0x180036BF0 (EtwpInsertRegistration.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFreeRegistration @ 0x180060C7C (EtwpFreeRegistration.c)
 */

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  __int64 v7; // rax
  ULONG v8; // ebx
  _RTL_SRWLOCK *Registration; // rax
  __int64 v10; // rdi
  _RTL_SRWLOCK *v11; // rsi

  if ( Guid && RegHandle )
  {
    v7 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
    if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
      v7 = *(_QWORD *)Guid->Data4 - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
    if ( !v7 && PrivateLoggerNotificationEntry )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *RegHandle = 0LL;
    v8 = 0;
    Registration = (_RTL_SRWLOCK *)EtwpAllocateRegistration(Guid, Callback, Context, Type);
    v10 = (__int64)Registration;
    if ( !Registration )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v11 = Registration + 8;
    RtlAcquireSRWLockExclusive(Registration + 8);
    *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( Type != 10 && (v8 = EtwpRegisterProvider(v10, (__int64)Callback, Type)) != 0 )
    {
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      EtwpFreeRegistration(v10);
    }
    else
    {
      EtwpInsertRegistration((PRTL_BALANCED_NODE)v10);
      EtwpCheckForPrivatePreEnable(v10);
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      *RegHandle = v10 | ((unsigned __int64)*(unsigned __int16 *)(v10 + 96) << 48);
    }
  }
  else
  {
    v8 = 87;
  }
  if ( v8 )
LABEL_14:
    RtlSetLastWin32Error(v8);
  return v8;
}
