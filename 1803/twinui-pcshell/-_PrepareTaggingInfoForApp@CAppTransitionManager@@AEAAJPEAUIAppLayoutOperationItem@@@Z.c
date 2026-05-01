/*
 * XREFs of ?_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z @ 0x1802AD738
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1802AD9BC (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::_PrepareTaggingInfoForApp(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2)
{
  int v4; // eax
  struct IApplicationView *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r8
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ApplicationViewHelpers *v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  v4 = (*(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, ApplicationViewHelpers **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
         &v14);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = (unsigned int)v4;
    v8 = 458LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)v7);
    goto LABEL_12;
  }
  if ( !ApplicationViewHelpers::GetWindowForView(
          (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v14,
          v5) )
  {
    v6 = -2147467259;
    v8 = 461LL;
    v7 = 2147500037LL;
    goto LABEL_5;
  }
  v9 = *((_QWORD *)this + 26);
  v10 = 0LL;
  v15 = 0LL;
  if ( v9 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    (*(void (__fastcall **)(__int64, ApplicationViewHelpers *, GUID *, __int64 *))(*(_QWORD *)v9 + 64LL))(
      v9,
      v14,
      &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
      &v15);
    v10 = v15;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct IAppLayoutOperationItem *, __int64, _QWORD))(**((_QWORD **)this + 23)
                                                                                             + 24LL))(
          *((_QWORD *)this + 23),
          a2,
          v10,
          *((_QWORD *)this + 25));
  v6 = v11;
  if ( v11 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D5,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
LABEL_12:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  return v6;
}
