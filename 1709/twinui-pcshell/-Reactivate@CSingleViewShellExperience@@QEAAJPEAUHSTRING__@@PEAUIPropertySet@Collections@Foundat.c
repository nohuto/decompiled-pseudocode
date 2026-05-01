/*
 * XREFs of ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801D0EBC
 * Callers:
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1800B4194 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ @ 0x1800B5180 (-FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ.c)
 *     ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7BC0 (-OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x1800B8530 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x1800B8698 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1800B8DA0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800BD570 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CBA60 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1800CC838 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 *     ?NotifyView@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800CEE20 (-NotifyView@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections.c)
 *     ?PersistFinalHeight@CStartSizingFrame@@AEAAJH@Z @ 0x1800D0078 (-PersistFinalHeight@CStartSizingFrame@@AEAAJH@Z.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x1801DB81C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 */

__int64 __fastcall CSingleViewShellExperience::Reactivate(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  struct Windows::Foundation::Collections::IPropertySet *v5; // [rsp+30h] [rbp-18h]
  struct Windows::Foundation::Collections::IPropertySet *v6; // [rsp+38h] [rbp-10h]

  return ExperienceManagerUtils::RaiseReactivatedEvent(
           *((ExperienceManagerUtils **)this + 3),
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 32),
           *((_QWORD *)this + 1),
           *((HSTRING *)this + 2),
           a2,
           (HSTRING)a3,
           v5,
           v6);
}
