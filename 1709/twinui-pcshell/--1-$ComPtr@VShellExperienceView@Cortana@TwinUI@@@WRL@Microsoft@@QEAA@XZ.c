/*
 * XREFs of ??1?$ComPtr@VShellExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A954C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TwinUI::Cortana::ShellExperienceView_Windows::Internal::Shell::Experience::IShellExperienceView_IServiceProvider_____ptr64_HSTRING_______ptr64_HSTRING_______ptr64_HSTRING_______ptr64_enum_ZBID__::_1_::dtor$1 @ 0x1801EAF47 (_Microsoft--WRL--Details--MakeAndInitialize_TwinUI--Cortana--ShellExperienceView_Wi_ea_1801EAF47.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A74E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<TwinUI::Cortana::ShellExperienceView>::~ComPtr<TwinUI::Cortana::ShellExperienceView>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::Release(result);
  }
  return result;
}
