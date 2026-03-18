/*
 * XREFs of ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A37F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsOfType(__int64 a1, int a2)
{
  return a2 == 78 || a2 == 10 || a2 == 94;
}
