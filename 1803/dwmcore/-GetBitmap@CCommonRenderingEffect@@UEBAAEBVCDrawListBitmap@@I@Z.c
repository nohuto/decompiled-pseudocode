/*
 * XREFs of ?GetBitmap@CCommonRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z @ 0x180074150
 * Callers:
 *     _lambda_59bf99de1785f265d3dfac0583631066_::operator() @ 0x180005CFC (_lambda_59bf99de1785f265d3dfac0583631066_--operator().c)
 * Callees:
 *     <none>
 */

const struct CDrawListBitmap *__fastcall CCommonRenderingEffect::GetBitmap(
        CCommonRenderingEffect *this,
        unsigned int a2)
{
  return (CCommonRenderingEffect *)((char *)this + 24 * a2 + 16);
}
