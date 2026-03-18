/*
 * XREFs of KeResumeThread @ 0x1400256A4
 * Callers:
 *     KeAlertResumeThread @ 0x1401FCAB8 (KeAlertResumeThread.c)
 *     PsResumeProcess @ 0x140440D70 (PsResumeProcess.c)
 *     PsResumeThread @ 0x140440ED0 (PsResumeThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1)
{
  char CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  volatile signed __int32 *v4; // rdi
  unsigned int v5; // ebp
  char v6; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe(a1 + 736);
  v5 = *(char *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
  {
    v6 = *(_BYTE *)(a1 + 644) - 1;
    *(_BYTE *)(a1 + 644) = v6;
    if ( !v6 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
      KiResumeThread(a1, CurrentPrcb, 0LL);
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v5;
}
