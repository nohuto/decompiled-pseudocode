/*
 * XREFs of _IsOffloadConnectorFormatSupportedForMixFormat_::_1_::dtor$3 @ 0x18009CEA4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IsOffloadConnectorFormatSupportedForMixFormat_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 72));
}
