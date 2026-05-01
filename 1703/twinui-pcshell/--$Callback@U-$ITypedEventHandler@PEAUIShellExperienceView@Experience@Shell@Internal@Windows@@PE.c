/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@VCortanaDesktopExperienceView@@PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewChangedArg@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@01@PEAVCortanaDesktopExperienceView@@P83@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@5678@@Z@Z @ 0x1800BF094
 * Callers:
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BBBAC (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1800C2960 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64___lambda_ec059616d63333a6d7b346c725b24965__2_1___lambda_ec059616d63333a6d7b346c725b24965___ @ 0x1800C0038 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_Windows--Founda_ea_1800C0038.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,CortanaDesktopExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 *v5; // rax
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  volatile signed __int32 *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a3;
  v9 = a2;
  v10 = v3;
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64___lambda_ec059616d63333a6d7b346c725b24965__2_1___lambda_ec059616d63333a6d7b346c725b24965___(
                    &v11,
                    &v9);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v11;
  *a1 = v6;
  if ( v7 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
  }
  return a1;
}
