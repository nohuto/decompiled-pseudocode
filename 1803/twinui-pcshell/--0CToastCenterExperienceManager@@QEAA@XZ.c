/*
 * XREFs of ??0CToastCenterExperienceManager@@QEAA@XZ @ 0x180161DB8
 * Callers:
 *     ??$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180161854 (--$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18003A91C (--0-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Wi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@@WRL@Microsoft@@QEAA@XZ @ 0x180161D2C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIBaseExperienceManager@Experience@She.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x180306BF8 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CToastCenterExperienceManager *__fastcall CToastCenterExperienceManager::CToastCenterExperienceManager(
        CToastCenterExperienceManager *this)
{
  __int64 v2; // r11

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>(this);
  *(_QWORD *)this = &CToastCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IBaseExperienceManager'};
  *((_QWORD *)this + 1) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 2) = &CToastCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IToastCenterExperienceManager'};
  *((_QWORD *)this + 3) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 4) = &CToastCenterExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 5) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 6) = &CToastCenterExperienceManager::`vftable'{for `Windows::Foundation::IClosable'};
  *((_QWORD *)this + 7) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>'};
  *((_QWORD *)this + 10) = &CToastCenterExperienceManager::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 96, (char *)this + 80, 0LL);
  *((_BYTE *)this + 296) = v2;
  *((_DWORD *)this + 75) = 82;
  *((GUID *)this + 19) = GUID_NULL;
  *((_QWORD *)this + 40) = v2;
  *((_BYTE *)this + 328) = v2;
  *((_DWORD *)this + 83) = 83;
  *((GUID *)this + 21) = GUID_NULL;
  *((_QWORD *)this + 44) = v2;
  *((_QWORD *)this + 45) = v2;
  *((_QWORD *)this + 46) = v2;
  *((_QWORD *)this + 47) = v2;
  *((_QWORD *)this + 48) = v2;
  *((_QWORD *)this + 49) = v2;
  *((_BYTE *)this + 400) = 1;
  *((_QWORD *)this + 51) = v2;
  *((_WORD *)this + 208) = v2;
  *((_BYTE *)this + 418) = v2;
  *((_QWORD *)this + 53) = v2;
  *((_DWORD *)this + 108) = v2;
  *((_QWORD *)this + 55) = v2;
  *((_QWORD *)this + 56) = v2;
  *((_QWORD *)this + 57) = v2;
  *((_DWORD *)this + 116) = v2;
  *((_QWORD *)this + 59) = v2;
  *((_QWORD *)this + 60) = v2;
  *((_QWORD *)this + 61) = v2;
  *((_QWORD *)this + 62) = v2;
  *((_QWORD *)this + 63) = v2;
  *((_QWORD *)this + 64) = v2;
  *((_QWORD *)this + 65) = v2;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = v2;
  *((_DWORD *)this + 138) = v2;
  *((_QWORD *)this + 70) = v2;
  *((_BYTE *)this + 568) = v2;
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((RTL_SRWLOCK *)this + 72);
  return this;
}
