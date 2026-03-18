/*
 * XREFs of _get_fpsr @ 0x1C00A2180
 * Callers:
 *     _clrfp @ 0x1C00A1F3C (_clrfp.c)
 *     _ctrlfp @ 0x1C00A1F60 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00A1FE4 (_set_statfp.c)
 *     _statfp @ 0x1C00A200C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
