/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x1802224B0
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x1800DE9B0 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x1800DE9C0 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CMILRefCountBase::Release((CMesh2DEffect *)((char *)this + 16));
}
