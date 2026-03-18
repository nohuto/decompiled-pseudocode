/*
 * XREFs of _clrfp @ 0x1C00A1F3C
 * Callers:
 *     _raise_exc_ex @ 0x1C00A1C84 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1C00A203A (_fclrf.c)
 *     _get_fpsr @ 0x1C00A2180 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
