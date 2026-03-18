/*
 * XREFs of _statfp @ 0x140163310
 * Callers:
 *     _raise_exc_ex @ 0x140162F54 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14018AA50 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
