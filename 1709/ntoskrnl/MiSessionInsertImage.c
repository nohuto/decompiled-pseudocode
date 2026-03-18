/*
 * XREFs of MiSessionInsertImage @ 0x1401550D4
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x140015FE0 (MmLockLoadedModuleListExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiManageSubsectionView @ 0x1400A3110 (MiManageSubsectionView.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  PVOID PoolWithTag; // rsi
  __int64 v6; // r9
  unsigned __int64 v7; // rdi
  int v8; // eax
  int v9; // r15d
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  bool v12; // r12
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int active; // ebx
  __int64 v18; // rdx
  __int64 v19; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v20; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v21; // [rsp+30h] [rbp-B8h]
  __int64 *v22; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int8 v23; // [rsp+100h] [rbp+18h] BYREF
  KIRQL v24; // [rsp+108h] [rbp+20h]

  v21 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v4 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v21 + 3180));
  v20 = (unsigned __int64 *)(v21 + 104);
  v19 = v21 + 3008;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x69486D4Du);
  if ( !PoolWithTag )
    return 3221225495LL;
  v7 = *(unsigned int *)(*a2 + 8);
  if ( *(_DWORD *)(*a2 + 8) && !(unsigned int)MiChargeCommit(v4, (unsigned int)v7, 0LL, v6) )
  {
    active = -1073741670;
LABEL_23:
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)active;
  }
  v8 = MiControlAreaRequiresCharge((__int64)a2);
  v9 = v8;
  if ( !v8 )
  {
    MiReturnCommit(v4, v7);
    active = -1073740277;
    goto LABEL_23;
  }
  if ( v8 == 2 )
  {
    active = MiReferenceActiveSubsection(a2 + 16, 264, 0x11u);
    if ( active < 0 )
    {
      MiReturnCommit(v4, v7);
      goto LABEL_23;
    }
  }
  SharedVm = MiGetSharedVm(v21 + 3008);
  v11 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v24 = v11;
  MmLockLoadedModuleListExclusive(&v23);
  v12 = 0;
  v13 = *v20;
  if ( !*v20 )
  {
LABEL_11:
    memset(PoolWithTag, 0, 0x58uLL);
    *((_QWORD *)PoolWithTag + 9) = v7;
    *((_QWORD *)PoolWithTag + 5) = a1 | 3;
    *((_DWORD *)PoolWithTag + 15) = 1;
    *((_QWORD *)PoolWithTag + 6) = a1 + (v7 << 12) - 1;
    *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v21 + 8);
    *((_QWORD *)PoolWithTag + 10) = a2;
    if ( v9 == 2 )
      *((_BYTE *)PoolWithTag + 65) = 1;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v21 + 104), v13, v12, (unsigned __int64)PoolWithTag);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v23);
    LOBYTE(v15) = v24;
    MiUnlockWorkingSetExclusive(v19, v15);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 48), v7);
    v22 = a2;
    MiManageSubsectionView((__int64 *)&v22, (_QWORD *)PoolWithTag + 3, 3);
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
  __writecr8(v23);
  LOBYTE(v18) = v24;
  MiUnlockWorkingSetExclusive(v19, v18);
  active = 272;
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
    MiReturnCommit(v4, v7);
  if ( v9 == 2 )
    MiReturnCrossPartitionControlAreaCharges(a2);
  return (unsigned int)active;
}
