/*
 * XREFs of KeResumeThread @ 0x14011CDF8
 * Callers:
 *     KeAlertResumeThread @ 0x140202738 (KeAlertResumeThread.c)
 *     PsResumeProcess @ 0x140575920 (PsResumeProcess.c)
 *     PsResumeThread @ 0x140575A80 (PsResumeThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  volatile signed __int32 *v4; // rdi
  unsigned int v5; // ebp
  char v6; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  v5 = *(char *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
  {
    v6 = *(_BYTE *)(a1 + 644) - 1;
    *(_BYTE *)(a1 + 644) = v6;
    if ( !v6 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
      KiResumeThread(a1, (__int64)CurrentPrcb, 0LL);
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v5;
}
