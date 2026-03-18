/*
 * XREFs of ViIsActiveChannelWcb @ 0x1402AA034
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1408176D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1408178C0 (VfAllocateAdapterChannelEx.c)
 *     ViAdapterCallback @ 0x140819D70 (ViAdapterCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall ViIsActiveChannelWcb(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  _QWORD **v5; // rbx
  KIRQL v6; // r14
  _QWORD *i; // rax

  v2 = (KSPIN_LOCK *)(a1 + 144);
  v4 = 0;
  v5 = (_QWORD **)(a1 + 128);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  for ( i = *v5; v5 != i; i = (_QWORD *)*i )
  {
    if ( a2 == i - 9 )
    {
      v4 = 1;
      break;
    }
  }
  KxReleaseSpinLock(v2);
  __writecr8(v6);
  return v4;
}
