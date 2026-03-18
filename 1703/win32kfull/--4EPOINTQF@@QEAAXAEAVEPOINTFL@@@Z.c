/*
 * XREFs of ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C0238C64
 * Callers:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0004120 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     bXformUnitVector @ 0x1C0238DBC (bXformUnitVector.c)
 *     vLTimesVtfl @ 0x1C0238EE8 (vLTimesVtfl.c)
 * Callees:
 *     vEfToLfx @ 0x1C0238F74 (vEfToLfx.c)
 */

__int64 __fastcall EPOINTQF::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx

  vEfToLfx(a2, a1);
  return vEfToLfx(v2 + 4, v3 + 8);
}
