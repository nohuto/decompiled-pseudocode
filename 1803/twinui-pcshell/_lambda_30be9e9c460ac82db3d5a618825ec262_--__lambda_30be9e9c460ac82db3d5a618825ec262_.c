/*
 * XREFs of _lambda_30be9e9c460ac82db3d5a618825ec262_::__lambda_30be9e9c460ac82db3d5a618825ec262_ @ 0x1800F890C
 * Callers:
 *     _CApplicationManager::GetImmersiveApplicationArraySafe_::_1_::dtor$1 @ 0x1800B3C48 (_CApplicationManager--GetImmersiveApplicationArraySafe_--_1_--dtor$1.c)
 *     _CApplicationManager::GetImmersiveApplicationArray_::_1_::dtor$2 @ 0x1800B3E88 (_CApplicationManager--GetImmersiveApplicationArray_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_30be9e9c460ac82db3d5a618825ec262_::__lambda_30be9e9c460ac82db3d5a618825ec262_(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease((__int64 *)(a1 + 8));
}
