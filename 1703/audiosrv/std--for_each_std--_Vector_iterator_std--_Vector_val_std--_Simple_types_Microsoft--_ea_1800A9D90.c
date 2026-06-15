/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d62dc145dcfedba70546eeba8120cc1b___ @ 0x1800A9D90
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180004BE4 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     std::_For_each_unchecked_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64__lambda_d62dc145dcfedba70546eeba8120cc1b___ @ 0x1800A9B10 (std--_For_each_unchecked_Microsoft--WRL--ComPtr_IStreamGroupProxy______ptr64__lambda_d62dc145dcf.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d62dc145dcfedba70546eeba8120cc1b___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rcx

  std::_For_each_unchecked_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64__lambda_d62dc145dcfedba70546eeba8120cc1b___(
    a2,
    a3,
    a4);
  v6 = *a4;
  *a1 = *a4;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( *a4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  return a1;
}
