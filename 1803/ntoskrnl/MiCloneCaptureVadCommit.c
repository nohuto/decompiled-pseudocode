/*
 * XREFs of MiCloneCaptureVadCommit @ 0x140142A00
 * Callers:
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiCloneDiscardVadCommit @ 0x14074EF78 (MiCloneDiscardVadCommit.c)
 */

__int64 __fastcall MiCloneCaptureVadCommit(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rdi
  int *v4; // r15
  int v5; // ebp
  unsigned __int16 *v6; // r12
  unsigned __int64 v7; // rsi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // r14
  unsigned __int64 v11; // rbx
  __int64 NextPageTable; // rax
  unsigned __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // r14
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  _DWORD *v19; // rax
  LONG *v20; // rbx
  unsigned __int8 v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+20h]

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6356694Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = 0LL;
  v4 = PoolWithTag + 2;
  PoolWithTag[2] = 0;
  v5 = 0;
  v6 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v7 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v23 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  SharedVm = MiGetSharedVm((__int64)v6);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  v11 = v23;
  v21 = v9;
  while ( 1 )
  {
    if ( v7 > v11 || (NextPageTable = MiGetNextPageTable(v7, v11, 0LL, v10, 4, &v22)) == 0 )
    {
      MiUnlockWorkingSetExclusive((__int64)v6, v10);
      goto LABEL_10;
    }
    v13 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
    v14 = *v4;
    v15 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
    if ( !*v4 )
      break;
    v17 = *(_QWORD *)&v3[2 * (v14 - 1) + 4];
    v18 = v17 & 0x1FFFFF;
    if ( v18 + 1 < v18 || v18 == 0x1FFFFF || (v17 & 0xFFFFFFFFFFE00000uLL) + ((v18 + 1) << 21) != v15 )
      break;
    *(_QWORD *)&v3[2 * (v14 - 1) + 4] = v17 & 0xFFFFFFFFFFE00000uLL | (v17 + 1) & 0x1FFFFF;
LABEL_8:
    v10 = v21;
    v7 = v13 + 4096;
  }
  if ( v14 != 16 )
  {
LABEL_7:
    *(_QWORD *)&v3[2 * v14 + 4] = v15;
    ++*v4;
    goto LABEL_8;
  }
  MiUnlockWorkingSetExclusive((__int64)v6, v21);
  v19 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6356694Du);
  if ( v19 )
  {
    v4 = v19 + 2;
    *(_QWORD *)v19 = v3;
    v19[2] = 0;
    v3 = v19;
    v20 = MiGetSharedVm((__int64)v6);
    ExAcquireSpinLockExclusive(v20);
    v20[1] = 0;
    v14 = *v4;
    v11 = v23;
    goto LABEL_7;
  }
  v5 = -1073741670;
LABEL_10:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v5 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v5;
}
