/*
 * XREFs of ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002FF90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CKeyframeAnimation::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 110) & 0xFFFFFFF9) == 0 && a2 != 114;
}
