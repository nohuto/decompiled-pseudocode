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

__int64 __fastcall RtlSetIoCompletionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdx
  int v7; // ebx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 || (_DWORD)a3 )
    return 3221225485LL;
  v7 = sub_180058F2C(&v13, 0, a3);
  if ( v7 >= 0 )
  {
    if ( byte_180160918 )
      goto LABEL_13;
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_180160908, v6, v8, v9);
    if ( byte_180160918 )
    {
      v7 = 0;
    }
    else
    {
      v7 = LdrRegisterDllNotification(0, (__int64)sub_1801090D0, 0LL, &qword_180160920);
      v10 = byte_180160918;
      if ( v7 >= 0 )
        v10 = 1;
      byte_180160918 = v10;
    }
    RtlReleaseSRWLockExclusive(&qword_180160908);
    if ( v7 >= 0 )
    {
LABEL_13:
      v7 = sub_180109250(&v12, a2, a1);
      if ( v7 >= 0 )
      {
        v11 = v12;
        *(_QWORD *)(v12 + 160) = NtCurrentTeb()->SubProcessTag;
        *(struct _GUID *)(v11 + 168) = NtCurrentTeb()->ActivityId;
        v7 = 0;
      }
    }
  }
  sub_1800588B4(v13);
  return (unsigned int)v7;
}
