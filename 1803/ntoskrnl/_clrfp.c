/*
 * XREFs of _clrfp @ 0x14018D100
 * Callers:
 *     _raise_exc_ex @ 0x14018CE14 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x14018D20A (_fclrf.c)
 *     _get_fpsr @ 0x1401B4700 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
