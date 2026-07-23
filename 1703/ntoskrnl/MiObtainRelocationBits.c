/*
 * XREFs of MiObtainRelocationBits @ 0x140495FBC
 * Callers:
 *     MiSelectImageBase @ 0x140495CE8 (MiSelectImageBase.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiSelectRelocationStartHint @ 0x1404960A4 (MiSelectRelocationStartHint.c)
 */

__int64 __fastcall MiObtainRelocationBits(PRTL_BITMAP *a1, unsigned __int16 a2, ULONG a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  ULONG v6; // r13d
  ULONG ClearBitsAndSet; // eax
  ULONG v9; // ebp
  _RTL_BITMAP *v10; // rcx
  ULONG v12; // r15d
  __int64 v13; // r9
  ULONG started; // eax
  ULONG v15; // r14d
  _RTL_BITMAP *v16; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036BF68, 0LL);
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
  started = MiSelectRelocationStartHint(a1, (unsigned __int16)v6, a3, v13);
  v9 = started;
  if ( started != -1 )
  {
    RtlSetBits(*a1, started, v6);
    RtlSetBits(a1[1], v9, v6);
LABEL_3:
    if ( a4 == 1 )
    {
      v15 = a3 - v6;
      RtlClearBits(*a1, v15, v6);
      v16 = a1[1];
      if ( v16 )
        RtlClearBits(v16, v15, v6);
    }
  }
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BF68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BF68);
  KeAbPostRelease((ULONG_PTR)&qword_14036BF68);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v9;
}
