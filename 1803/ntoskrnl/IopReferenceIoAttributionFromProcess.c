/*
 * XREFs of IopReferenceIoAttributionFromProcess @ 0x140137ADC
 * Callers:
 *     IopSetDiskIoAttributionExtension @ 0x14003F0B0 (IopSetDiskIoAttributionExtension.c)
 *     IoReferenceIoAttributionFromThread @ 0x140137A70 (IoReferenceIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140137C20 (IopSetDiskIoAttributionFromProcess.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
