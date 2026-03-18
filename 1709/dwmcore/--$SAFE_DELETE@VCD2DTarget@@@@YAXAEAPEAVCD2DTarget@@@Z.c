/*
 * XREFs of ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800C00F4
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180045370 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180045648 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1801AADD0 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 * Callees:
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180081B90 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 */

CD2DTarget *__fastcall SAFE_DELETE<CD2DTarget>(CD2DTarget **a1)
{
  CD2DTarget *v2; // rcx
  CD2DTarget *result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CD2DTarget::`scalar deleting destructor'(v2);
    *a1 = 0LL;
  }
  return result;
}
