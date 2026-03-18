/*
 * XREFs of _get_fpsr @ 0x14018AD50
 * Callers:
 *     _clrfp @ 0x14016EA3C (_clrfp.c)
 *     _ctrlfp @ 0x14016EA60 (_ctrlfp.c)
 *     _set_statfp @ 0x14016EAE4 (_set_statfp.c)
 *     _statfp @ 0x14016EB0C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
