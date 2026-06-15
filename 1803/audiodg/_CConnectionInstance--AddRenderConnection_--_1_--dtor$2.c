/*
 * XREFs of _CConnectionInstance::AddRenderConnection_::_1_::dtor$2 @ 0x1400202B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::AddRenderConnection_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 96);
}
