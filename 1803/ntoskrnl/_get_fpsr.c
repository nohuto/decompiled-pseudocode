/*
 * XREFs of _get_fpsr @ 0x1401B4700
 * Callers:
 *     _clrfp @ 0x14018D100 (_clrfp.c)
 *     _ctrlfp @ 0x14018D124 (_ctrlfp.c)
 *     _set_statfp @ 0x14018D1A8 (_set_statfp.c)
 *     _statfp @ 0x14018D1D0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
