/*
 * XREFs of MiSessionInsertImage @ 0x14016C34C
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiControlAreaRequiresCharge @ 0x1400E481C (MiControlAreaRequiresCharge.c)
 *     MiReferenceActiveSubsection @ 0x1400E5D50 (MiReferenceActiveSubsection.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmLockLoadedModuleListExclusive @ 0x14016113C (MmLockLoadedModuleListExclusive.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  _QWORD *PoolWithTag; // rsi
  unsigned __int64 v6; // rdi
  int v7; // eax
  int v8; // r15d
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  bool v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  int active; // ebx
  unsigned __int64 SessionVm; // [rsp+20h] [rbp-E8h]
  unsigned __int64 *v17; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v18; // [rsp+30h] [rbp-D8h]
  __int64 *v19; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 v20; // [rsp+120h] [rbp+18h] BYREF
  KIRQL v21; // [rsp+128h] [rbp+20h]

  v18 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v4 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v18 + 3182));
  v17 = (unsigned __int64 *)(v18 + 104);
  SessionVm = MiGetSessionVm();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x69486D4Du);
  if ( !PoolWithTag )
    return 3221225495LL;
  v6 = *(unsigned int *)(*a2 + 8);
  if ( *(_DWORD *)(*a2 + 8) && !(unsigned int)MiChargeCommit(v4, (unsigned int)v6, 0) )
  {
    active = -1073741670;
LABEL_23:
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)active;
  }
  v7 = MiControlAreaRequiresCharge((__int64)a2, 2LL);
  v8 = v7;
  if ( !v7 )
  {
    MiReturnCommit(v4, v6);
    active = -1073740277;
    goto LABEL_23;
  }
  if ( v7 == 2 )
  {
    active = MiReferenceActiveSubsection(a2 + 16, 264, 0x11u);
    if ( active < 0 )
    {
      MiReturnCommit(v4, v6);
      goto LABEL_23;
    }
  }
  SharedVm = MiGetSharedVm(SessionVm);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v21 = v10;
  MmLockLoadedModuleListExclusive(&v20);
  v11 = 0;
  v12 = *v17;
  if ( !*v17 )
  {
LABEL_11:
    memset(PoolWithTag, 0, 0x58uLL);
    PoolWithTag[9] = v6;
    PoolWithTag[5] = a1 | 3;
    *((_DWORD *)PoolWithTag + 15) = 1;
    PoolWithTag[6] = a1 + (v6 << 12) - 1;
    *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v18 + 8);
    PoolWithTag[10] = a2;
    if ( v8 == 2 )
      *((_BYTE *)PoolWithTag + 65) = 1;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v18 + 104), v12, v11, PoolWithTag);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v20);
    MiUnlockWorkingSetExclusive(SessionVm, v21);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 48), v6);
    v19 = a2;
    MiManageSubsectionView((__int64 *)&v19, PoolWithTag + 3, 3);
    return 0;
  }
  while ( a1 > *(_QWORD *)(v12 + 48) )
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( !v13 )
    {
      v11 = 1;
      goto LABEL_11;
    }
LABEL_15:
    v12 = v13;
  }
  if ( a1 < (*(_QWORD *)(v12 + 40) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v13 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
    {
      v11 = 0;
      goto LABEL_11;
    }
    goto LABEL_15;
  }
  ++*(_DWORD *)(v12 + 60);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v20);
  MiUnlockWorkingSetExclusive(SessionVm, v21);
  active = 272;
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    MiReturnCommit(v4, v6);
  if ( v8 == 2 )
    MiReturnCrossPartitionControlAreaCharges(a2);
  return (unsigned int)active;
}
