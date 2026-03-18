/*
 * XREFs of MmUpdateMdlTracker @ 0x14020ECE8
 * Callers:
 *     IopProbeAndLockPages @ 0x140038BFC (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x1401EFEC4 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1401F5CD4 (IopProbeAndLockPages_1.c)
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  PEPROCESS v3; // r9
  unsigned int v4; // edi
  _QWORD *i; // rbx
  unsigned __int64 v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(PEPROCESS *)(a1 + 16);
  v4 = 0;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  i = *(_QWORD **)&v3[1].ThreadSeed[6];
  if ( !i )
    return 0LL;
  KeAcquireInStackQueuedSpinLock(i + 2, &LockHandle);
LABEL_6:
  for ( i = (_QWORD *)*i; i; i = (_QWORD *)i[1] )
  {
    v10 = i[3];
    if ( a1 < v10 )
      goto LABEL_6;
    if ( a1 <= v10 )
    {
      if ( a2 || a3 )
      {
        i[8] = a2;
        i[9] = a3;
        memset(i + 10, 0, 0x30uLL);
      }
      break;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  LOBYTE(v4) = i != 0LL;
  return v4;
}
