/*
 * XREFs of ExCompareExchangeCallBack @ 0x1401720FC
 * Callers:
 *     IoRegisterPriorityCallback @ 0x140172050 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140236F90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140240B00 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x140240E10 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1406280A0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140628170 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x140628250 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x1406282E0 (PsSetLoadImageNotifyRoutineEx.c)
 *     PoRegisterCoalescingCallback @ 0x140628420 (PoRegisterCoalescingCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140628520 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140711BB0 (DbgkLkmdUnregisterCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x140761490 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14077E100 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14077E200 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x1400066B0 (ExAcquireRundownProtectionEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

char __fastcall ExCompareExchangeCallBack(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2, __int64 a3)
{
  signed __int64 i; // rbx
  signed __int64 *v7; // rsi
  signed __int64 Count; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned int v14; // ebx
  signed __int64 v15; // rdx
  bool v16; // zf
  signed __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax

  if ( a2 && !ExAcquireRundownProtectionEx(a2, 0x10u) )
    return 0;
  _m_prefetchw(a1);
  for ( i = *a1; (a3 ^ (unsigned __int64)i) <= 0xF; i = v12 )
  {
    v11 = (unsigned __int64)a2 | 0xF;
    if ( !a2 )
      v11 = 0LL;
    v12 = _InterlockedCompareExchange64(a1, v11, i);
    if ( i == v12 )
      break;
  }
  v7 = (signed __int64 *)(i & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (i & 0xFFFFFFFFFFFFFFF0uLL) != a3 )
  {
    if ( a2 )
    {
      _m_prefetchw(a2);
      Count = a2->Count;
      while ( (Count & 1) == 0 )
      {
        v9 = Count;
        Count = _InterlockedCompareExchange64((volatile signed __int64 *)a2, Count - 32, Count);
        if ( v9 == Count )
          return 0;
      }
      v19 = Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFF0uLL) == 16
        && !_interlockedbittestandreset((volatile signed __int32 *)(v19 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v19 + 8), 0, 0);
      }
    }
    return 0;
  }
  if ( v7 )
  {
    v13 = ExAcquireSpinLockExclusive(&ExpCallBackFlush);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpCallBackFlush);
    __writecr8(v13);
    v14 = (i & 0xF) + 1;
    _m_prefetchw(v7);
    v15 = *v7;
    if ( (*v7 & 1) != 0 )
    {
LABEL_20:
      v18 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18, -(__int64)v14) == v14
        && !_interlockedbittestandreset((volatile signed __int32 *)(v18 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v18 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v17 = _InterlockedCompareExchange64(v7, v15 - 2 * v14, v15);
        v16 = v15 == v17;
        v15 = v17;
        if ( v16 )
          break;
        if ( (v17 & 1) != 0 )
          goto LABEL_20;
      }
    }
  }
  return 1;
}
