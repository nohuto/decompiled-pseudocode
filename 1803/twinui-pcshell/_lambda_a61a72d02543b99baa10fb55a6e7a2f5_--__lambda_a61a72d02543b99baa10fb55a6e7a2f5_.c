/*
 * XREFs of _lambda_a61a72d02543b99baa10fb55a6e7a2f5_::__lambda_a61a72d02543b99baa10fb55a6e7a2f5_ @ 0x1800F98DC
 * Callers:
 *     _CIAMGlobals::QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f__&___ptr64__::_1_::dtor$1 @ 0x1800B130C (_CIAMGlobals--QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f__-___ea_1800B130C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180016678 (-InternalRelease@-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_a61a72d02543b99baa10fb55a6e7a2f5_::__lambda_a61a72d02543b99baa10fb55a6e7a2f5_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
