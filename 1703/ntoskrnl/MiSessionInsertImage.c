/*
 * XREFs of MiSessionInsertImage @ 0x140148C0C
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14006E01C (MmLockLoadedModuleListExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x1400A98F0 (MiManageSubsectionView.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  PVOID PoolWithTag; // rsi
  unsigned __int64 v6; // rdi
  int v7; // eax
  int v8; // edx
  int v9; // r15d
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  bool v12; // r12
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  int active; // ebx
  __int64 v17; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v19; // [rsp+30h] [rbp-B8h]
  __int64 v20[21]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int8 v21; // [rsp+100h] [rbp+18h] BYREF
  KIRQL v22; // [rsp+108h] [rbp+20h]

  v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v4 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v19 + 3180));
  v18 = (unsigned __int64 *)(v19 + 104);
  v17 = v19 + 3008;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x69486D4Du);
  if ( !PoolWithTag )
    return 3221225495LL;
  v6 = *(unsigned int *)(*(_QWORD *)a2 + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)a2 + 8LL) && !(unsigned int)MiChargeCommit(v4, (unsigned int)v6, 0LL) )
  {
    active = -1073741670;
LABEL_23:
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)active;
  }
  v7 = MiControlAreaRequiresCharge();
  v9 = v7;
  if ( !v7 )
  {
    MiReturnCommit(v4, v6);
    active = -1073740277;
    goto LABEL_23;
  }
  if ( v7 == v8 )
  {
    active = MiReferenceActiveSubsection(a2 + 128, 0x108u, 0x11u);
    if ( active < 0 )
    {
      MiReturnCommit(v4, v6);
      goto LABEL_23;
    }
  }
  SharedVm = MiGetSharedVm(v19 + 3008);
  v11 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v22 = v11;
  MmLockLoadedModuleListExclusive(&v21);
  v12 = 0;
  v13 = *v18;
  if ( !*v18 )
  {
LABEL_11:
    memset(PoolWithTag, 0, 0x58uLL);
    *((_QWORD *)PoolWithTag + 9) = v6;
    *((_QWORD *)PoolWithTag + 5) = a1 | 3;
    *((_DWORD *)PoolWithTag + 15) = 1;
    *((_QWORD *)PoolWithTag + 6) = a1 + (v6 << 12) - 1;
    *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v19 + 8);
    *((_QWORD *)PoolWithTag + 10) = a2;
    if ( v9 == 2 )
      *((_BYTE *)PoolWithTag + 65) = 1;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v19 + 104), v13, v12, (unsigned __int64)PoolWithTag);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v21);
    MiUnlockWorkingSetExclusive(v17, v22);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 48), v6);
    v20[0] = a2;
    MiManageSubsectionView(v20, (_QWORD *)PoolWithTag + 3, 3);
    return 0;
  }
  while ( a1 > *(_QWORD *)(v13 + 48) )
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( !v14 )
    {
      v12 = 1;
      goto LABEL_11;
    }
LABEL_16:
    v13 = v14;
  }
  if ( a1 < (*(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v14 = *(_QWORD *)v13;
    if ( !*(_QWORD *)v13 )
    {
      v12 = 0;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  ++*(_DWORD *)(v13 + 60);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v21);
  MiUnlockWorkingSetExclusive(v17, v22);
  active = 272;
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    MiReturnCommit(v4, v6);
  if ( v9 == 2 )
    MiReturnCrossPartitionControlAreaCharges(a2);
  return (unsigned int)active;
}
