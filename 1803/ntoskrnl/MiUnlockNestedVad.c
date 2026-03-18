/*
 * XREFs of MiUnlockNestedVad @ 0x1405BFC80
 * Callers:
 *     MiFreeVadRange @ 0x1400719E4 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14026B5D8 (MiUnlockAndDereferenceNestedVad.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

char __fastcall MiUnlockNestedVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx

  v4 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40), a2, a3, a4);
  return KeAbPostRelease(v4);
}
