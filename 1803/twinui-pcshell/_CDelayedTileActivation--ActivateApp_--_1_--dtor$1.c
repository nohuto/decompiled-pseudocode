/*
 * XREFs of _CDelayedTileActivation::ActivateApp_::_1_::dtor$1 @ 0x1802B46B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDelayedTileActivation::ActivateApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)(a2 + 64));
}
