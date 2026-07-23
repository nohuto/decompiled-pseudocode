/*
 * XREFs of VF_MARK_FOR_DEFERRED_REMOVE @ 0x140768958
 * Callers:
 *     VfIoDeleteDevice @ 0x140772498 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall VF_MARK_FOR_DEFERRED_REMOVE(struct _LIST_ENTRY *a1)
{
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // rdx
  KIRQL v4; // bl
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&Lock);
  Flink = ViAdapterList.Flink;
  v4 = v2;
  while ( &ViAdapterList != Flink )
  {
    if ( Flink[1].Blink == a1 )
      LOBYTE(Flink[2].Flink) = 1;
    Flink = Flink->Flink;
  }
  KxReleaseSpinLock(&Lock);
  result = v4;
  __writecr8(v4);
  return result;
}
