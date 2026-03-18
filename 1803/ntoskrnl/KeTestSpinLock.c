/*
 * XREFs of KeTestSpinLock @ 0x1400D3E80
 * Callers:
 *     KiDecodeMcaFault @ 0x140192740 (KiDecodeMcaFault.c)
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
