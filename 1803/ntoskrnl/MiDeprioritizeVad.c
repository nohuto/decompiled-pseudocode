/*
 * XREFs of MiDeprioritizeVad @ 0x1400A23D8
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PfCheckDeprioritizeFile @ 0x14054FA08 (PfCheckDeprioritizeFile.c)
 */

__int64 __fastcall MiDeprioritizeVad(char *P, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  volatile signed __int32 *v6; // rsi
  _KLOCK_ENTRY *v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rbx
  ULONG_PTR v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  if ( SLOBYTE(CurrentThread[1].Queue) >= 0 )
  {
    v6 = (volatile signed __int32 *)(P + 40);
    v7 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)(P + 40), 0LL, 1);
    if ( !_interlockedbittestandset64(v6, 0LL) )
    {
      if ( v7 )
        v7->AcquiredByte |= 1u;
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      if ( (*((_DWORD *)P + 12) & 0x20000000) == 0 )
      {
        v8 = *((unsigned int *)P + 6) | ((unsigned __int64)(unsigned __int8)P[32] << 32);
        v9 = (a2 >> 12) - v8;
        if ( (*((_DWORD *)P + 16) & 0x2000000) != 0 )
        {
          v10 = **((_QWORD **)P + 9);
          v11 = MiReferenceControlAreaFile(v10);
          v12 = *(_QWORD *)(v11 + 24);
          MiDereferenceControlAreaFile(v10, v11);
          if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
            && (v13 = v9 & 0xFFFFFFFFFFFFFF00uLL,
                (unsigned int)PfCheckDeprioritizeFile(Process[1].ThreadSeed[1], v12, v13) == 1) )
          {
            if ( (*((_DWORD *)P + 16) & 0x2000000) != 0 )
              MiDeprioritizeVirtualAddresses(
                (v8 << 12) + ((v13 - 256) << 12),
                256LL,
                (__int64)&Process[1].IdealNode[12],
                18);
          }
          else
          {
            *((_DWORD *)P + 16) &= ~0x2000000u;
          }
        }
      }
      return MiUnlockAndDereferenceVad(P);
    }
    if ( v7 )
      KeAbPostReleaseEx((ULONG_PTR)v6, v7);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1
    && (*((_DWORD *)P + 12) & 0x20000000) != 0 )
  {
    ExFreePoolWithTag(P, 0);
  }
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
