/*
 * XREFs of _statfp @ 0x14018D1D0
 * Callers:
 *     _raise_exc_ex @ 0x14018CE14 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1401B4700 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
