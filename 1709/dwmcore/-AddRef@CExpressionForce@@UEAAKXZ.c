/*
 * XREFs of ?AddRef@CExpressionForce@@UEAAKXZ @ 0x1800C1C70
 * Callers:
 *     ?AddRef@CExpressionForce@@W7EAAKXZ @ 0x1800C72C0 (-AddRef@CExpressionForce@@W7EAAKXZ.c)
 *     ?AddRef@CMesh2DEffect@@WBA@EAAKXZ @ 0x1800C72D0 (-AddRef@CMesh2DEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionForce::AddRef(CExpressionForce *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
