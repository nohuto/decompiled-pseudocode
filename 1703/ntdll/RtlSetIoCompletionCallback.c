/*
 * XREFs of RtlSetIoCompletionCallback @ 0x180105CA0
 * Callers:
 *     <none>
 * Callees:
 *     LdrRegisterDllNotification @ 0x1800041A0 (LdrRegisterDllNotification.c)
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     sub_180012FFC @ 0x180012FFC (sub_180012FFC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180106250 @ 0x180106250 (sub_180106250.c)
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
  v6 = sub_180012CB0(&TokenHandle, 0);
  if ( v6 >= 0 )
  {
    if ( byte_18015C7E0 )
      goto LABEL_13;
    RtlAcquireSRWLockExclusive(&stru_18015C7D8);
    if ( byte_18015C7E0 )
    {
      v6 = 0;
    }
    else
    {
      v6 = LdrRegisterDllNotification(0, NotificationFunction, 0LL, &Cookie);
      v7 = byte_18015C7E0;
      if ( v6 >= 0 )
        v7 = 1;
      byte_18015C7E0 = v7;
    }
    RtlReleaseSRWLockExclusive(&stru_18015C7D8);
    if ( v6 >= 0 )
    {
LABEL_13:
      v6 = sub_180106250(&v9, CompletionProc, FileHandle);
      if ( v6 >= 0 )
      {
        v8 = v9;
        *(_QWORD *)(v9 + 160) = NtCurrentTeb()->SubProcessTag;
        *(GUID *)(v8 + 168) = NtCurrentTeb()->ActivityId;
        v6 = 0;
      }
    }
  }
  sub_180012FFC(TokenHandle);
  return v6;
}
