/*
 * XREFs of KeTestSpinLock @ 0x140010A00
 * Callers:
 *     KiDecodeMcaFault @ 0x140173DF0 (KiDecodeMcaFault.c)
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
