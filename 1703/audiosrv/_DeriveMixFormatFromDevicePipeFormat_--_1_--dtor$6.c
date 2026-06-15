/*
 * XREFs of _DeriveMixFormatFromDevicePipeFormat_::_1_::dtor$6 @ 0x18009B698
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeriveMixFormatFromDevicePipeFormat_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>((CAudioMediaType **)(a2 + 128));
}
