/*
 * XREFs of TppBarrierAdjust @ 0x180071CD8
 * Callers:
 *     TpCancelAsyncIoOperation @ 0x18000BA70 (TpCancelAsyncIoOperation.c)
 *     TppWorkWait @ 0x18000C5D0 (TppWorkWait.c)
 *     TppWaitCompletion @ 0x18000CA10 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x18000CB00 (TppExecuteWaitCallback.c)
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 *     TpStartAsyncIoOperation @ 0x18000F900 (TpStartAsyncIoOperation.c)
 *     TppCancelWait @ 0x18000FF54 (TppCancelWait.c)
 *     TppJobpExecuteCallback @ 0x180013140 (TppJobpExecuteCallback.c)
 *     TpWaitForJobNotification @ 0x180014260 (TpWaitForJobNotification.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 *     TpReleaseCleanupGroupMembers @ 0x180071A00 (TpReleaseCleanupGroupMembers.c)
 *     TppWorkCancelPendingCallbacks @ 0x180071EE0 (TppWorkCancelPendingCallbacks.c)
 *     TpDisassociateCallback @ 0x180081540 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x180087220 (TpWaitForIoCompletion.c)
 *     TpWaitForAlpcCompletion @ 0x180087F10 (TpWaitForAlpcCompletion.c)
 *     TppIopCancelPendingCallbacks @ 0x18010A810 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x18010AB80 (TppWorkUnposted.c)
 * Callees:
 *     TppIteWakeWaiters @ 0x18000A5B0 (TppIteWakeWaiters.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     TppItePush @ 0x180071E24 (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3970 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall TppBarrierAdjust(volatile signed __int64 *a1, int a2, unsigned __int64 *a3, __int64 a4)
{
  char v4; // bp
  int v5; // r15d
  char v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdi
  signed __int64 v11; // rbx
  char *v12; // rdx
  __int64 result; // rax
  _QWORD *v14; // rbx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = (int)a3;
  v6 = 0;
  _m_prefetchw((const void *)a1);
  v8 = *a1;
  v9 = a2;
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v6 = 0;
    }
    else if ( v4 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v4 = 0;
    }
    v10 = v8;
    v11 = (v8 ^ (v9 + v8)) & 0xFFFFFFFFFFFFFFFLL ^ v8;
    v12 = (char *)(v11 & 0xFFFFFFFFFFFFFFFLL);
    if ( (v11 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v10 >> 60) & 8) != 0 )
    {
      v11 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 1), (unsigned __int64)v12, a3, a4);
    }
    else if ( v5 && v12 )
    {
      v11 |= 0x8000000000000000uLL;
      v4 = 1;
      RtlAcquireSRWLockShared(a1 + 1, v12, (__int64)a3, a4);
    }
    result = _InterlockedCompareExchange64(a1, v11, v10);
    v8 = result;
  }
  while ( v10 != result );
  if ( v6 )
  {
    v14 = (_QWORD *)*((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    return TppIteWakeWaiters(v14);
  }
  else if ( v4 )
  {
    TppItePush(a1 + 2, v15);
    RtlReleaseSRWLockShared(a1 + 1);
    return NtWaitForAlertByThreadId(a1 + 2, 0LL);
  }
  return result;
}
