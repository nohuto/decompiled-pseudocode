/*
 * XREFs of RtlSetIoCompletionCallback @ 0x18008FF60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpResumeImpersonation @ 0x180011788 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18001197C (RtlpTpRevertCapture.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrRegisterDllNotification @ 0x180087C60 (LdrRegisterDllNotification.c)
 *     RtlpTpIoLookup @ 0x1800900AC (RtlpTpIoLookup.c)
 */

__int64 __fastcall RtlSetIoCompletionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  int v6; // ebx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  char v10; // al
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 || (_DWORD)a3 )
    return 3221225485LL;
  v6 = RtlpTpRevertCapture(&v13, 0, a3);
  if ( v6 >= 0 )
  {
    if ( RtlpTpIoRegistered )
      goto LABEL_6;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoRegisteredLock, v5, v7, v8);
    if ( RtlpTpIoRegistered )
    {
      v6 = 0;
    }
    else
    {
      v6 = LdrRegisterDllNotification(0, (__int64)RtlpTpIoDllNotification, 0LL, &RtlpTpIoDllNotificationCookie);
      v10 = RtlpTpIoRegistered;
      if ( v6 >= 0 )
        v10 = 1;
      RtlpTpIoRegistered = v10;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v6 >= 0 )
    {
LABEL_6:
      v6 = RtlpTpIoLookup(&v12, a2, a1);
      if ( v6 >= 0 )
      {
        v9 = v12;
        *(_QWORD *)(v12 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v9 + 168) = NtCurrentTeb()->ActivityId;
        v6 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(v13);
  return (unsigned int)v6;
}
