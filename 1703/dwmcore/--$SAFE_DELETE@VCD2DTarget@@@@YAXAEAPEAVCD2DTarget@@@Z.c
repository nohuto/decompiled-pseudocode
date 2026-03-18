/*
 * XREFs of ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800C9990
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800ADDF0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800AE630 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1800CDF30 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 * Callees:
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x18007B2BC (--_GCD2DTarget@@QEAAPEAXI@Z.c)
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
