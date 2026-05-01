/*
 * XREFs of _lambda_df912a8f06fbc10e53f38c770b2353ff_::__lambda_df912a8f06fbc10e53f38c770b2353ff_ @ 0x1801042D0
 * Callers:
 *     _CIAMGlobals::QueueViewManagementTask__lambda_c9baf6cc87053ec6873845fdd211487a____::_1_::dtor$1 @ 0x1801031B4 (_CIAMGlobals--QueueViewManagementTask__lambda_c9baf6cc87053ec6873845fdd211487a____--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_df912a8f06fbc10e53f38c770b2353ff_::__lambda_df912a8f06fbc10e53f38c770b2353ff_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)(a1 + 8));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1);
}
