/*
 * XREFs of IopReferenceIoAttributionFromProcess @ 0x140020DF8
 * Callers:
 *     IopSetDiskIoAttributionExtension @ 0x140008E14 (IopSetDiskIoAttributionExtension.c)
 *     IoReferenceIoAttributionFromThread @ 0x140020D8C (IoReferenceIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14012BBFC (IopSetDiskIoAttributionFromProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall IopReferenceIoAttributionFromProcess(__int64 a1, char a2, _QWORD *a3)
{
  KIRQL v7; // al
  __int64 v8; // rbx
  KIRQL v9; // bp

  if ( !*(_QWORD *)(a1 + 1968) )
    return 3221226021LL;
  v7 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v8 = *(_QWORD *)(a1 + 1968);
  v9 = v7;
  if ( v8 )
  {
    if ( a2 )
    {
      *a3 = *(_QWORD *)(v8 + 24);
    }
    else
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 32)) <= 1 )
        __fastfail(0xEu);
      *a3 = v8;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  __writecr8(v9);
  return v8 == 0 ? 0xC0000225 : 0;
}
