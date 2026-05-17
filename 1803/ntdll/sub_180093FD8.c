/*
 * XREFs of sub_180093FD8 @ 0x180093FD8
 * Callers:
 *     sub_180093AB0 @ 0x180093AB0 (sub_180093AB0.c)
 * Callees:
 *     sub_180094FFA @ 0x180094FFA (sub_180094FFA.c)
 *     sub_1800A1370 @ 0x1800A1370 (sub_1800A1370.c)
 */

__int64 sub_180093FD8()
{
  __int64 v0; // rbx

  v0 = sub_1800A1370() & 0x3F;
  sub_180094FFA();
  return (unsigned int)v0;
}
