/*
 * XREFs of ExReferenceCallBackBlock @ 0x14008BC80
 * Callers:
 *     KiEnumerateCallback @ 0x14003C7A0 (KiEnumerateCallback.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     IoUnregisterPriorityCallback @ 0x1401F4290 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401FD630 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1401FDB50 (KiHandleBound.c)
 *     PoIssueCoalescingNotification @ 0x14022D7D4 (PoIssueCoalescingNotification.c)
 *     ExCallSessionCallBack @ 0x1404C81A8 (ExCallSessionCallBack.c)
 *     ExCallCallBack @ 0x1404F9EF4 (ExCallCallBack.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     PspCallProcessNotifyRoutines @ 0x1404FA068 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1404FA280 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1404FA3F0 (PsCallImageNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x1405A8840 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A8C54 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140682040 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x1406820EC (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x1406C9430 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406E3D90 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406E3E90 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x140061C00 (ExAcquireRundownProtectionEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
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
