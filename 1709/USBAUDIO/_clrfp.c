/*
 * XREFs of _clrfp @ 0x1C0007370
 * Callers:
 *     _raise_exc_ex @ 0x1C00070B4 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1C000747A (_fclrf.c)
 *     _get_fpsr @ 0x1C00080C0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
