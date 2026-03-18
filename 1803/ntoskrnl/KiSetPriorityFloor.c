/*
 * XREFs of KiSetPriorityFloor @ 0x140064D80
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x1400646D8 (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x140064924 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

char __fastcall KiSetPriorityFloor(ULONG_PTR BugCheckParameter1, __int64 a2, char a3, char a4)
{
  char v4; // si
  __int64 v7; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  char v10; // cl
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v7 = a2;
  if ( !a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v12);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
  }
  v10 = *(_BYTE *)(a3 + BugCheckParameter1 + 1392);
  if ( v10 == -1 )
    KeBugCheckEx(0x157u, BugCheckParameter1, a3, 1uLL, 0LL);
  *(_BYTE *)(a3 + BugCheckParameter1 + 1392) = v10 + 1;
  *(_DWORD *)(BugCheckParameter1 + 1408) |= 1 << a3;
  if ( *(char *)(BugCheckParameter1 + 195) < a3 )
  {
    KiSetPriorityThread(BugCheckParameter1, v7, (unsigned int)a3);
    v4 = 1;
  }
  if ( !a4 )
    KiReleaseThreadLockSafe(BugCheckParameter1);
  return v4;
}
