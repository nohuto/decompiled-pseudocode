/*
 * XREFs of IopCloseWaitCompletionPacket @ 0x14004FA40
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x14005135C (IopCancelWaitCompletionPacket.c)
 */

void __fastcall IopCloseWaitCompletionPacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v5; // si

  if ( a4 == 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( !*(_BYTE *)(a2 + 104) || !(unsigned __int8)IopCancelWaitCompletionPacket((PVOID)a2) )
    {
      KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 96));
      __writecr8(v5);
    }
  }
}
