/*
 * XREFs of MiCreateCloneChain @ 0x140143330
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x14000AD00 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r14
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r13
  _QWORD *v11; // rcx
  _QWORD *i; // rbx
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD **v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rbx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  v11 = (_QWORD *)Process[1].Affinity.Bitmap[12];
  i = 0LL;
  while ( v11 )
  {
    i = v11;
    v11 = (_QWORD *)*v11;
  }
  while ( i )
  {
    if ( i[6] )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64436D4Du);
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
        break;
      }
      *PoolWithTag = v5;
      v5 = PoolWithTag;
      PoolWithTag[8] = i[8];
      v6 += i[8];
    }
    v15 = (_QWORD **)i[1];
    v16 = i;
    if ( v15 )
    {
      v17 = *v15;
      for ( i = (_QWORD *)i[1]; v17; v17 = (_QWORD *)*v17 )
        i = v17;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v16 )
          break;
        v16 = i;
      }
    }
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v10);
  if ( v4 < 0 )
    goto LABEL_22;
  if ( v6 )
    v4 = PsChargeProcessNonPagedPoolQuota(a1, v6);
  if ( v4 < 0 )
  {
LABEL_22:
    if ( v5 )
    {
      do
      {
        v18 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v18;
      }
      while ( v18 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
