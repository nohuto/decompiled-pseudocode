/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x14020BDF4
 * Callers:
 *     MmInSwapProcess @ 0x1400411F0 (MmInSwapProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeFreezeProcess @ 0x140072E2C (KeFreezeProcess.c)
 *     MiBeginProcessClean @ 0x14007E820 (MiBeginProcessClean.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14020B310 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(unsigned __int16 *Object)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v2; // edi
  unsigned __int8 ApcStateIndex; // al
  LONG *SharedVm; // rax
  struct _KTHREAD *v6; // r12
  LONG *v7; // rbp
  BOOL v8; // ebx
  int v9; // r15d
  LONG *v10; // rbx
  KIRQL v11; // al
  _QWORD *v12; // rax
  LONG *v13; // rbx
  KIRQL v14; // dl
  struct _WORK_QUEUE_ITEM *v15; // rbx
  struct _KEVENT *Blink; // rcx
  $5BC46E0569261879018906DEC3127961 v18; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v19[48]; // [rsp+60h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, (ULONG_PTR)Object, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)Object, 1u, (__int64)v19);
  SharedVm = MiGetSharedVm((__int64)(Object + 640));
  v6 = KeGetCurrentThread();
  v7 = SharedVm;
  v8 = (*((_DWORD *)Object + 193) & 8) != 0;
  if ( (*((_DWORD *)Object + 193) & 8) != 0 )
  {
    v9 = 0;
LABEL_5:
    MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v7 + 1), 1, v8);
    _InterlockedOr((volatile signed __int32 *)Object + 435, 0x40000u);
    v10 = MiGetSharedVm((__int64)(Object + 640));
    v11 = ExAcquireSpinLockExclusive(v10);
    v10[1] = 0;
    *((_BYTE *)Object + 1475) |= 0xC0u;
    MiUnlockWorkingSetExclusive((__int64)(Object + 640), v11);
    MiBeginProcessClean((__int64)v6, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v12 = (_QWORD *)*((_QWORD *)v7 + 4);
    v12[2] = MiReAcquireCommitFailWorker;
    v12[3] = Object;
    *v12 = 0LL;
    goto LABEL_6;
  }
  v9 = MiChargeCommit(*(_QWORD *)(qword_14036C8F8 + 8LL * Object[726]), *((_QWORD *)SharedVm + 1), 1uLL);
  if ( !v9 )
    goto LABEL_5;
  MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v7 + 1), 0, 0);
LABEL_6:
  v13 = MiGetSharedVm((__int64)(Object + 640));
  v14 = ExAcquireSpinLockExclusive(v13);
  v13[1] = 0;
  if ( (HIBYTE(*((_DWORD *)Object + 368)) & 0xC0) == 0x80 )
    *((_BYTE *)Object + 1475) = HIBYTE(*((_DWORD *)Object + 368)) & 0x3F | 0x40;
  v15 = (struct _WORK_QUEUE_ITEM *)*((_QWORD *)v7 + 4);
  if ( v9 )
  {
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)(Object + 640), v14);
  v18.SavedApcState.Process = 0LL;
  KiUnstackDetachProcess(&v18, 1LL);
  Blink = (struct _KEVENT *)v15[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v9 )
  {
    ExFreePoolWithTag(v15, 0);
  }
  else
  {
    ExQueueWorkItem(v15, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v2;
}
