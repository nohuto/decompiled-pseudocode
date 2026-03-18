/*
 * XREFs of _clrfp @ 0x14016EA3C
 * Callers:
 *     _raise_exc_ex @ 0x14016E754 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x14016EB4A (_fclrf.c)
 *     _get_fpsr @ 0x14018AD50 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
