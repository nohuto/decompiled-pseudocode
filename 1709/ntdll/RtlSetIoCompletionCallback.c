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

NTSTATUS __cdecl RtlSetIoCompletionCallback(HANDLE FileHandle, APC_CALLBACK_FUNCTION CompletionProc, ULONG Flags)
{
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // al
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( !FileHandle || Flags )
    return -1073741811;
  v5 = RtlpTpRevertCapture(&v10, 0);
  if ( v5 >= 0 )
  {
    if ( RtlpTpIoRegistered )
      goto LABEL_6;
    RtlAcquireSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( RtlpTpIoRegistered )
    {
      v5 = 0;
    }
    else
    {
      v5 = LdrRegisterDllNotification(
             0,
             (PLDR_DLL_NOTIFICATION_FUNCTION)RtlpTpIoDllNotification,
             0LL,
             &RtlpTpIoDllNotificationCookie);
      v7 = RtlpTpIoRegistered;
      if ( v5 >= 0 )
        v7 = 1;
      RtlpTpIoRegistered = v7;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v5 >= 0 )
    {
LABEL_6:
      v5 = RtlpTpIoLookup(&v9, CompletionProc, FileHandle);
      if ( v5 >= 0 )
      {
        v6 = v9;
        *(_QWORD *)(v9 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v6 + 168) = NtCurrentTeb()->ActivityId;
        v5 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(v10);
  return v5;
}
