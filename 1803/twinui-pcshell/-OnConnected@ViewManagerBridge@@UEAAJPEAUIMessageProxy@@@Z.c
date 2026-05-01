/*
 * XREFs of ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801DD4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800590A4 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F5D40 (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180189CB8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801C541C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801DB938 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x1801DBBBC (-CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV-$CCoSimpleArray@URecoveredViewInfo@@$0PP.c)
 *     ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x1801DC70C (-GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowTy.c)
 *     ?StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801DE840 (-StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnConnected(struct IUnknown **this, struct IUnknown *a2)
{
  struct IUnknown **v3; // rdi
  int v4; // eax
  struct IUnknown *v5; // rbx
  _QWORD *v6; // r15
  int v7; // eax
  int v8; // eax
  int v9; // eax
  void *v10; // r8
  int v11; // eax
  unsigned int i; // r14d
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  ViewManagerBridge *v17; // rcx
  void *v18; // r8
  const char *v19; // r9
  struct IUnknown *v20; // rdx
  int v21; // eax
  struct IUnknown *v22; // rcx
  void *v23; // rdx
  wil *v24; // rcx
  int v26; // [rsp+20h] [rbp-1B8h] BYREF
  CWinRTApplicationView *v27; // [rsp+28h] [rbp-1B0h] BYREF
  struct IUnknownVtbl *v28; // [rsp+30h] [rbp-1A8h] BYREF
  int v29; // [rsp+38h] [rbp-1A0h]
  unsigned int v30; // [rsp+3Ch] [rbp-19Ch] BYREF
  struct IShellView *v31; // [rsp+40h] [rbp-198h] BYREF
  int v32; // [rsp+48h] [rbp-190h] BYREF
  int v33; // [rsp+4Ch] [rbp-18Ch] BYREF
  struct IUnknown **v34; // [rsp+50h] [rbp-188h]
  __int64 v35; // [rsp+58h] [rbp-180h]
  _QWORD v36[40]; // [rsp+60h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v35 = -2LL;
  v3 = this;
  v34 = this;
  if ( (unsigned int)SHIsSameObject(a2, this[12]) )
  {
    try
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)v36,
        (__int64)"OnConnected");
      v36[0] = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
      ViewManagerInteropTraceLogging::OnConnected::StartActivity((ViewManagerInteropTraceLogging::OnConnected *)v36);
      v4 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))a2->lpVtbl[3].QueryInterface)(
             a2,
             (unsigned __int64)(v3 + 3) & ((unsigned __int128)-(__int128)(unsigned __int64)(v3 - 1) >> 64),
             *((unsigned int *)v3 + 22));
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          771LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v4);
      v5 = v3[12];
      v6 = v3 + 14;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v3 + 14);
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown **))v5->lpVtbl[1].Release)(v5, v3 + 14);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          773LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v7);
      v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v6 + 64LL))(
             *v6,
             (unsigned __int64)(v3 + 1) & -(__int64)(v3 != (struct IUnknown **)8));
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          774LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v6 + 48LL))(*v6, &v26);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          781LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v9);
      v11 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)(v3 + 18),
              v26,
              v10);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          782LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v11);
      for ( i = 0; (int)i < v26; ++i )
      {
        v27 = 0LL;
        v13 = *v6;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, CWinRTApplicationView **))(*(_QWORD *)v13 + 56LL))(
                v13,
                i,
                &v27);
        if ( v14 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            787LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v14);
        v31 = 0LL;
        v15 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(&v27, (__int64 *)&v31);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            789LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v15);
        v16 = ((__int64 (__fastcall *)(struct IShellView *, int *))v31->lpVtbl[1].GetWindow)(v31, &v32);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            792LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v16);
        v28 = 0LL;
        v29 = 0;
        v30 = 0;
        Microsoft::WRL::ComPtr<IUnknown>::operator=((CWinRTApplicationView **)&v28, &v27);
        v29 = v32;
        v33 = 1;
        ViewManagerBridge::GetShellWindowIdForView(v17, v31, (enum Navigation::WindowType *)&v33, &v30);
        v19 = 0LL;
        v20 = v3[19];
        if ( v20 != v3[21]
          || (v21 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                      (__int64)(v3 + 18),
                      (unsigned __int64)&v20->lpVtbl + 1,
                      v18),
              v19 = (const char *)(unsigned int)v21,
              v21 >= 0) )
        {
          v3[19] = (struct IUnknown *)((char *)v3[19] + 1);
          v22 = &v3[18][2 * ((_QWORD)v3[19] - 1)];
          if ( v22 )
          {
            v22->lpVtbl = 0LL;
            if ( v22 != (struct IUnknown *)&v28 )
            {
              v22->lpVtbl = v28;
              v28 = 0LL;
            }
            LODWORD(v22[1].lpVtbl) = v29;
            HIDWORD(v22[1].lpVtbl) = v30;
          }
        }
        if ( (int)v19 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            803LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v28);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      }
      ViewManagerBridge::CloseOrphanedShellWindows((ViewManagerBridge *)(v3 - 1), (__int64 *)v3 + 18);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v36);
      *((_BYTE *)v3 + 137) = 0;
      v36[0] = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v36);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v36);
    }
    catch ( ... )
    {
      *((_DWORD *)v34 + 35) = wil::ResultFromCaughtException(v24);
      v3 = v34;
    }
    wil::details::SetEvent((wil::details *)v3[15], v23);
  }
  return 0LL;
}
