/*
 * XREFs of MiBeginProcessClean @ 0x140124890
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140212D64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x1404D2F70 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiOutlawInswaps @ 0x14012498C (MiOutlawInswaps.c)
 *     MiFreeWorkingSetSwapContext @ 0x140444830 (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  LONG *SharedVm; // rbx
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
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  v8 = 0;
  SharedVm[1] = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 0x20u);
  if ( (*(_BYTE *)(v2 + 195) & 0x60) != 0x60 )
    *(_BYTE *)(v2 + 195) &= 0x9Fu;
  LOBYTE(v7) = v6;
  MiUnlockWorkingSetExclusive(v2, v7);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v9 = MiOutlawInswaps(a2);
  v10 = v9;
  if ( v9 > 2 )
    MiFreeWorkingSetSwapContext(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a2 + 1452)), v9);
  LOBYTE(v8) = v10 != 0;
  return v8;
}
