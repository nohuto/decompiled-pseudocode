/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x180192B70
 * Callers:
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x1800C6770 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x1800C72F0 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CMILRefCountBase::Release((CMesh2DEffect *)((char *)this + 16));
}
