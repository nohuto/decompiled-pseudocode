/*
 * XREFs of ??1?$ComPtr@VCortanaSharedExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A8DF4
 * Callers:
 *     _CortanaExperienceManagerFactory::GetExperienceManager_::_1_::dtor$1 @ 0x1801EAEFF (_CortanaExperienceManagerFactory--GetExperienceManager_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A57D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienc.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CortanaSharedExperienceManager>::~ComPtr<CortanaSharedExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(result);
  }
  return result;
}
