/*
 * XREFs of MiObtainRelocationBits @ 0x1404F1C44
 * Callers:
 *     MiSelectImageBase @ 0x1404F1960 (MiSelectImageBase.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiSelectRelocationStartHint @ 0x1404F1D2C (MiSelectRelocationStartHint.c)
 */

__int64 __fastcall MiObtainRelocationBits(PRTL_BITMAP *a1, unsigned __int16 a2, ULONG a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  ULONG v6; // r13d
  ULONG ClearBitsAndSet; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG v12; // ebp
  _RTL_BITMAP *v13; // rcx
  ULONG v15; // r15d
  ULONG started; // eax
  ULONG v17; // r14d
  _RTL_BITMAP *v18; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB428, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(*a1, v6, a3);
  v12 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
    goto LABEL_4;
  v13 = a1[1];
  if ( !v13 )
    goto LABEL_3;
  v15 = RtlFindClearBitsAndSet(v13, v6, ClearBitsAndSet);
  if ( v15 == v12 )
    goto LABEL_3;
  RtlClearBits(*a1, v12, v6);
  if ( v15 != -1 )
    RtlClearBits(a1[1], v15, v6);
  started = MiSelectRelocationStartHint(a1, (unsigned __int16)v6, a3, 1LL);
  v12 = started;
  if ( started != -1 )
  {
    RtlSetBits(*a1, started, v6);
    RtlSetBits(a1[1], v12, v6);
LABEL_3:
    if ( a4 == 1 )
    {
      v17 = a3 - v6;
      RtlClearBits(*a1, v17, v6);
      v18 = a1[1];
      if ( v18 )
        RtlClearBits(v18, v17, v6);
    }
  }
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB428, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB428, v9, v10, v11);
  KeAbPostRelease((ULONG_PTR)&qword_1403CB428);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v12;
}
