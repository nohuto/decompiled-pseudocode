/*
 * XREFs of _statfp @ 0x1C00AB770
 * Callers:
 *     _raise_exc_ex @ 0x1C00AB3E4 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C00AB810 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
