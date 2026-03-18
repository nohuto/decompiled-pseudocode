/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x140251BF0
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiAttachThreadDone @ 0x1400831E4 (MiAttachThreadDone.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiPrepareAttachThread @ 0x1400D4D68 (MiPrepareAttachThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeRetryOutswapProcess @ 0x140240590 (KeRetryOutswapProcess.c)
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
  _BYTE v18[48]; // [rsp+68h] [rbp-9h] BYREF

  v14 = 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (__int64)&BugCheckParameter1[1].IdealNode[12];
  Object = 0;
  v16[1] = v16;
  v15 = 0;
  v16[0] = v16;
  SharedVm = MiGetSharedVm((__int64)&BugCheckParameter1[1].IdealNode[12]);
  if ( (*(_BYTE *)(v2 + 187) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
    v7 = MiPrepareAttachThread((__int64)BugCheckParameter1, v2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v7 )
    {
      KiStackAttachProcess(BugCheckParameter1, 1u, (__int64)v18);
      v8 = MiGetSharedVm(v2);
      v9 = ExAcquireSpinLockExclusive(v8);
      v8[1] = 0;
      v10 = v9;
      if ( (*(_BYTE *)(v2 + 187) & 0x60) == 0x40 )
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
          KiUnstackDetachProcess((__int64)v18, 1LL);
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
        KiUnstackDetachProcess((__int64)v18, 1LL);
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
