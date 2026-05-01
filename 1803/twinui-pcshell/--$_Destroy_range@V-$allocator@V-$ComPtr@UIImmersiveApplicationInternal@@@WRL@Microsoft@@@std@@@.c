/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@0@@Z @ 0x180103460
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_ITaskWindow______ptr64_Microsoft::WRL::ComPtr_ITaskWindow______ptr64_std::allocator_Microsoft::WRL::ComPtr_ITaskWindow______::_1_::catch$2 @ 0x1800B61FF (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--ComPtr_ITaskWindow______ptr64_Microsoft--.c)
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal______ptr64_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal______ptr64_std::allocator_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal______::_1_::catch$2 @ 0x1801036E3 (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal_____.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
