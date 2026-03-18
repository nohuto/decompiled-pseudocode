/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x140212D64
 * Callers:
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KeFreezeProcess @ 0x1400AC584 (KeFreezeProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiBeginProcessClean @ 0x140124890 (MiBeginProcessClean.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140212208 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(unsigned __int16 *Object)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v2; // edi
  unsigned __int8 ApcStateIndex; // al
  LONG *SharedVm; // rax
  __int64 v6; // r9
  struct _KTHREAD *v7; // r12
  LONG *v8; // rbp
  BOOL v9; // ebx
  int v10; // r15d
  LONG *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  LONG *v14; // rbx
  __int64 v15; // rdx
  struct _WORK_QUEUE_ITEM *v16; // rbx
  struct _KEVENT *Blink; // rcx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v19; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v20[48]; // [rsp+60h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, (ULONG_PTR)Object, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)Object, 1, (__int64)v20);
  SharedVm = MiGetSharedVm((__int64)(Object + 640));
  v7 = KeGetCurrentThread();
  v8 = SharedVm;
  v9 = (*((_DWORD *)Object + 193) & 8) != 0;
  if ( (*((_DWORD *)Object + 193) & 8) != 0 )
  {
    v10 = 0;
LABEL_5:
    MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v8 + 1), 1, v9);
    _InterlockedOr((volatile signed __int32 *)Object + 435, 0x100u);
    v11 = MiGetSharedVm((__int64)(Object + 640));
    LOBYTE(v12) = ExAcquireSpinLockExclusive(v11);
    v11[1] = 0;
    *((_BYTE *)Object + 1475) |= 0x60u;
    MiUnlockWorkingSetExclusive((__int64)(Object + 640), v12);
    MiBeginProcessClean((__int64)v7, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v13 = (_QWORD *)*((_QWORD *)v8 + 4);
    v13[2] = MiReAcquireCommitFailWorker;
    v13[3] = Object;
    *v13 = 0LL;
    goto LABEL_6;
  }
  v10 = MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8LL * Object[726]), *((_QWORD *)SharedVm + 1), 1LL, v6);
  if ( !v10 )
    goto LABEL_5;
  MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v8 + 1), 0, 0);
LABEL_6:
  v14 = MiGetSharedVm((__int64)(Object + 640));
  LOBYTE(v15) = ExAcquireSpinLockExclusive(v14);
  v14[1] = 0;
  if ( (HIBYTE(*((_DWORD *)Object + 368)) & 0x60) == 0x40 )
    *((_BYTE *)Object + 1475) = HIBYTE(*((_DWORD *)Object + 368)) & 0x9F | 0x20;
  v16 = (struct _WORK_QUEUE_ITEM *)*((_QWORD *)v8 + 4);
  if ( v10 )
  {
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)(Object + 640), v15);
  v19.SavedApcState.Process = 0LL;
  KiUnstackDetachProcess(&v19, 1LL);
  Blink = (struct _KEVENT *)v16[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v10 )
  {
    ExFreePoolWithTag(v16, 0);
  }
  else
  {
    ExQueueWorkItem(v16, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v2;
}
