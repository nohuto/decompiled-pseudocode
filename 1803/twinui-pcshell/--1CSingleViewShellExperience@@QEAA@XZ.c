/*
 * XREFs of ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180306D10
 * Callers:
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180153514 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180157068 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z @ 0x180159680 (--_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18015B2B8 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 *     ??_EImeNotificationExperienceManager@@UEAAPEAXI@Z @ 0x18015FAD0 (--_EImeNotificationExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x1801609F0 (--_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x1801620EC (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x18016AC54 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18016E418 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??_GCPeopleTestExperienceManager@@UEAAPEAXI@Z @ 0x18016FC80 (--_GCPeopleTestExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x180170984 (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$11 @ 0x1801730A4 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$11.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x180173180 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180175A70 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x18017A460 (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x180180CA0 (--_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180069C38 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800FCB28 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

void __fastcall CSingleViewShellExperience::~CSingleViewShellExperience(CSingleViewShellExperience *this)
{
  __int64 *v2; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, volatile int *); // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rcx

  v2 = (__int64 *)((char *)this + 104);
  if ( *((_QWORD *)this + 14) )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 56LL))(*v2, *((_QWORD *)this + 14));
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( *((_QWORD *)this + 23) )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 56LL))(*v2, *((_QWORD *)this + 23));
  WindowsDeleteString(*((HSTRING *)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 20);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 19);
  if ( v3 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    *((_QWORD *)this + 12) = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v4,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      ((void (__fastcall *)(__int64))v5)(v4);
  }
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
  if ( v6 )
    (**v6)(v6, 1LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 3);
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
