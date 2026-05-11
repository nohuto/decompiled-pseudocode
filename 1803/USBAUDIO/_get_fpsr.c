/*
 * XREFs of _get_fpsr @ 0x1C000A210
 * Callers:
 *     _clrfp @ 0x1C00094C0 (_clrfp.c)
 *     _ctrlfp @ 0x1C00094E4 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0009568 (_set_statfp.c)
 *     _statfp @ 0x1C0009590 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
