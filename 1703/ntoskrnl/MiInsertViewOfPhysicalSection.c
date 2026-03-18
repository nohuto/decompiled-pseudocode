/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x140162EEC
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiInsertVad @ 0x1400C1CF0 (MiInsertVad.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertPhysicalPteMapping @ 0x140123724 (MiInsertPhysicalPteMapping.c)
 */

__int64 __fastcall MiInsertViewOfPhysicalSection(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  ULONG_PTR v4; // rbp
  __int64 v5; // r15
  int v6; // r14d
  __int64 v7; // rsi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r12
  KIRQL v11; // al
  unsigned __int64 v12; // rbx
  __int64 v14; // rdx
  unsigned int v16; // [rsp+88h] [rbp+10h]
  unsigned __int64 v17; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  v16 = (*(_DWORD *)(a2 + 48) >> 3) & 0x1F;
  v3 = 8 * ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v4 = *(_QWORD *)(a2 + 80);
  v5 = a1 + 1280;
  v17 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  v7 = **(_QWORD **)(a2 + 72);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  SharedVm = MiGetSharedVm(v5);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  MiInsertVad(a2, a1);
  for ( ; v3 <= v17; ++v4 )
  {
    if ( v6 || (v3 & 0xFFF) == 0 )
    {
      MiMakeSystemAddressValid(v3, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v10, 1);
      v6 = 0;
    }
    MiInsertPhysicalPteMapping(v3, v4, v16);
    v3 += 8LL;
    if ( (v3 & 0x78) == 0 && ((unsigned int)MiWorkingSetIsContended(v5) || KeShouldYieldProcessor()) )
    {
      LOBYTE(v14) = v10;
      MiRelockWorkingSetExclusive(v5, v14);
      v6 = 1;
    }
  }
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
  ++*(_QWORD *)(v7 + 40);
  ++*(_QWORD *)(v7 + 48);
  v12 = v11;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  __writecr8(v12);
  ++*(_QWORD *)(*(_QWORD *)(a1 + 1296) + 152LL);
  MiUnlockWorkingSetExclusive(v5, v10);
  return MiUnlockVad((__int64)CurrentThread, a2);
}
