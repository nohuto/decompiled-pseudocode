/*
 * XREFs of EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x18020E1FC
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18020BEF0 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease @ 0x1800A2398 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalR.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef @ 0x1800A23C0 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalA.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification_____ptr64_&___ptr64_ @ 0x180203960 (Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x180210680 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_180210680.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister(a1);
  v10 = 0LL;
  Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification_____ptr64_____ptr64_(
         &v10,
         a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 60LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\shell\\private\\inc\\eventregistrationhelpers.h",
      (const char *)(unsigned int)v4);
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 80LL))(v10, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 61LL;
    goto LABEL_5;
  }
  v7 = v10;
  if ( a1[1] != v10 )
  {
    v11 = v10;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef(&v11);
    v11 = a1[1];
    a1[1] = v7;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(&v11);
  }
  v5 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(&v10);
  return v5;
}
