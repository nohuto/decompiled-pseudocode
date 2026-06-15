/*
 * XREFs of ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800D0480
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x180001E40 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_.c)
 */

__int64 __fastcall CAPOWrapperClient::IsOutputFormatSupported(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  return CAPOWrapperClient::IsAudioFormatSupported(
           (__int64)this - 8,
           1LL,
           (CAudioMediaType *)a2,
           (CAudioMediaType *)a3,
           a4);
}
