/*
 * XREFs of _clrfp @ 0x180099ACC
 * Callers:
 *     _raise_exc_ex @ 0x1800995B0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x18009AA3A (_fclrf.c)
 *     _get_fpsr @ 0x1800A6930 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
