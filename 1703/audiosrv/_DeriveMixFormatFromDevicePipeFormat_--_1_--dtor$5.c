/*
 * XREFs of _DeriveMixFormatFromDevicePipeFormat_::_1_::dtor$5 @ 0x18009B68C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeriveMixFormatFromDevicePipeFormat_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 64));
}
