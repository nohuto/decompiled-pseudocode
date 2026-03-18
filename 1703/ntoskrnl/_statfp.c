/*
 * XREFs of _statfp @ 0x14016EB0C
 * Callers:
 *     _raise_exc_ex @ 0x14016E754 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14018AD50 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
