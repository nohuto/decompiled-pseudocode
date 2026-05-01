/*
 * XREFs of _lambda_3c4ff4ccd576f8db880f0fb482543cc9_::__lambda_3c4ff4ccd576f8db880f0fb482543cc9_ @ 0x18011D78C
 * Callers:
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x180125561 (_CAppViewManager--Switch_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_3c4ff4ccd576f8db880f0fb482543cc9_::__lambda_3c4ff4ccd576f8db880f0fb482543cc9_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(a1);
}
