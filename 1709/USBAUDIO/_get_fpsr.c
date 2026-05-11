/*
 * XREFs of _get_fpsr @ 0x1C00080C0
 * Callers:
 *     _clrfp @ 0x1C0007370 (_clrfp.c)
 *     _ctrlfp @ 0x1C0007394 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0007418 (_set_statfp.c)
 *     _statfp @ 0x1C0007440 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
