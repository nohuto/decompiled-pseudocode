/*
 * XREFs of MiBeginProcessClean @ 0x14007F22C
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140251154 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiOutlawInswaps @ 0x14007F328 (MiOutlawInswaps.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiFreeWorkingSetSwapContext @ 0x14052D1E0 (MiFreeWorkingSetSwapContext.c)
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
  *(_BYTE *)(a1 + 1752) |= 1u;
  SharedVm = MiGetSharedVm(v2);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  v8 = 0;
  *(_DWORD *)(SharedVm + 4) = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 0x20u);
  if ( (*(_BYTE *)(v2 + 187) & 0x60) != 0x60 )
    *(_BYTE *)(v2 + 187) &= 0x9Fu;
  LOBYTE(v7) = v6;
  MiUnlockWorkingSetExclusive(v2, v7);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v9 = MiOutlawInswaps(a2);
  v10 = v9;
  if ( v9 > 2 )
    MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a2 + 1454)), v9);
  LOBYTE(v8) = v10 != 0;
  return v8;
}
