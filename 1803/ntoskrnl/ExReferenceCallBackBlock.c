/*
 * XREFs of ExReferenceCallBackBlock @ 0x14003EA30
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     KiEnumerateCallback @ 0x14015EAA0 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140236F90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140240B00 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1402410F0 (KiHandleBound.c)
 *     PoIssueCoalescingNotification @ 0x14027828C (PoIssueCoalescingNotification.c)
 *     ExCallCallBack @ 0x1404B63E4 (ExCallCallBack.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     PspCallProcessNotifyRoutines @ 0x1404B655C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1404B67E0 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1404B6940 (PsCallImageNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x14052F85C (ExCallSessionCallBack.c)
 *     DbgkLkmdRegisterCallback @ 0x1406280A0 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140628520 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140711BB0 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140711C5C (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140761490 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14077E100 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14077E200 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x1400066B0 (ExAcquireRundownProtectionEx.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1)
{
  signed __int64 v2; // rbx
  signed __int64 v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  KIRQL v9; // si
  signed __int64 Count; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  unsigned __int64 v13; // rdx

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v6 )
        break;
      v2 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  if ( !v2 )
    return 0LL;
  v4 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v4 == 1 && ExAcquireRundownProtectionEx(v5, 0xFu) )
    {
      _m_prefetchw(a1);
      v7 = *a1;
      while ( (v7 & 0xF) == 0 )
      {
        if ( v5 != (struct _EX_RUNDOWN_REF *)(v7 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v8 = v7;
        v7 = _InterlockedCompareExchange64(a1, v7 + 15, v7);
        if ( v8 == v7 )
          return v5;
      }
      _m_prefetchw(v5);
      Count = v5->Count;
      if ( (v5->Count & 1) != 0 )
      {
LABEL_24:
        v13 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v13 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v13 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, Count - 30, Count);
          v11 = Count == v12;
          Count = v12;
          if ( v11 )
            break;
          if ( (v12 & 1) != 0 )
            goto LABEL_24;
        }
      }
    }
  }
  else
  {
    v9 = ExAcquireSpinLockShared(&ExpCallBackFlush);
    v5 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v5 && !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v5 = 0LL;
    ExReleaseSpinLockSharedFromDpcLevel(&ExpCallBackFlush);
    __writecr8(v9);
    if ( !v5 )
      return 0LL;
  }
  return v5;
}
