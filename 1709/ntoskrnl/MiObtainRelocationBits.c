/*
 * XREFs of MiObtainRelocationBits @ 0x14050475C
 * Callers:
 *     MiSelectImageBase @ 0x140504474 (MiSelectImageBase.c)
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x1400BB560 (RtlFindClearBitsAndSet.c)
 *     MiSelectRelocationStartHint @ 0x140504844 (MiSelectRelocationStartHint.c)
 */

__int64 __fastcall MiObtainRelocationBits(PRTL_BITMAP *a1, unsigned __int16 a2, ULONG a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  ULONG v6; // r13d
  ULONG ClearBitsAndSet; // eax
  ULONG v9; // ebp
  _RTL_BITMAP *v10; // rcx
  ULONG v12; // r15d
  ULONG started; // eax
  ULONG v14; // r14d
  _RTL_BITMAP *v15; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388288, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(*a1, v6, a3);
  v9 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
    goto LABEL_4;
  v10 = a1[1];
  if ( !v10 )
    goto LABEL_3;
  v12 = RtlFindClearBitsAndSet(v10, v6, ClearBitsAndSet);
  if ( v12 == v9 )
    goto LABEL_3;
  RtlClearBits(*a1, v9, v6);
  if ( v12 != -1 )
    RtlClearBits(a1[1], v12, v6);
  started = MiSelectRelocationStartHint(a1, (unsigned __int16)v6, a3, 1LL);
  v9 = started;
  if ( started != -1 )
  {
    RtlSetBits(*a1, started, v6);
    RtlSetBits(a1[1], v9, v6);
LABEL_3:
    if ( a4 == 1 )
    {
      v14 = a3 - v6;
      RtlClearBits(*a1, v14, v6);
      v15 = a1[1];
      if ( v15 )
        RtlClearBits(v15, v14, v6);
    }
  }
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388288);
  KeAbPostRelease((ULONG_PTR)&qword_140388288);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v9;
}
