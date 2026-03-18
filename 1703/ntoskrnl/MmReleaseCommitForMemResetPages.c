/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x14020C848
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     MiPrepareAttachThread @ 0x140022D6C (MiPrepareAttachThread.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAttachThreadDone @ 0x1400AD5BC (MiAttachThreadDone.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeRetryOutswapProcess @ 0x1401FD0EC (KeRetryOutswapProcess.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(_KPROCESS *BugCheckParameter1, int a2)
{
  __int64 v2; // rdi
  LONG *SharedVm; // r13
  unsigned int v6; // ebx
  int v7; // r15d
  LONG *v8; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // si
  __int64 v11; // rcx
  __int16 Object; // [rsp+38h] [rbp-39h] BYREF
  char v14; // [rsp+3Ah] [rbp-37h]
  int v15; // [rsp+3Ch] [rbp-35h]
  _QWORD v16[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  $5BC46E0569261879018906DEC3127961 v18; // [rsp+68h] [rbp-9h] BYREF

  v14 = 6;
  v2 = (__int64)&BugCheckParameter1[1].IdealNode[12];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v16[1] = v16;
  Object = 0;
  v16[0] = v16;
  v15 = 0;
  SharedVm = MiGetSharedVm((__int64)&BugCheckParameter1[1].IdealNode[12]);
  if ( (*(_BYTE *)(v2 + 195) & 0xC0) == 0x80 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
    v7 = MiPrepareAttachThread((__int64)BugCheckParameter1, v2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v7 )
    {
      KiStackAttachProcess(BugCheckParameter1, 1u, (__int64)&v18);
      v8 = MiGetSharedVm(v2);
      v9 = ExAcquireSpinLockExclusive(v8);
      v8[1] = 0;
      v10 = v9;
      if ( (*(_BYTE *)(v2 + 195) & 0xC0) == 0x80 )
      {
        v11 = *((_QWORD *)SharedVm + 4);
        if ( *(_QWORD *)(v11 + 40) )
        {
          v6 = -1073740682;
        }
        else
        {
          *(_QWORD *)(v11 + 40) = &Object;
          *(_DWORD *)(v11 + 48) = *(_DWORD *)(v11 + 48) & 0xFFFFFFFE | (a2 != 0);
          MiUnlockWorkingSetExclusive(v2, v9);
          v10 = 17;
          KeRetryOutswapProcess(&BugCheckParameter1->Header.Lock);
          KiUnstackDetachProcess(&v18, 1LL);
          MiAttachThreadDone(v2);
          v7 = 0;
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          v6 = 0;
        }
      }
      else
      {
        v6 = -1073741431;
      }
      if ( v10 != 17 )
        MiUnlockWorkingSetExclusive(v2, v10);
      if ( v7 )
      {
        KiUnstackDetachProcess(&v18, 1LL);
        MiAttachThreadDone(v2);
      }
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v6;
}
