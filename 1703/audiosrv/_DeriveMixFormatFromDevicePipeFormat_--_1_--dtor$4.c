/*
 * XREFs of _DeriveMixFormatFromDevicePipeFormat_::_1_::dtor$4 @ 0x18009B680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeriveMixFormatFromDevicePipeFormat_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 128));
}
