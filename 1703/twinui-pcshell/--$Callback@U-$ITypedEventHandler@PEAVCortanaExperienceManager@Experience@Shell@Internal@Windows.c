/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@VXamlLauncherState@@PEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUICortanaShownEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@01@PEAVXamlLauncherState@@P83@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@5678@@Z@Z @ 0x1801590FC
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180153AE0 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64___lambda_a6b59bc3aa7c8484d39bafb26dd10abc__2_1___lambda_a6b59bc3aa7c8484d39bafb26dd10abc___ @ 0x18015B028 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_Windows--Founda_ea_18015B028.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,XamlLauncherState,Windows::Internal::Shell::Experience::ICortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>(
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
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64___lambda_a6b59bc3aa7c8484d39bafb26dd10abc__2_1___lambda_a6b59bc3aa7c8484d39bafb26dd10abc___(
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
