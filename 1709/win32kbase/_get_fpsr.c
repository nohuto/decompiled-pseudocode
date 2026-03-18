/*
 * XREFs of _get_fpsr @ 0x1C00AB810
 * Callers:
 *     _clrfp @ 0x1C00AB6A0 (_clrfp.c)
 *     _ctrlfp @ 0x1C00AB6C4 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00AB748 (_set_statfp.c)
 *     _statfp @ 0x1C00AB770 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
