/*
 * XREFs of _lambda_6363101253bf33f24c351b7ac39c5c85_::__lambda_6363101253bf33f24c351b7ac39c5c85_ @ 0x180104268
 * Callers:
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$2 @ 0x18010798C (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$2.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x1801163EA (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_6363101253bf33f24c351b7ac39c5c85_::__lambda_6363101253bf33f24c351b7ac39c5c85_(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease((__int64 *)(a1 + 16));
}
