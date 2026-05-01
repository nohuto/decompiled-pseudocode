/*
 * XREFs of ??1?$ComPtr@VShellExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C02A4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TwinUI::Cortana::ShellExperienceView_Windows::Internal::Shell::Experience::IShellExperienceView_IServiceProvider_____ptr64_HSTRING_______ptr64_HSTRING_______ptr64_HSTRING_______ptr64_enum_ZBID__::_1_::dtor$0 @ 0x18019CC25 (_Microsoft--WRL--Details--MakeAndInitialize_TwinUI--Cortana--ShellExperienceView_Windows--Intern.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIShellExperienceView@Experience@Shell@Internal@Windows@@U?$InterfaceList@VIShellExperienceViewLifetime@Cortana@TwinUI@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800BEBE0 (-Release@-$RuntimeClass@U-$InterfaceList@UIShellExperienceView@Experience@Shell@Internal@Windows.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<TwinUI::Cortana::ShellExperienceView>::~ComPtr<TwinUI::Cortana::ShellExperienceView>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShellExperienceView,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::IShellExperienceViewLifetime,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
