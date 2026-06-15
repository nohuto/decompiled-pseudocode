/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$14 @ 0x18009A6D3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((LPVOID **)(a2 + 160));
}
