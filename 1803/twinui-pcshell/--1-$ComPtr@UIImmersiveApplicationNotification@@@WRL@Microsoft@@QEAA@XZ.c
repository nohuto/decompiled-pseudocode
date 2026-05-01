/*
 * XREFs of ??1?$ComPtr@UIImmersiveApplicationNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F895C
 * Callers:
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___::Run_::_1_::dtor$0 @ 0x1800B1BC0 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___--Run_-.c)
 *     __lambda_c35d5355421e51b91e1b7dc40faf7951_::operator()_::_1_::dtor$1 @ 0x1800B1BDC (__lambda_c35d5355421e51b91e1b7dc40faf7951_--operator()_--_1_--dtor$1.c)
 *     __lambda_497cdd3be1990e13318bbe793e150545_::operator()_::_1_::dtor$0 @ 0x180115A28 (__lambda_497cdd3be1990e13318bbe793e150545_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveApplicationNotification>::~ComPtr<IImmersiveApplicationNotification>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IImmersiveApplicationNotification>::InternalRelease(a1);
}
