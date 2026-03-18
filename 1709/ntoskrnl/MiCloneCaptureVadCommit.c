/*
 * XREFs of MiCloneCaptureVadCommit @ 0x1401207B0
 * Callers:
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiCloneDiscardVadCommit @ 0x1406E4B5C (MiCloneDiscardVadCommit.c)
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
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // r14
  unsigned __int64 v12; // rbx
  __int64 NextPageTable; // rax
  unsigned __int64 v14; // rsi
  int v15; // r8d
  __int64 v16; // r14
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  _DWORD *v20; // rax
  LONG *v21; // rbx
  KIRQL v22; // [rsp+78h] [rbp+10h]
  int v23; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+20h]

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
  v24 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  SharedVm = MiGetSharedVm((__int64)v6);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v11 = v9;
  v12 = v24;
  v22 = v9;
  while ( 1 )
  {
    if ( v7 > v12 || (NextPageTable = MiGetNextPageTable(v7, v12, 0LL, v11, 4u, &v23)) == 0 )
    {
      LOBYTE(v10) = v11;
      MiUnlockWorkingSetExclusive((__int64)v6, v10);
      goto LABEL_10;
    }
    v14 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
    v15 = *v4;
    v16 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
    if ( !*v4 )
      break;
    v18 = *(_QWORD *)&v3[2 * (v15 - 1) + 4];
    v19 = v18 & 0x1FFFFF;
    if ( v19 + 1 < v19 )
      break;
    if ( v19 == 0x1FFFFF )
      break;
    v10 = v18 & 0xFFFFFFFFFFE00000uLL;
    if ( (v18 & 0xFFFFFFFFFFE00000uLL) + ((v19 + 1) << 21) != v16 )
      break;
    *(_QWORD *)&v3[2 * (v15 - 1) + 4] = v10 | (v18 + 1) & 0x1FFFFF;
LABEL_8:
    v11 = v22;
    v7 = v14 + 4096;
  }
  if ( v15 != 16 )
  {
LABEL_7:
    *(_QWORD *)&v3[2 * (*v4)++ + 4] = v16;
    goto LABEL_8;
  }
  LOBYTE(v10) = v22;
  MiUnlockWorkingSetExclusive((__int64)v6, v10);
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6356694Du);
  if ( v20 )
  {
    v4 = v20 + 2;
    *(_QWORD *)v20 = v3;
    v20[2] = 0;
    v3 = v20;
    v21 = MiGetSharedVm((__int64)v6);
    ExAcquireSpinLockExclusive(v21);
    v21[1] = 0;
    v12 = v24;
    goto LABEL_7;
  }
  v5 = -1073741670;
LABEL_10:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v5 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v5;
}
