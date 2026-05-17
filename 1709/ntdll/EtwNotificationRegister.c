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

__int64 __fastcall EtwNotificationRegister(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v7; // rax
  ULONG v8; // ebx
  __int64 Registration; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi

  if ( a1 && a5 )
  {
    v7 = *a1 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
    if ( *a1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
      v7 = a1[1] - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
    if ( !v7 && PrivateLoggerNotificationEntry )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *a5 = 0LL;
    v8 = 0;
    Registration = EtwpAllocateRegistration(a1, a3, a4, a2);
    v10 = Registration;
    if ( !Registration )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v11 = Registration + 64;
    RtlAcquireSRWLockExclusive(Registration + 64);
    *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( a2 != 10 && (v8 = EtwpRegisterProvider(v10, a3, a2)) != 0 )
    {
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      EtwpFreeRegistration(v10);
    }
    else
    {
      EtwpInsertRegistration(v10);
      EtwpCheckForPrivatePreEnable(v10);
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      *a5 = v10 | ((unsigned __int64)*(unsigned __int16 *)(v10 + 96) << 48);
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
