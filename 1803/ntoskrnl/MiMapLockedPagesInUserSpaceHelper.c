/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x140137C60
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiInsertVad @ 0x14001F3B0 (MiInsertVad.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiInsertPhysicalPteMapping @ 0x140137EEC (MiInsertPhysicalPteMapping.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v7; // rdi
  _KPROCESS *Process; // r12
  ULONG_PTR v10; // r14
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  __int64 v13; // rsi
  LONG *SharedVm; // rbx
  KIRQL v15; // al
  unsigned __int8 v16; // di
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // r12
  __int64 v19; // r15
  unsigned int v20; // edi
  __int64 v21; // r8
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // r8

  v7 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( a4 )
  {
    if ( a4 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v12 = a6;
  v13 = (__int64)&Process[1].IdealNode[12];
  if ( a6 )
  {
    SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
    v15 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v16 = v15;
    MiInsertVad(a6, (__int64)Process, 0);
    MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v16);
    v7 = a2;
    v12 = (*(_DWORD *)(a6 + 48) >> 8) & 0x3F;
    ++*(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 240LL);
  }
  v17 = 0LL;
  v18 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  v19 = v7 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v20 = v11;
    if ( a3 )
    {
      v20 = (*(_DWORD *)(48LL * *a3 - 0x58000000000LL + 16) >> 5) & 7;
      v23 = *(_BYTE *)(48LL * *a3 - 0x58000000000LL + 34) >> 6;
      if ( v23 == 2 )
      {
        v20 |= 0x18u;
      }
      else if ( !v23 )
      {
        v20 |= 8u;
      }
      ++a3;
    }
    if ( v17 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v13, v17);
    }
    v17 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v10, 0LL, v12, v18, 0);
LABEL_9:
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v19 + v10), v20);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v13)
       || (unsigned int)MiPageTableLockIsContended(v24, v17)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v13, v17);
      MiUnlockWorkingSetShared(v13, v18, v25);
      v17 = 0LL;
      MiLockWorkingSetShared(v13);
    }
    --a5;
  }
  while ( a5 );
  if ( v17 )
    MiUnlockPageTableInternal(v13, v17);
  return MiUnlockWorkingSetShared(v13, v18, v21);
}
