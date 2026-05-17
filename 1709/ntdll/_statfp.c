/*
 * XREFs of _statfp @ 0x180099B88
 * Callers:
 *     _raise_exc_ex @ 0x1800995B0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800A6930 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
