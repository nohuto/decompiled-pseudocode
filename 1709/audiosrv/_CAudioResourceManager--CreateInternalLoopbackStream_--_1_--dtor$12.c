/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$12 @ 0x18009A6BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>((CAudioSessionManager **)(a2 + 176));
}
