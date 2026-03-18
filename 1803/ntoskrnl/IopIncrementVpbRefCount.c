/*
 * XREFs of IopIncrementVpbRefCount @ 0x1400DC40C
 * Callers:
 *     IopMountInitializeVpb @ 0x140006270 (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x140232B58 (IopReferenceVerifyVpb.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140592DF0 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopIncrementVpbRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int64 v3; // rbx
  int v4; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( a2 )
  {
    v3 = KeAcquireQueuedSpinLock(9uLL);
    v4 = ++*(_DWORD *)(BugCheckParameter2 + 28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)KeGetPcr()->NtTib.ArbitraryUserPointer + 6);
    __writecr8(v3);
  }
  else
  {
    v4 = ++*(_DWORD *)(BugCheckParameter2 + 28);
  }
  if ( v4 <= 0 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v6 )
    {
      IoAddTriageDumpDataBlock(v6, 336LL);
      v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v7 )
      {
        IoAddTriageDumpDataBlock(v7, 336LL);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, *(unsigned int *)(BugCheckParameter2 + 28));
  }
  return (unsigned int)v4;
}
