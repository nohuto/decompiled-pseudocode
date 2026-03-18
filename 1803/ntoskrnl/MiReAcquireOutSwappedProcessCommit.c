/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x140251154
 * Callers:
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     MiBeginProcessClean @ 0x14007F22C (MiBeginProcessClean.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeFreezeProcess @ 0x1400BD244 (KeFreezeProcess.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140250744 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(unsigned __int16 *Object)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  LONG *SharedVm; // rax
  struct _KTHREAD *v5; // r15
  LONG *v6; // rbp
  BOOL v7; // ebx
  int v8; // esi
  LONG *v9; // rbx
  KIRQL v10; // al
  _QWORD *v11; // rax
  LONG *v12; // rbx
  KIRQL v13; // al
  struct _WORK_QUEUE_ITEM *v14; // rbx
  struct _KEVENT *Blink; // rcx
  _BYTE v17[32]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+50h] [rbp-68h]
  _BYTE v19[48]; // [rsp+60h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex )
    KeBugCheckEx(5u, (ULONG_PTR)Object, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  KiStackAttachProcess((_KPROCESS *)Object, 1u, (__int64)v19);
  SharedVm = MiGetSharedVm((__int64)(Object + 640));
  v5 = KeGetCurrentThread();
  v6 = SharedVm;
  v7 = (*((_DWORD *)Object + 193) & 8) != 0;
  if ( (*((_DWORD *)Object + 193) & 8) != 0 )
  {
    v8 = 0;
LABEL_5:
    MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v6 + 1), 1, v7);
    _InterlockedOr((volatile signed __int32 *)Object + 435, 0x100u);
    v9 = MiGetSharedVm((__int64)(Object + 640));
    v10 = ExAcquireSpinLockExclusive(v9);
    v9[1] = 0;
    *((_BYTE *)Object + 1467) |= 0x60u;
    MiUnlockWorkingSetExclusive((__int64)(Object + 640), v10);
    MiBeginProcessClean((__int64)v5, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v11 = (_QWORD *)*((_QWORD *)v6 + 4);
    *v11 = 0LL;
    v11[2] = MiReAcquireCommitFailWorker;
    v11[3] = Object;
    goto LABEL_6;
  }
  v8 = MiChargeCommit(*(_QWORD *)(qword_1403CBD88 + 8LL * Object[727]), *((_QWORD *)SharedVm + 1), 1u);
  if ( !v8 )
    goto LABEL_5;
  MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v6 + 1), 0, 0);
LABEL_6:
  v12 = MiGetSharedVm((__int64)(Object + 640));
  v13 = ExAcquireSpinLockExclusive(v12);
  v12[1] = 0;
  if ( (HIBYTE(*((_DWORD *)Object + 366)) & 0x60) == 0x40 )
    *((_BYTE *)Object + 1467) = HIBYTE(*((_DWORD *)Object + 366)) & 0x9F | 0x20;
  v14 = (struct _WORK_QUEUE_ITEM *)*((_QWORD *)v6 + 4);
  if ( v8 )
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)(Object + 640), v13);
  v18 = 0LL;
  KiUnstackDetachProcess((__int64)v17, 1LL);
  Blink = (struct _KEVENT *)v14[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v8 )
    ExFreePoolWithTag(v14, 0);
  else
    ExQueueWorkItem(v14, CriticalWorkQueue);
  return v8 == 0 ? 0xC000012D : 0;
}
