/*
 * XREFs of MiDeprioritizeVad @ 0x140033E78
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     MiTryLockVad @ 0x140033F8C (MiTryLockVad.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PfCheckDeprioritizeFile @ 0x1404984E4 (PfCheckDeprioritizeFile.c)
 */

__int64 __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // r15d
  __int64 v13; // r14
  __int64 SharedVm; // rbx
  KIRQL v15; // al
  __int64 v16; // rdx
  KIRQL v17; // r12

  v3 = *(_QWORD *)(a3 + 184);
  --*(_WORD *)(a3 + 486);
  if ( (unsigned int)MiTryLockVad(a3, P) )
  {
    if ( (P[12] & 0x80000) == 0 )
    {
      v7 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      v8 = ((a2 >> 12) - v7) >> 8;
      if ( (P[16] & 0x2000000) != 0 )
      {
        v9 = **((_QWORD **)P + 9);
        v10 = MiReferenceControlAreaFile(v9);
        v11 = *(_QWORD *)(v10 + 24);
        MiDereferenceControlAreaFile(v9, v10);
        if ( (*(_DWORD *)(v3 + 772) & 0x4000) != 0 )
          v12 = PfCheckDeprioritizeFile(*(unsigned int *)(v3 + 1180), v11, v8 << 8);
        else
          v12 = 0;
        v13 = v3 + 1280;
        SharedVm = MiGetSharedVm(v13);
        v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
        *(_DWORD *)(SharedVm + 4) = 0;
        v17 = v15;
        if ( v12 == 1 )
        {
          if ( (P[16] & 0x2000000) != 0 )
            MiDeprioritizeVirtualAddresses((((v8 << 8) - 256) << 12) + (v7 << 12), 256LL, v13, 50LL);
        }
        else
        {
          P[16] &= ~0x2000000u;
        }
        LOBYTE(v16) = v17;
        MiUnlockWorkingSetExclusive(v13, v16);
      }
    }
    return MiUnlockAndDereferenceVad(P);
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x80000) != 0 )
      ExFreePoolWithTag(P, 0);
    return KiLeaveGuardedRegionUnsafe(a3);
  }
}
