/*
 * XREFs of UIntMult @ 0x1C01B8B58
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0002190 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C013ECE8 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntMult(UINT uMultiplicand, UINT uMultiplier, UINT *puResult)
{
  unsigned __int64 v3; // r9
  UINT v4; // eax

  v3 = uMultiplier * (unsigned __int64)uMultiplicand;
  v4 = -1;
  if ( v3 <= 0xFFFFFFFF )
    v4 = uMultiplier * uMultiplicand;
  *puResult = v4;
  return v3 > 0xFFFFFFFF ? 0x80070216 : 0;
}
