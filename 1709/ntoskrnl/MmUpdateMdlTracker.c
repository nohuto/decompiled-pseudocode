/*
 * XREFs of MmUpdateMdlTracker @ 0x1402165C0
 * Callers:
 *     IopProbeAndLockPages @ 0x1400BBC78 (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x1401FBAA8 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1401FBB08 (IopProbeAndLockPages_1.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x140561D0C (NtWriteFileGather.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x140192F40 (memset.c)
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
  KeAcquireInStackQueuedSpinLock(i + 3, &LockHandle);
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
        i[9] = a2;
        i[10] = a3;
        memset(i + 11, 0, 0x30uLL);
      }
      break;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  LOBYTE(v4) = i != 0LL;
  return v4;
}
