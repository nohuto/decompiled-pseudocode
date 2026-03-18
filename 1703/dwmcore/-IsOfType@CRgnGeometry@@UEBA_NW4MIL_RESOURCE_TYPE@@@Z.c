/*
 * XREFs of ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800583A0
 * Callers:
 *     ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180058200 (-IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CRgnGeometry::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  _BOOL8 result; // rax

  v2 = (unsigned int)(a2 - 70);
  result = 0;
  if ( (unsigned int)v2 <= 0x2F )
  {
    v3 = 0xC00000000011LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
