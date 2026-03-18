/*
 * XREFs of _clrfp @ 0x1C00AB6A0
 * Callers:
 *     _raise_exc_ex @ 0x1C00AB3E4 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1C00AB79A (_fclrf.c)
 *     _get_fpsr @ 0x1C00AB810 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
