/*
 * XREFs of _get_fpsr @ 0x1800A6930
 * Callers:
 *     _control87 @ 0x18009869C (_control87.c)
 *     _clrfp @ 0x180099ACC (_clrfp.c)
 *     _ctrlfp @ 0x180099AEC (_ctrlfp.c)
 *     _set_statfp @ 0x180099B68 (_set_statfp.c)
 *     _statfp @ 0x180099B88 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
