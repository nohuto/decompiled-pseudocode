/*
 * XREFs of RtlSetIoCompletionCallback @ 0x180108B30
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800588B4 @ 0x1800588B4 (sub_1800588B4.c)
 *     sub_180058F2C @ 0x180058F2C (sub_180058F2C.c)
 *     LdrRegisterDllNotification @ 0x180082F90 (LdrRegisterDllNotification.c)
 *     sub_180109250 @ 0x180109250 (sub_180109250.c)
 */

NTSTATUS __cdecl RtlSetIoCompletionCallback(HANDLE FileHandle, APC_CALLBACK_FUNCTION CompletionProc, ULONG Flags)
{
  int v6; // ebx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  HANDLE TokenHandle; // [rsp+58h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( !FileHandle || Flags )
    return -1073741811;
  v6 = sub_180058F2C(&TokenHandle, 0);
  if ( v6 >= 0 )
  {
    if ( byte_180160918 )
      goto LABEL_13;
    RtlAcquireSRWLockExclusive(&stru_180160908);
    if ( byte_180160918 )
    {
      v6 = 0;
    }
    else
    {
      v6 = LdrRegisterDllNotification(0, NotificationFunction, 0LL, &Cookie);
      v7 = byte_180160918;
      if ( v6 >= 0 )
        v7 = 1;
      byte_180160918 = v7;
    }
    RtlReleaseSRWLockExclusive(&stru_180160908);
    if ( v6 >= 0 )
    {
LABEL_13:
      v6 = sub_180109250(&v9, CompletionProc, FileHandle);
      if ( v6 >= 0 )
      {
        v8 = v9;
        *(_QWORD *)(v9 + 160) = NtCurrentTeb()->SubProcessTag;
        *(GUID *)(v8 + 168) = NtCurrentTeb()->ActivityId;
        v6 = 0;
      }
    }
  }
  sub_1800588B4(TokenHandle);
  return v6;
}
