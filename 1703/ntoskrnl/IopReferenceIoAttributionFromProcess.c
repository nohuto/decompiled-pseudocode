/*
 * XREFs of IopReferenceIoAttributionFromProcess @ 0x140023A7C
 * Callers:
 *     IopSetDiskIoAttributionFromProcess @ 0x140023430 (IopSetDiskIoAttributionFromProcess.c)
 *     IoReferenceIoAttributionFromThread @ 0x140023A10 (IoReferenceIoAttributionFromThread.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall IopReferenceIoAttributionFromProcess(__int64 a1, char a2, _QWORD *a3)
{
  KIRQL v7; // al
  __int64 v8; // rbx
  KIRQL v9; // bp

  if ( !*(_QWORD *)(a1 + 1944) )
    return 3221226021LL;
  v7 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v8 = *(_QWORD *)(a1 + 1944);
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
