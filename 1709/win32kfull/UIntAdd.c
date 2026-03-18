/*
 * XREFs of UIntAdd @ 0x1C0074F7C
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0002190 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BD910 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax

  v3 = -1;
  if ( uAugend + uAddend >= uAugend )
    v3 = uAugend + uAddend;
  *puResult = v3;
  return uAugend + uAddend < uAugend ? 0x80070216 : 0;
}
