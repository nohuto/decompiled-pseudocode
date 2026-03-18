/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1C01033A4
 * Callers:
 *     xxxSendInput @ 0x1C003B1F0 (xxxSendInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01D5280 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxRemoveQueueCompletion @ 0x1C00C8860 (xxxRemoveQueueCompletion.c)
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxWaitForDITMouseInjectionFlush()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int16 v6; // si
  NTSTATUS v7; // ebx
  __int64 result; // rax
  PVOID Object[2]; // [rsp+90h] [rbp-38h] BYREF
  int v10; // [rsp+D0h] [rbp+8h] BYREF

  while ( gbMouseInjectionBlockedOnDIT == 1 )
  {
    ++gcDITMouseInjectionWaiters;
    LeaveCrit();
    KeWaitForSingleObject(gpsemDITMouseInjectionWaiters, UserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
  }
  gbMouseInjectionBlockedOnDIT = 1;
  v0 = 0;
  v10 = 0;
  LeaveCrit();
  if ( (gdwMitConfig & 1) != 0 )
  {
    LOBYTE(v0) = (unsigned __int8)InitiateWaitForInjectionCompletion(WakeInjectedFlushWaiter) != 0;
  }
  else
  {
    QueueMouseEvent(0, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0, 0, 0, 0, 1, (__int64)&v10, 0LL);
    v0 = v10;
  }
  EnterCrit(0LL, 1LL);
  if ( v0 )
  {
    v5 = *(_QWORD *)(gptiCurrent + 400LL);
    *(_DWORD *)(gptiCurrent + 1096LL) |= 0x400000u;
    v6 = *(_WORD *)(v5 + 10);
    Object[0] = gpkeDITMouseInjectionResponseEvent;
    Object[1] = *(PVOID *)(gptiCurrent + 1288LL);
    while ( 1 )
    {
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = 64;
      UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
      v7 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
      EnterCrit(0LL, 1LL);
      if ( v7 != 1 )
        break;
      xxxRemoveQueueCompletion();
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
        xxxReceiveMessage(gptiCurrent);
    }
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) = v6;
    *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x400000u;
  }
  gbMouseInjectionBlockedOnDIT = 0;
  result = gcDITMouseInjectionWaiters;
  if ( gcDITMouseInjectionWaiters )
  {
    KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
    result = gcDITMouseInjectionWaiters;
    gcDITMouseInjectionWaiters = 0;
  }
  return result;
}
