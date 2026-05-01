/*
 * XREFs of ??1?$ComPtr@VCortanaSharedExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18015AF78
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CortanaSharedExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18015A5EE (_Microsoft--WRL--Details--MakeAndInitialize_CortanaSharedExperienceManager_IInspect_ea_18015A5EE.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180095280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienc.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CortanaSharedExperienceManager>::~ComPtr<CortanaSharedExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(result);
  }
  return result;
}
