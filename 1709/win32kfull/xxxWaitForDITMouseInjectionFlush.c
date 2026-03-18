/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1C010F654
 * Callers:
 *     xxxSendInput @ 0x1C009CEF0 (xxxSendInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01E1B50 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x1C00A3A98 (xxxRemoveQueueCompletion.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxWaitForDITMouseInjectionFlush()
{
  BOOL v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int16 v4; // si
  NTSTATUS v5; // ebx
  __int64 result; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  while ( gbMouseInjectionBlockedOnDIT == 1 )
  {
    ++gcDITMouseInjectionWaiters;
    LeaveCrit();
    KeWaitForSingleObject(gpsemDITMouseInjectionWaiters, UserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
  }
  gbMouseInjectionBlockedOnDIT = 1;
  LeaveCrit();
  v0 = (unsigned __int8)InitiateWaitForInjectionCompletion(WakeInjectedFlushWaiter) != 0;
  EnterCrit(0LL, 1LL);
  if ( v0 )
  {
    v3 = *(_QWORD *)(gptiCurrent + 424LL);
    *(_DWORD *)(gptiCurrent + 1184LL) |= 0x400000u;
    v4 = *(_WORD *)(v3 + 10);
    Object[0] = gpkeDITMouseInjectionResponseEvent;
    Object[1] = *(PVOID *)(gptiCurrent + 1376LL);
    while ( 1 )
    {
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) = 64;
      UserSessionSwitchLeaveCrit(v2, v1);
      v5 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
      EnterCrit(0LL, 1LL);
      if ( v5 != 1 )
        break;
      xxxRemoveQueueCompletion();
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 6LL) & 0x40) != 0 )
        xxxReceiveMessage(gptiCurrent);
    }
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) = v4;
    *(_DWORD *)(gptiCurrent + 1184LL) &= ~0x400000u;
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
