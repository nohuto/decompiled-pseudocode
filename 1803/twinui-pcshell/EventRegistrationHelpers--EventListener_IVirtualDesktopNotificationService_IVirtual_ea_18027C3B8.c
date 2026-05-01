/*
 * XREFs of EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x18027C3B8
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180273F30 (-RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInte.c)
 *     ?SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktop@@@Z @ 0x18027CA10 (-SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationServi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease @ 0x1800A2398 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalR.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef @ 0x1800A23C0 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalA.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification_____ptr64_&___ptr64__0 @ 0x18027B8CC (Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopNotificationForwarderHelpe_ea_18027B8CC.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1 + 1;
  v4 = a1[1];
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 88LL))(v4);
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(v2);
  }
  v12 = 0LL;
  Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(&v12);
  v6 = Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification_____ptr64_____ptr64__0(
         &v12,
         a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 60LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"internal\\shell\\private\\inc\\EventRegistrationHelpers.h",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 80LL))(v12, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 61LL;
    goto LABEL_7;
  }
  v9 = v12;
  if ( *v2 != v12 )
  {
    v13 = v12;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef(&v13);
    v13 = *v2;
    *v2 = v9;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(&v13);
  }
  v7 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalRelease(&v12);
  return v7;
}
