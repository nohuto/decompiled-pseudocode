/*
 * XREFs of ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x1800F32D4
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18010B4E0 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800F9274 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1800F9DD0 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x1800FCE64 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?Add@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ$$QEAUPendingViewData@ViewEventDispatcher@@PEA_K@Z @ 0x1800FCEF0 (-Add@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UPend.c)
 *     ??$Start@AEAI@HandleViewCreated@ViewManagerInteropTraceLogging@@SA?AV01@AEAI@Z @ 0x1800FE744 (--$Start@AEAI@HandleViewCreated@ViewManagerInteropTraceLogging@@SA-AV01@AEAI@Z.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@PEBGAEAY0DF@$$CBGQEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAIAEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEBQEAVViewEventDispatcher@@@Z @ 0x1800FE7FC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@PEBGAEAY0DF@$$.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180109ED0 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall ViewEventDispatcher::ViewCreated(ViewEventDispatcher *this, unsigned int a2, struct IUnknown *a3)
{
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  _DWORD **v8; // r15
  _DWORD *v9; // rcx
  int v10; // eax
  int AppUserModelIdForView; // eax
  struct MsgString *v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  int MatchingViewEventRegistration; // eax
  _QWORD *v16; // rdx
  int valid; // eax
  int v18; // eax
  struct IViewWrapperInternal *v19; // rcx
  struct IViewWrapperInternal *v20; // rdx
  struct MsgString *v21; // rcx
  struct IViewWrapperInternal *v22; // rcx
  struct IViewWrapperInternal *v23; // [rsp+30h] [rbp-218h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-210h] BYREF
  struct MsgString *v25; // [rsp+40h] [rbp-208h] BYREF
  struct IViewWrapperInternal *v26; // [rsp+48h] [rbp-200h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-1F8h] BYREF
  struct MsgString **v28; // [rsp+58h] [rbp-1F0h] BYREF
  _QWORD *v29; // [rsp+60h] [rbp-1E8h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp-1E0h] BYREF
  _QWORD *v31; // [rsp+70h] [rbp-1D8h] BYREF
  struct IUnknown *v32; // [rsp+78h] [rbp-1D0h]
  __int64 v33; // [rsp+80h] [rbp-1C8h]
  __int128 v34; // [rsp+88h] [rbp-1C0h] BYREF
  __int64 v35; // [rsp+98h] [rbp-1B0h] BYREF
  _QWORD *v36; // [rsp+A0h] [rbp-1A8h]
  __int64 v37; // [rsp+A8h] [rbp-1A0h]
  struct IUnknown *v38; // [rsp+B0h] [rbp-198h] BYREF
  ViewEventDispatcher *v39; // [rsp+B8h] [rbp-190h]
  __int64 v40; // [rsp+C0h] [rbp-188h]
  _QWORD v41[40]; // [rsp+D0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  v40 = -2LL;
  v39 = this;
  v24 = a2;
  v38 = a3;
  ViewManagerInteropTraceLogging::HandleViewCreated::Start<unsigned int &>((ViewManagerInteropTraceLogging::HandleViewCreated *)v41);
  try
  {
    v23 = 0LL;
    v6 = 0LL;
    v29 = 0LL;
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 28, &SRWLock);
    v26 = 0LL;
    if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(this, a2, &v26) < 0 )
    {
      v7 = 0LL;
      v37 = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      v8 = (_DWORD **)((char *)this + 360);
      v27 = 0LL;
      if ( *((_QWORD *)this + 46) )
      {
        v9 = *v8;
        while ( *v9 != a2 )
        {
          ++v7;
          v9 += 6;
          if ( v7 >= *((_QWORD *)this + 46) )
            goto LABEL_10;
        }
        v27 = v7;
        v10 = 0;
      }
      else
      {
LABEL_10:
        v10 = -2147319765;
      }
      if ( v10 < 0 )
      {
        LODWORD(v31) = a2;
        v32 = a3;
        if ( a3 )
          ((void (__fastcall *)(struct IUnknown *))a3->lpVtbl->AddRef)(a3);
        v33 = 0LL;
        v18 = CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::Add(
                (char *)this + 360,
                &v31);
        if ( v18 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x413,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v18);
        if ( v32 )
          ((void (__fastcall *)(struct IUnknown *))v32->lpVtbl->Release)(v32);
      }
      else
      {
        *(_QWORD *)&v34 = this;
        *((_QWORD *)&v34 + 1) = &v27;
        wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)&v35, &v34);
        AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                  *((ViewManagerBridge **)this + 55),
                                  a3,
                                  &v25);
        if ( AppUserModelIdForView < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x3F4,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)AppUserModelIdForView);
        v28 = &v25;
        wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v31, &v28);
        v28 = (struct MsgString **)this;
        v12 = v25;
        if ( v25 )
        {
          v13 = *(_DWORD *)v25 & 0xE0000000;
          if ( v13 == 0x40000000 )
          {
            v12 = (struct MsgString *)((char *)v25 + 8);
          }
          else
          {
            if ( v13 != 0x80000000 )
              __debugbreak();
            v12 = (struct MsgString *)*((_QWORD *)v25 + 1);
          }
        }
        *(_QWORD *)&v34 = v12;
        v14 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown * &,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher * const>(
                (unsigned int)&v23,
                (unsigned int)&v24,
                (unsigned int)&v38,
                (unsigned int)&v34);
        if ( v14 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x403,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v14);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v23, &v29);
        if ( MatchingViewEventRegistration < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x406,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        v6 = v29;
        if ( v29 )
          v16 = v29 + 1;
        else
          v16 = 0LL;
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD *, _QWORD))(*(_QWORD *)v23 + 568LL))(
          v23,
          v16,
          0LL);
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v23 + 648LL))(
          v23,
          *(_QWORD *)&(*v8)[6 * v27 + 4],
          0LL);
        valid = ViewEventDispatcher::_AddValidView(this, v23);
        if ( valid < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x40B,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)valid);
        if ( (_BYTE)v32 )
          MsgRelease(*v31);
        if ( (_BYTE)v37 )
          CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
            v35 + 360,
            *v36);
      }
    }
    else
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, struct IUnknown *))(*(_QWORD *)v26 + 680LL))(v26, a3);
    }
    v19 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v20 = v23;
    if ( v23 )
    {
      v21 = (struct MsgString *)v6[4];
      v25 = v21;
      if ( v21 )
      {
        (*(void (__fastcall **)(struct MsgString *))(*(_QWORD *)v21 + 8LL))(v21);
        v20 = v23;
      }
      ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v20, 0LL, 0LL, &v25);
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v41);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    v22 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  catch ( ... )
  {
    ViewManagerBridge::NavigateView(*((_QWORD *)v39 + 55), v24, 0LL);
  }
  v41[0] = &ViewManagerInteropTraceLogging::HandleViewCreated::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v41);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v41);
}
