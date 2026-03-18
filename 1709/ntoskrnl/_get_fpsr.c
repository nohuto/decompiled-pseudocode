/*
 * XREFs of _get_fpsr @ 0x14018AA50
 * Callers:
 *     _clrfp @ 0x140163240 (_clrfp.c)
 *     _ctrlfp @ 0x140163264 (_ctrlfp.c)
 *     _set_statfp @ 0x1401632E8 (_set_statfp.c)
 *     _statfp @ 0x140163310 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
