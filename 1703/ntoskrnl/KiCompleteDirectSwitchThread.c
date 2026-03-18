/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x140041A60
 * Callers:
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x1400E2BA0 (KeReleaseSemaphore.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x1400414C0 (KiRemoveBoostThread.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 */

char __fastcall KiCompleteDirectSwitchThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x10) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 4u);
    _disable();
    v5 = KiEndThreadCycleAccumulation(a1, a2, 0LL);
    KiStartThreadCycleAccumulation(a1, a2, 0LL);
    _enable();
    v6 = *(_QWORD *)(a1 + 11528);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      if ( v7 > v5 )
        *(_QWORD *)(v6 - 184) += v7 - v5;
    }
    LOBYTE(v2) = KiRemoveBoostThread(a1, a2);
    *(_QWORD *)(a2 + 32) = v5;
  }
  return v2;
}
