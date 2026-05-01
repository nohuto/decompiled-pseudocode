/*
 * XREFs of _lambda_378c660b1cef11ab9222d9a9f7813f6b_::__lambda_378c660b1cef11ab9222d9a9f7813f6b_ @ 0x1800F98BC
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553____::_1_::dtor$2 @ 0x1800B1420 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a_ea_1800B1420.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_378c660b1cef11ab9222d9a9f7813f6b_::__lambda_378c660b1cef11ab9222d9a9f7813f6b_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(a1);
}
