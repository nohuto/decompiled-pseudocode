/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x1402137F4
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiAttachThreadDone @ 0x1400CAF78 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400CAFFC (MiPrepareAttachThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeRetryOutswapProcess @ 0x140202F18 (KeRetryOutswapProcess.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(_KPROCESS *BugCheckParameter1, int a2)
{
  __int64 v2; // rdi
  LONG *SharedVm; // r13
  unsigned int v6; // ebx
  int v7; // r15d
  LONG *v8; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int16 Object; // [rsp+38h] [rbp-39h] BYREF
  char v16; // [rsp+3Ah] [rbp-37h]
  int v17; // [rsp+3Ch] [rbp-35h]
  _QWORD v18[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v20; // [rsp+68h] [rbp-9h] BYREF

  v16 = 6;
  v2 = (__int64)&BugCheckParameter1[1].IdealNode[12];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v18[1] = v18;
  Object = 0;
  v18[0] = v18;
  v17 = 0;
  SharedVm = MiGetSharedVm((__int64)&BugCheckParameter1[1].IdealNode[12]);
  if ( (*(_BYTE *)(v2 + 195) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    v7 = MiPrepareAttachThread((__int64)BugCheckParameter1, v2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v7 )
    {
      KiStackAttachProcess(BugCheckParameter1, 1, (__int64)&v20);
      v8 = MiGetSharedVm(v2);
      v9 = ExAcquireSpinLockExclusive(v8);
      v8[1] = 0;
      v11 = v9;
      if ( (*(_BYTE *)(v2 + 195) & 0x60) == 0x40 )
      {
        v12 = *((_QWORD *)SharedVm + 4);
        if ( *(_QWORD *)(v12 + 40) )
        {
          v6 = -1073740682;
        }
        else
        {
          *(_QWORD *)(v12 + 40) = &Object;
          v13 = *(_DWORD *)(v12 + 48) & 0xFFFFFFFE | (a2 != 0);
          *(_DWORD *)(v12 + 48) = v13;
          LOBYTE(v13) = v9;
          MiUnlockWorkingSetExclusive(v2, v13);
          v11 = 17;
          KeRetryOutswapProcess(&BugCheckParameter1->Header.Lock);
          KiUnstackDetachProcess(&v20, 1LL);
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
      if ( v11 != 17 )
      {
        LOBYTE(v10) = v11;
        MiUnlockWorkingSetExclusive(v2, v10);
      }
      if ( v7 )
      {
        KiUnstackDetachProcess(&v20, 1LL);
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
