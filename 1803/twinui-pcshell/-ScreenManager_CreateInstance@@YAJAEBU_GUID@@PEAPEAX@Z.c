/*
 * XREFs of ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D39A0
 * Callers:
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1802C9EA8 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18019F5EC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x1802D2A88 (--0ScreenManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802D2D7C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModePositionerM.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1802D35A8 (-InternalRelease@-$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ScreenManager_CreateInstance(const struct _GUID *a1, void **a2)
{
  ScreenManager *v3; // rax
  volatile int *v4; // rax
  volatile int *v5; // rdx
  volatile int *v6; // r10
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  int CanCastTo; // ebx
  void *v11; // r8
  _DWORD *v12; // r9
  volatile int *v13; // rcx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v17; // [rsp+30h] [rbp+8h] BYREF
  volatile int *v18; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<CPrivilegedPresentationOperations>::InternalRelease(&v17);
  v17 = 0LL;
  v3 = (ScreenManager *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
  {
    CanCastTo = -2147024882;
    v14 = 334LL;
    goto LABEL_16;
  }
  v4 = (volatile int *)ScreenManager::ScreenManager(v3);
  v18 = v4;
  v6 = v4;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      (__int64)v4,
      v5);
  v17 = v6;
  Microsoft::WRL::ComPtr<CPrivilegedPresentationOperations>::InternalRelease(&v18);
  *a2 = 0LL;
  if ( !InlineIsEqualGUID(&GUID_d14291a4_8dc6_4788_b850_8b00ca5c80e0, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v7, v8) )
    {
      *a2 = (void *)v17;
    }
    else
    {
      if ( !InlineIsEqualGUID(v9, &GUID_859cc9da_cb27_4a90_b8fa_749bb1944473) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>::CanCastTo(
                      (__int64)v11 + 8,
                      v12);
        if ( CanCastTo < 0 )
          goto LABEL_13;
        goto LABEL_11;
      }
      *a2 = v11;
    }
    CanCastTo = 0;
LABEL_11:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    goto LABEL_13;
  }
  v13 = v17;
  *a2 = (void *)v17;
  (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v13 + 8LL))(v13);
  CanCastTo = 0;
LABEL_13:
  if ( CanCastTo < 0 )
  {
    v14 = 335LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)(unsigned int)CanCastTo);
  }
  Microsoft::WRL::ComPtr<CPrivilegedPresentationOperations>::InternalRelease(&v17);
  return (unsigned int)CanCastTo;
}
