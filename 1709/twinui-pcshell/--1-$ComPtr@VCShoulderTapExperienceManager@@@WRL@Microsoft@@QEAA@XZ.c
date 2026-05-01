/*
 * XREFs of ??1?$ComPtr@VCShoulderTapExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B56B0
 * Callers:
 *     _ShoulderTapExperienceManagerFactory::GetExperienceManager_::_1_::dtor$2 @ 0x1801EB435 (_ShoulderTapExperienceManagerFactory--GetExperienceManager_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B5300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CShoulderTapExperienceManager>::~ComPtr<CShoulderTapExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(result);
  }
  return result;
}
