/*
 * XREFs of KiAdjustThreadTimer @ 0x140247E70
 * Callers:
 *     KeAdjustTimerDelayProcess @ 0x1402404E0 (KeAdjustTimerDelayProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiResumeThread @ 0x1400419D8 (KiResumeThread.c)
 *     KiSuspendThread @ 0x140044BA8 (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KiAdjustThreadTimer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rsi
  char v9; // r14
  char result; // al
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)(a1 + 736);
  v9 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    result = KiSuspendThread(a1, a2);
    if ( !result )
      goto LABEL_22;
    v9 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x60000) == 0x60000 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 280);
    if ( a3 >= 0 )
    {
      if ( a3 > 0 && v12 - a3 < v12 )
        v12 -= a3;
    }
    else
    {
      v13 = v12 - a3;
      v12 = 0LL;
      if ( v13 <= 0 )
        v12 = v13;
    }
    *(_QWORD *)(a1 + 280) = v12;
  }
  *(_DWORD *)(a1 + 1504) = a4;
  result = KiReleaseThreadLockSafe(a1);
  if ( v9 )
    result = KiResumeThread(a1, a2, 0);
LABEL_22:
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return result;
}
