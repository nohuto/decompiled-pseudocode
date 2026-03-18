/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x14011B418
 * Callers:
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x14008B160 (KiRemoveBoostThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 */

char __fastcall KiCompleteDirectSwitchThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 updated; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread(a1, a2, 0LL);
    _enable();
    v6 = *(_QWORD *)(a1 + 11528);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      if ( v7 > updated )
        *(_QWORD *)(v6 - 184) += v7 - updated;
    }
    LOBYTE(v2) = KiRemoveBoostThread(a1, a2);
    *(_QWORD *)(a2 + 32) = updated;
  }
  return v2;
}
