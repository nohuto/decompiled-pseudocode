/*
 * XREFs of _set_statfp @ 0x1C0007418
 * Callers:
 *     sub_1C0006CE4 @ 0x1C0006CE4 (sub_1C0006CE4.c)
 * Callees:
 *     _set_fpsr @ 0x1C0007470 (_set_fpsr.c)
 *     _get_fpsr @ 0x1C00080C0 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
