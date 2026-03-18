/*
 * XREFs of KeTestSpinLock @ 0x1400E09A0
 * Callers:
 *     KiDecodeMcaFault @ 0x140168660 (KiDecodeMcaFault.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( !*SpinLock )
    return 1;
  _mm_pause();
  return 0;
}
