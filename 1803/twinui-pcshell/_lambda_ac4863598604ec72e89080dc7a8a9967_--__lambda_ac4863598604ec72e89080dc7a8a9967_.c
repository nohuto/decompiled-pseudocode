/*
 * XREFs of _lambda_ac4863598604ec72e89080dc7a8a9967_::__lambda_ac4863598604ec72e89080dc7a8a9967_ @ 0x1800F98FC
 * Callers:
 *     _CFrameApplicationPresentation::QueueAsyncCallback_::_1_::dtor$4 @ 0x1800B15B4 (_CFrameApplicationPresentation--QueueAsyncCallback_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_ac4863598604ec72e89080dc7a8a9967_::__lambda_ac4863598604ec72e89080dc7a8a9967_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)(a1 + 16));
  return Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease((__int64 *)a1);
}
