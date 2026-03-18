/*
 * XREFs of KiAdjustThreadTimer @ 0x140203CEC
 * Callers:
 *     KeAdjustTimerDelayProcess @ 0x1401FD040 (KeAdjustTimerDelayProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x14007301C (KiSuspendThread.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 */

char __fastcall KiAdjustThreadTimer(__int64 a1, __int64 a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v4; // rdi
  char v8; // bp
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  int v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  v8 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    LOBYTE(v10) = KiSuspendThread(a1, (__int64)CurrentPrcb, v9);
    if ( !(_BYTE)v10 )
      goto LABEL_20;
    v8 = 1;
  }
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(_DWORD *)(a1 + 116) & 0x60000;
  if ( v10 == 393216 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 280);
    if ( a2 >= 0 )
    {
      if ( a2 > 0 )
      {
        LOBYTE(v10) = v11 - a2;
        if ( v11 - a2 < v11 )
          v11 -= a2;
      }
    }
    else
    {
      v11 -= a2;
      if ( v11 > 0 )
        v11 = 0LL;
    }
    *(_QWORD *)(a1 + 280) = v11;
  }
  *(_DWORD *)(a1 + 1504) = a3;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v8 )
    LOBYTE(v10) = KiResumeThread(a1, (__int64)CurrentPrcb, 0LL);
LABEL_20:
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return v10;
}
