/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x140181AD8
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
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
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertPhysicalPteMapping @ 0x140137EEC (MiInsertPhysicalPteMapping.c)
 */

_QWORD *__fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // r12
  ULONG_PTR v4; // r13
  unsigned __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rdi
  KIRQL v8; // al
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  unsigned __int8 v13; // si
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // [rsp+80h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp+18h]
  unsigned __int64 v23; // [rsp+98h] [rbp+20h]

  v20 = (*(_DWORD *)(a2 + 48) >> 3) & 0x1F;
  v3 = 8 * ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v4 = *(_QWORD *)(a2 + 80);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 1296);
  v23 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v7 = **(_QWORD **)(a2 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
  ++*(_QWORD *)(v7 + 40);
  ++*(_QWORD *)(v7 + 48);
  v9 = v8;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  __writecr8(v9);
  v10 = a1 + 1280;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v12;
  MiInsertVad(a2, a1, 0);
  ++*(_QWORD *)(v6 + 240);
  MiUnlockWorkingSetExclusive(a1 + 1280, v13);
  MiLockWorkingSetShared(a1 + 1280);
  if ( v3 > v23 )
    goto LABEL_8;
  do
  {
    if ( !v5 )
      goto LABEL_9;
    if ( (v3 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v10, v5);
LABEL_9:
      MiMakeSystemAddressValid(v3, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v13, 0);
      v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    MiInsertPhysicalPteMapping(v3, v4, v20);
    v3 += 8LL;
    if ( (v3 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v10)
       || (unsigned int)MiPageTableLockIsContended(v18, v5)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v10, v5);
      MiUnlockWorkingSetShared(v10, v13, v19);
      v5 = 0LL;
      MiLockWorkingSetShared(v10);
    }
    ++v4;
  }
  while ( v3 <= v23 );
  if ( v5 )
    MiUnlockPageTableInternal(v10, v5);
LABEL_8:
  MiUnlockWorkingSetShared(v10, v13, v14);
  return MiUnlockVad((__int64)CurrentThread, a2, v15, v16);
}
