/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x140009DA8
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140448658 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiInsertVad @ 0x14003ECC0 (MiInsertVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiInsertPhysicalPteMapping @ 0x1401184C0 (MiInsertPhysicalPteMapping.c)
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
  _KPROCESS *Process; // rbp
  ULONG_PTR v9; // rsi
  unsigned int v10; // edi
  unsigned __int16 *v11; // r14
  __int64 SharedVm; // rbx
  KIRQL v13; // al
  KIRQL v14; // r12
  __int64 v15; // rcx
  int v16; // r15d
  _QWORD *v17; // r13
  unsigned int v18; // ebx
  char v19; // al
  __int64 v20; // rdx
  __int64 v23; // [rsp+78h] [rbp+10h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( a4 )
  {
    if ( a4 == 2 )
      v10 |= 0x18u;
  }
  else
  {
    v10 |= 8u;
  }
  v11 = &Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v14 = v13;
  if ( a6 )
    MiInsertVad(a6, Process);
  v15 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v16 = 1;
  v17 = a3;
  v23 = v15 + 0x98000000000LL;
  do
  {
    v18 = v10;
    if ( v17 )
    {
      v18 = (*(_DWORD *)(48LL * *v17 - 0x58000000000LL + 16) >> 5) & 7;
      v19 = *(_BYTE *)(48LL * *v17 - 0x58000000000LL + 34) >> 6;
      if ( v19 == 2 )
      {
        v18 |= 0x18u;
      }
      else if ( !v19 )
      {
        v18 |= 8u;
      }
      ++v17;
    }
    if ( v16 || (v9 & 0xFFF) == 0 )
    {
      MiMakeSystemAddressValid(v9, 1);
      v16 = 0;
    }
    MiInsertPhysicalPteMapping(v9, *(_QWORD *)(v23 + v9), v18);
    v9 += 8LL;
    if ( (v9 & 0x78) == 0 && ((unsigned int)MiWorkingSetIsContended(v11) || KeShouldYieldProcessor()) )
    {
      LOBYTE(v20) = v14;
      MiRelockWorkingSetExclusive(v11, v20);
      v16 = 1;
    }
    --a5;
  }
  while ( a5 );
  if ( a6 )
    ++*(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 152LL);
  LOBYTE(v20) = v14;
  return MiUnlockWorkingSetExclusive(v11, v20);
}
