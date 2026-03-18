/*
 * XREFs of KiClearPriorityFloor @ 0x1400BA210
 * Callers:
 *     KiAbThreadUnboostCpuPriority @ 0x1400BA07C (KiAbThreadUnboostCpuPriority.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

char __fastcall KiClearPriorityFloor(ULONG_PTR BugCheckParameter1, __int64 a2, char a3, char a4)
{
  __int64 v6; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  char v9; // al
  unsigned int v10; // eax
  char v11; // dl
  unsigned __int8 v12; // cl
  char v13; // cl
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v6 = a2;
  if ( !a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v15);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
  }
  v9 = *(_BYTE *)(a3 + BugCheckParameter1 + 1392);
  if ( !v9 )
    KeBugCheckEx(0x157u, BugCheckParameter1, a3, 2uLL, 0LL);
  LOBYTE(v10) = v9 - 1;
  *(_BYTE *)(a3 + BugCheckParameter1 + 1392) = v10;
  if ( !(_BYTE)v10 )
  {
    v10 = *(_DWORD *)(BugCheckParameter1 + 1408) ^ (1 << a3);
    *(_DWORD *)(BugCheckParameter1 + 1408) = v10;
    if ( v10 < 1 << a3 )
    {
      v11 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v11 < 16 )
      {
        v12 = *(_BYTE *)(BugCheckParameter1 + 564);
        LOBYTE(v10) = v12 & 0xF;
        v13 = *(_BYTE *)(BugCheckParameter1 + 563) + (v12 & 0xF) + (v12 >> 4);
        if ( v13 < v11 )
          LOBYTE(v10) = KiSetPriorityThread(BugCheckParameter1, v6, (unsigned int)v13);
      }
    }
  }
  if ( !a4 )
    LOBYTE(v10) = KiReleaseThreadLockSafe(BugCheckParameter1);
  return v10;
}
