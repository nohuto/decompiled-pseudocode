/*
 * XREFs of ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18013CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x1801397F0 (--$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotificatio.c)
 *     ??$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180139920 (--$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotifica.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::SubscribeToServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2)
{
  _QWORD *v4; // r12
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+48h] BYREF
  __int64 v19; // [rsp+90h] [rbp+50h] BYREF

  v4 = (_QWORD *)((char *)this + 520);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 65);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0,
         v4);
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IClassicWindowManager,
           &GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84,
           (char *)this + 528);
    if ( v5 < 0 )
    {
      v6 = 61LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 67);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           (char *)this + 536);
    if ( v5 < 0 )
    {
      v6 = 62LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 71);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 568);
    if ( v5 < 0 )
    {
      v6 = 63LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 72);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
           &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
           (char *)this + 576);
    if ( v5 < 0 )
    {
      v6 = 64LL;
      goto LABEL_3;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 72) + 40LL))(
           *((_QWORD *)this + 72),
           ((unsigned __int64)this + 104) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 72) >> 64));
    if ( v5 < 0 )
    {
      v6 = 66LL;
      goto LABEL_3;
    }
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v4)(
           *v4,
           &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164,
           &v19);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 75LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      return (unsigned int)v5;
    }
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 76LL;
      goto LABEL_18;
    }
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveApplicationNotificationService,
           &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
           &v18);
    v5 = v9;
    if ( v9 < 0 )
    {
      v11 = 80LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_31:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      goto LABEL_32;
    }
    v9 = SmartCookie::Register<IImmersiveApplicationNotificationService,long (IImmersiveApplicationNotificationService::*)(IImmersiveApplicationNotification *,unsigned long *),long (IImmersiveApplicationNotificationService::*)(unsigned long),CApplicationViewManager *>(
           (__int64)this + 328,
           v18,
           v10);
    v5 = v9;
    if ( v9 < 0 )
    {
      v11 = 85LL;
      goto LABEL_23;
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_f42f750a_64a8_4190_951d_c6f7ef4e4ba1,
            &GUID_f8a6c78c_9f19_4417_aaf5_c9807f8aee4f,
            &v17);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v12 = SmartCookie::Register<IEnterpriseIdChangeNotificationProvider,long (IEnterpriseIdChangeNotificationProvider::*)(IEnterpriseIdChangeNotification *,unsigned long *),long (IEnterpriseIdChangeNotificationProvider::*)(unsigned long),CApplicationViewManager *>(
              (__int64)this + 208,
              v17,
              v13);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v5 = 0;
        goto LABEL_30;
      }
      v14 = 94LL;
    }
    else
    {
      v14 = 89LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_30:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    goto LABEL_31;
  }
  v6 = 60LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
