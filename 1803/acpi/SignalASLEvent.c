/*
 * XREFs of SignalASLEvent @ 0x1C004EFE0
 * Callers:
 *     ResetSignal @ 0x1C004F950 (ResetSignal.c)
 * Callees:
 *     DequeueAndReadyContext @ 0x1C004EB74 (DequeueAndReadyContext.c)
 */

void __fastcall SignalASLEvent(__int64 a1)
{
  KIRQL v2; // si

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  if ( !DequeueAndReadyContext((_QWORD **)(a1 + 8)) )
    ++*(_DWORD *)a1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 24), v2);
}
