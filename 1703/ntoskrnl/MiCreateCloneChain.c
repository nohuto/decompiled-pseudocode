/*
 * XREFs of MiCreateCloneChain @ 0x140003628
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14009AA70 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  _QWORD *v5; // rsi
  __int64 v6; // r14
  _KPROCESS *Process; // rdi
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  KIRQL v11; // r13
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  _QWORD **v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v11 = v9;
  v12 = (_QWORD *)Process[1].Affinity.Bitmap[12];
  v13 = 0LL;
  while ( v12 )
  {
    v13 = v12;
    v12 = (_QWORD *)*v12;
  }
  while ( v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      break;
    }
    *PoolWithTag = v5;
    v5 = PoolWithTag;
    PoolWithTag[8] = v13[8];
    v16 = v13;
    v6 += v13[8];
    v17 = (_QWORD **)v13[1];
    if ( v17 )
    {
      v18 = *v17;
      v13 = (_QWORD *)v13[1];
      while ( v18 )
      {
        v13 = v18;
        v18 = (_QWORD *)*v18;
      }
    }
    else
    {
      while ( 1 )
      {
        v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v13 || (_QWORD *)*v13 == v16 )
          break;
        v16 = v13;
      }
    }
  }
  LOBYTE(v10) = v11;
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v10);
  if ( v4 < 0 )
    goto LABEL_21;
  if ( v6 )
    v4 = PsChargeProcessNonPagedPoolQuota(a1, v6);
  if ( v4 < 0 )
  {
LABEL_21:
    if ( v5 )
    {
      do
      {
        v19 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v19;
      }
      while ( v19 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
