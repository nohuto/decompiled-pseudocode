/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal__std::allocator_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal_____::emplace_back_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal____::_1_::catch$65 @ 0x18010382F
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal__std::allocator_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal_____::emplace_back_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal____::_1_::catch_65(
        __int64 a1,
        unsigned __int64 *a2)
{
  char *v3; // rbx

  v3 = (char *)a2[16];
  IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>((__int64 *)&v3[8 * a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}
