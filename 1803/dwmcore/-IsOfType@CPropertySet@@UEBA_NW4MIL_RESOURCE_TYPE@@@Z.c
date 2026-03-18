/*
 * XREFs of ?IsOfType@CPropertySet@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180038750
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002AED0 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CPropertySet::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  bool v4; // al

  if ( a2 == 113 )
    return 1;
  v4 = CPropertyChangeResource::IsOfType(a1, a2);
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
