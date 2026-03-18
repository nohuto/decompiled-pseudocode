/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x140123508
 * Callers:
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiInsertVad @ 0x1400C1CF0 (MiInsertVad.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiInsertPhysicalPteMapping @ 0x140123724 (MiInsertPhysicalPteMapping.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  _KPROCESS *Process; // rbp
  unsigned __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // r14
  LONG *SharedVm; // rbx
  KIRQL v13; // al
  unsigned __int8 v14; // r12
  unsigned int v15; // ebp
  __int64 v16; // rcx
  int v17; // r15d
  _QWORD *v18; // r13
  unsigned int v19; // ebx
  __int64 v21; // rdx
  _KPROCESS *v22; // [rsp+70h] [rbp+8h]
  __int64 v24; // [rsp+78h] [rbp+10h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v22 = Process;
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
  v11 = (__int64)&Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v13 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v14 = v13;
  if ( a6 )
  {
    MiInsertVad(a6, (__int64)Process);
    v15 = (*(_DWORD *)(a6 + 48) >> 8) & 0x3F;
  }
  else
  {
    v15 = 0;
  }
  v16 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v17 = 1;
  v18 = a3;
  v24 = v16 + 0x98000000000LL;
  do
  {
    v19 = v10;
    if ( v18 )
    {
      v19 = (*(_DWORD *)(48LL * *v18 - 0x58000000000LL + 16) >> 5) & 7;
      if ( (*(_BYTE *)(48LL * *v18 - 0x58000000000LL + 34) & 0xC0) == 0x80 )
      {
        v19 |= 0x18u;
      }
      else if ( *(_BYTE *)(48LL * *v18 - 0x58000000000LL + 34) < 0x40u )
      {
        v19 |= 8u;
      }
      ++v18;
    }
    if ( v17 || (v9 & 0xFFF) == 0 )
    {
      MiMakeSystemAddressValid(v9, 0LL, v15, v14, 1);
      v17 = 0;
    }
    MiInsertPhysicalPteMapping(v9, *(_QWORD *)(v24 + v9), v19);
    v9 += 8LL;
    if ( (v9 & 0x78) == 0 && ((unsigned int)MiWorkingSetIsContended(v11) || KeShouldYieldProcessor()) )
    {
      LOBYTE(v21) = v14;
      MiRelockWorkingSetExclusive(v11, v21);
      v17 = 1;
    }
    --a5;
  }
  while ( a5 );
  if ( a6 )
    ++*(_QWORD *)(*(_QWORD *)&v22[1].IdealGlobalNode + 152LL);
  return MiUnlockWorkingSetExclusive(v11, v14);
}
