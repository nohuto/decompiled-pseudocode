/*
 * XREFs of _DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$2 @ 0x18009B086
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 64));
}
