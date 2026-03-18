/*
 * XREFs of MiBeginProcessClean @ 0x14007E820
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020BDF4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiOutlawInswaps @ 0x14007E91C (MiOutlawInswaps.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404CA018 (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx

  v2 = a2 + 1280;
  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
    return 1LL;
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 872, 0LL);
  *(_BYTE *)(a1 + 1744) |= 1u;
  SharedVm = MiGetSharedVm(v2);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  v8 = 0;
  *(_DWORD *)(SharedVm + 4) = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 0x20u);
  if ( (*(_BYTE *)(v2 + 195) & 0xC0) != 0xC0 )
    *(_BYTE *)(v2 + 195) &= 0x3Fu;
  LOBYTE(v7) = v6;
  MiUnlockWorkingSetExclusive(v2, v7);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v9 = MiOutlawInswaps(a2);
  v10 = v9;
  if ( v9 > 2 )
    MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a2 + 1452)), v9);
  LOBYTE(v8) = v10 != 0;
  return v8;
}
