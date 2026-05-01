/*
 * XREFs of ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180074760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180077934 (--$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotifica.c)
 *     ??$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180077AA0 (--$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotificatio.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::SubscribeToServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2)
{
  _QWORD *v4; // r15
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r14d
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v31; // [rsp+70h] [rbp+30h] BYREF
  __int64 v32; // [rsp+78h] [rbp+38h] BYREF
  __int64 v33; // [rsp+80h] [rbp+40h] BYREF

  v4 = (_QWORD *)((char *)this + 512);
  v5 = *((_QWORD *)this + 64);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0,
         v4);
  if ( v6 >= 0 )
  {
    v8 = *((_QWORD *)this + 65);
    if ( v8 )
    {
      *((_QWORD *)this + 65) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IClassicWindowManager,
           &GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84,
           (char *)this + 520);
    if ( v6 < 0 )
    {
      v7 = 60LL;
      goto LABEL_5;
    }
    v9 = *((_QWORD *)this + 66);
    if ( v9 )
    {
      *((_QWORD *)this + 66) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_cb827573_051e_4bcd_b249_1ffea1ee13df,
           &GUID_cb827573_051e_4bcd_b249_1ffea1ee13df,
           (char *)this + 528);
    if ( v6 < 0 )
    {
      v7 = 61LL;
      goto LABEL_5;
    }
    lpVtbl = a2->lpVtbl;
    v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 70);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           v11);
    if ( v6 < 0 )
    {
      v7 = 62LL;
      goto LABEL_5;
    }
    v12 = (_QWORD *)((char *)this + 568);
    v13 = *((_QWORD *)this + 71);
    if ( v13 )
    {
      *v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
            &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
            (char *)this + 568);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v12 + 40LL))(
           *v12,
           ((unsigned __int64)this + 104) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 80) >> 64));
    if ( v6 < 0 )
    {
      v7 = 65LL;
      goto LABEL_5;
    }
    v33 = 0LL;
    v17 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v4)(
            *v4,
            &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164,
            &v33);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 74LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_42:
      v29 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      return (unsigned int)v6;
    }
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 24LL))(v33);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 75LL;
      goto LABEL_26;
    }
    v32 = 0LL;
    v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveApplicationNotificationService,
            &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
            &v32);
    v6 = v19;
    if ( v19 < 0 )
    {
      v22 = 79LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v19);
LABEL_40:
      v28 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      goto LABEL_42;
    }
    v19 = SmartCookie::Register<IImmersiveApplicationNotificationService,long (IImmersiveApplicationNotificationService::*)(IImmersiveApplicationNotification *,unsigned long *),long (IImmersiveApplicationNotificationService::*)(unsigned long),CApplicationViewManager *>(
            (int)this + 320,
            v32,
            v20,
            v21,
            (__int64)this - 80);
    v6 = v19;
    if ( v19 < 0 )
    {
      v22 = 84LL;
      goto LABEL_31;
    }
    v31 = 0LL;
    v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_f42f750a_64a8_4190_951d_c6f7ef4e4ba1,
            &GUID_f8a6c78c_9f19_4417_aaf5_c9807f8aee4f,
            &v31);
    v6 = v23;
    if ( v23 >= 0 )
    {
      v23 = SmartCookie::Register<IEnterpriseIdChangeNotificationProvider,long (IEnterpriseIdChangeNotificationProvider::*)(IEnterpriseIdChangeNotification *,unsigned long *),long (IEnterpriseIdChangeNotificationProvider::*)(unsigned long),CApplicationViewManager *>(
              (int)this + 200,
              v31,
              v24,
              v25,
              (__int64)this - 80);
      v6 = v23;
      if ( v23 >= 0 )
      {
        v6 = 0;
LABEL_38:
        v27 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        goto LABEL_40;
      }
      v26 = 93LL;
    }
    else
    {
      v26 = 88LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_38;
  }
  v7 = 59LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
