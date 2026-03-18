/*
 * XREFs of ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x1800A3C84
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::SetToIdentity(CMILMatrix *this)
{
  *((_WORD *)this + 32) = 32085;
  *(_OWORD *)this = _xmm;
  *((_OWORD *)this + 1) = _xmm;
  *((_OWORD *)this + 2) = _xmm;
  *((_OWORD *)this + 3) = _xmm;
}
