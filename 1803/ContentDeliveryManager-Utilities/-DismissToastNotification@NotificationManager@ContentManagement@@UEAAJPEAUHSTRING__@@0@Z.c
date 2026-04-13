/*
 * XREFs of ?DismissToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x180010420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::NotificationManager::DismissToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2,
        HSTRING a3)
{
  HRESULT v5; // eax
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v15[1] = -2LL;
  v14 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.UI.Notifications.ToastNotificationManager",
         0x31u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    goto LABEL_14;
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_7ab93c52_0e48_4750_ba9d_1a4113981847, &v14);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_10;
  }
  v15[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 48LL))(v14, v15);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v15[0] + 64LL))(v15[0], a2, a2, a3);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x2B8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x18001059BLL);
  }
  v7 = 0;
LABEL_8:
  v11 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_10:
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v7;
}
