/*
 * XREFs of ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x180156E5C
 * Callers:
 *     ??$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180156C24 (--$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 * Callees:
 *     ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18003A91C (--0-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Wi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@WRL@Microsoft@@QEAA@XZ @ 0x180156DC4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UILightDismissNotificatio_ea_180156DC4.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x180306BF8 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CControlCenterExperienceManager *__fastcall CControlCenterExperienceManager::CControlCenterExperienceManager(
        CControlCenterExperienceManager *this)
{
  __int64 v2; // r11

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>(this);
  *(_QWORD *)this = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 1) = &CControlCenterExperienceManager::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 2) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 3) = &CControlCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IBaseExperienceManager'};
  *((_QWORD *)this + 4) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 5) = &CControlCenterExperienceManager::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 6) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 7) = &CControlCenterExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 8) = &CControlCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 11) = &CControlCenterExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  *((_QWORD *)this + 12) = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 104, (char *)this + 88, 0LL);
  *((_QWORD *)this + 38) = v2;
  *((_DWORD *)this + 78) = v2;
  *((_BYTE *)this + 320) = v2;
  *((_DWORD *)this + 81) = 56;
  *(GUID *)((char *)this + 328) = GUID_NULL;
  *((_QWORD *)this + 43) = v2;
  *((_BYTE *)this + 352) = v2;
  *((_DWORD *)this + 89) = 57;
  *(GUID *)((char *)this + 360) = GUID_NULL;
  *((_QWORD *)this + 47) = v2;
  *((_QWORD *)this + 48) = v2;
  *((_QWORD *)this + 49) = v2;
  *((_WORD *)this + 200) = 1;
  *((_QWORD *)this + 52) = v2;
  *((_DWORD *)this + 106) = v2;
  *((_BYTE *)this + 428) = v2;
  *((_QWORD *)this + 54) = v2;
  *((_DWORD *)this + 110) = v2;
  *((_QWORD *)this + 56) = v2;
  *((_QWORD *)this + 57) = v2;
  *((_QWORD *)this + 58) = v2;
  *((_QWORD *)this + 59) = v2;
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((RTL_SRWLOCK *)this + 60);
  return this;
}
