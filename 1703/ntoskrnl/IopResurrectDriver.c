/*
 * XREFs of IopResurrectDriver @ 0x14014AE98
 * Callers:
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IopResurrectDriver(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // al

  v1 = *(_QWORD *)(a1 + 8);
  v3 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (*(_DWORD *)(a1 + 16) & 1) == 0 && v1 && (*(_DWORD *)(*(_QWORD *)(v1 + 312) + 32LL) & 1) != 0 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)(v1 + 312) + 32LL) &= ~1u;
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 );
    KeReleaseQueuedSpinLock(0xAuLL, v3);
    return 0LL;
  }
  else
  {
    KeReleaseQueuedSpinLock(0xAuLL, v3);
    return 3221225742LL;
  }
}
