/*
 * XREFs of ?LaunchToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@0E_K0@Z @ 0x18000F380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ContentManagement::NotificationManager::LaunchToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        GUID *a5,
        HSTRING a6)
{
  HRESULT v9; // eax
  int v10; // ebx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  int v12; // eax
  __int64 v13; // rdx
  HRESULT v14; // eax
  HSTRING v15; // rbx
  __int64 v16; // rcx
  int ActivationFactory; // eax
  int v18; // eax
  HRESULT v19; // eax
  HSTRING v20; // rbx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 (__fastcall ***v28)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v29)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v30; // rcx
  __int64 (__fastcall ***v31)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, _QWORD *); // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rdx
  HRESULT v36; // eax
  HSTRING v37; // rbx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 (__fastcall ***v47)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v49)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-69h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, GUID *, _QWORD *); // [rsp+28h] [rbp-61h] BYREF
  __int64 v51; // [rsp+30h] [rbp-59h] BYREF
  __int64 (__fastcall ***v52)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-51h] BYREF
  __int64 v53; // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall ***v54)(_QWORD, GUID *, _QWORD *); // [rsp+48h] [rbp-41h] BYREF
  __int64 v55; // [rsp+50h] [rbp-39h] BYREF
  __int64 v56; // [rsp+58h] [rbp-31h] BYREF
  __int64 v57; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v58[2]; // [rsp+68h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-11h] BYREF
  HSTRING string; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  v58[1] = -2LL;
  v50 = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(L"Windows.Data.Xml.Dom.XmlDocument", 0x20u, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    __debugbreak();
  }
  v50 = 0LL;
  v10 = RoActivateInstance(string, &v49);
  if ( v10 < 0
    || (*(_QWORD *)&GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
     || *(_QWORD *)GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      ? (v10 = (**v49)(v49, &GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494, &v50),
         ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v49)[2])(v49),
         v11 = v50)
      : (v11 = v49, v50 = v49),
        v10 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x263,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_86;
  }
  v58[0] = 0LL;
  v12 = (**v11)(v11, &GUID_6cd0e74e_ee65_4489_9ebf_ca43e87ba637, v58);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, HSTRING))(*(_QWORD *)v58[0] + 48LL))(v58[0], a2);
    v10 = v12;
    if ( v12 < 0 )
    {
      v13 = 615LL;
      goto LABEL_13;
    }
    v56 = 0LL;
    string = 0LL;
    v14 = WindowsCreateStringReference(L"Windows.UI.Notifications.ToastNotification", 0x2Au, &hstringHeader, &string);
    if ( v14 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = string;
    v16 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    ActivationFactory = RoGetActivationFactory(v15, &GUID_04124b20_82c6_4229_b109_fd9ed4662b53, &v56);
    v10 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x26A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_81:
      v45 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      goto LABEL_83;
    }
    v55 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v56 + 48LL))(v56, v50, &v55);
    v10 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x26D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_79;
    }
    if ( a5 )
    {
      v49 = 0LL;
      v52 = 0LL;
      v51 = 0LL;
      string = 0LL;
      v19 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
      if ( v19 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
        __debugbreak();
      }
      v20 = string;
      v21 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[2])(v21);
      }
      v22 = RoGetActivationFactory(v20, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v49);
      v10 = v22;
      if ( v22 < 0 )
      {
        v23 = 631LL;
LABEL_39:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v23,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v22);
        v27 = v51;
        if ( v51 )
        {
          v51 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        v28 = v52;
        if ( v52 )
        {
          v52 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v28)[2])(v28);
        }
        v29 = v49;
        if ( !v49 )
          goto LABEL_79;
        v49 = 0LL;
        goto LABEL_78;
      }
      v24 = v49;
      v25 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v25)[2])(v25);
      }
      v22 = (*v24)[21](v24, a5, &v52);
      v10 = v22;
      if ( v22 < 0 )
      {
        v23 = 632LL;
        goto LABEL_39;
      }
      v26 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v22 = (**v52)(v52, &GUID_5541d8a7_497c_5aa4_86fc_7713adbf2a2c, &v51);
      v10 = v22;
      if ( v22 < 0 )
      {
        v23 = 633LL;
        goto LABEL_39;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 56LL))(v55, v51);
      v10 = v22;
      if ( v22 < 0 )
      {
        v23 = 634LL;
        goto LABEL_39;
      }
      v30 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      v31 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v31)[2])(v31);
      }
      v32 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v32)[2])(v32);
      }
    }
    v54 = 0LL;
    v33 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v55)(
            v55,
            &GUID_9dfb9fd1_143a_490e_90bf_b9fba7132de7,
            &v54);
    v10 = v33;
    if ( v33 < 0 )
    {
      v34 = 638LL;
LABEL_59:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v34,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v33);
LABEL_76:
      v29 = v54;
      if ( !v54 )
        goto LABEL_79;
      v54 = 0LL;
LABEL_78:
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v29)[2])(v29);
LABEL_79:
      v44 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
      goto LABEL_81;
    }
    v33 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING))(*v54)[6])(v54, a3);
    v10 = v33;
    if ( v33 < 0 )
    {
      v34 = 641LL;
      goto LABEL_59;
    }
    v33 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING))(*v54)[8])(v54, a3);
    v10 = v33;
    if ( v33 < 0 )
    {
      v34 = 645LL;
      goto LABEL_59;
    }
    LOBYTE(v35) = a4;
    v33 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64))(*v54)[10])(v54, v35);
    v10 = v33;
    if ( v33 < 0 )
    {
      v34 = 647LL;
      goto LABEL_59;
    }
    v53 = 0LL;
    string = 0LL;
    v36 = WindowsCreateStringReference(
            L"Windows.UI.Notifications.ToastNotificationManager",
            0x31u,
            &hstringHeader,
            &string);
    if ( v36 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v36);
      __debugbreak();
    }
    v37 = string;
    v38 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v39 = RoGetActivationFactory(v37, &GUID_50ac103f_d235_4598_bbef_98fe4d1a3ad4, &v53);
    v10 = v39;
    if ( v39 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x28A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v39);
LABEL_74:
      v43 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      goto LABEL_76;
    }
    v57 = 0LL;
    v40 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v53 + 56LL))(v53, a6, &v57);
    v10 = v40;
    if ( v40 >= 0 )
    {
      v40 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v57 + 48LL))(v57, v55);
      v10 = v40;
      if ( v40 >= 0 )
      {
        v10 = 0;
LABEL_72:
        v42 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
        }
        goto LABEL_74;
      }
      v41 = 655LL;
    }
    else
    {
      v41 = 653LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v41,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v40);
    goto LABEL_72;
  }
  v13 = 614LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v12);
LABEL_83:
  v46 = v58[0];
  if ( v58[0] )
  {
    v58[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
LABEL_86:
  v47 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v47)[2])(v47);
  }
  return (unsigned int)v10;
}
