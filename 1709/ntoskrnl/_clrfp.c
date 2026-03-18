/*
 * XREFs of _clrfp @ 0x140163240
 * Callers:
 *     _raise_exc_ex @ 0x140162F54 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x14016334A (_fclrf.c)
 *     _get_fpsr @ 0x14018AA50 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
