/*
 * XREFs of ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x18011DEC8
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180136160 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@HandleViewCreated@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x18011984C (-StartActivity@HandleViewCreated@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1801244F4 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180125100 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180127F90 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?Add@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ$$QEAUPendingViewData@ViewEventDispatcher@@PEA_K@Z @ 0x18012801C (-Add@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UPend.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x180129504 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBG.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180134880 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall ViewEventDispatcher::ViewCreated(ViewEventDispatcher *this, unsigned int a2, struct IUnknown *a3)
{
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  _DWORD **v8; // r15
  _DWORD *v9; // rcx
  char v10; // al
  int AppUserModelIdForView; // eax
  struct MsgString *v12; // rax
  unsigned int v13; // ecx
  int v14; // eax
  int MatchingViewEventRegistration; // eax
  _QWORD *v16; // rdx
  int valid; // eax
  int v18; // eax
  struct IViewWrapperInternal *v19; // rcx
  struct IViewWrapperInternal *v20; // rdx
  struct MsgString *v21; // rcx
  struct IViewWrapperInternal *v22; // rcx
  struct IViewWrapperInternal *v23; // [rsp+30h] [rbp-228h] BYREF
  struct MsgString *v24; // [rsp+38h] [rbp-220h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-218h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-210h] BYREF
  struct IViewWrapperInternal *v27; // [rsp+50h] [rbp-208h] BYREF
  struct MsgString **v28; // [rsp+58h] [rbp-200h] BYREF
  struct IUnknown *v29; // [rsp+60h] [rbp-1F8h]
  __int64 v30; // [rsp+68h] [rbp-1F0h]
  _QWORD *v31; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v32; // [rsp+78h] [rbp-1E0h] BYREF
  ViewEventDispatcher *v33; // [rsp+88h] [rbp-1D0h]
  struct IUnknown *v34; // [rsp+90h] [rbp-1C8h] BYREF
  ViewEventDispatcher *v35; // [rsp+98h] [rbp-1C0h]
  char *v36; // [rsp+A0h] [rbp-1B8h]
  __int64 v37; // [rsp+A8h] [rbp-1B0h]
  __int128 v38; // [rsp+B0h] [rbp-1A8h]
  char v39; // [rsp+C0h] [rbp-198h]
  _QWORD v40[4]; // [rsp+D0h] [rbp-188h] BYREF
  int v41; // [rsp+F0h] [rbp-168h]
  int *v42; // [rsp+F8h] [rbp-160h]
  int *v43; // [rsp+100h] [rbp-158h]
  int v44; // [rsp+108h] [rbp-150h] BYREF
  char v45; // [rsp+10Ch] [rbp-14Ch]
  int v46; // [rsp+130h] [rbp-128h] BYREF
  const char *v47; // [rsp+138h] [rbp-120h]
  __int64 v48; // [rsp+140h] [rbp-118h]
  char v49; // [rsp+148h] [rbp-110h]
  __int64 v50; // [rsp+150h] [rbp-108h]
  _BYTE v51[144]; // [rsp+158h] [rbp-100h] BYREF
  __int64 v52; // [rsp+1E8h] [rbp-70h]
  __int64 v53; // [rsp+1F0h] [rbp-68h]
  __int64 v54; // [rsp+1F8h] [rbp-60h]
  __int64 v55; // [rsp+200h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  v37 = -2LL;
  v35 = this;
  v25 = a2;
  v34 = a3;
  v40[1] = 0LL;
  v40[2] = v40;
  v40[3] = 0LL;
  v41 = 0;
  v42 = &v46;
  v43 = &v44;
  v44 = 0;
  v45 = 0;
  v49 = 0;
  v46 = 0;
  v47 = "HandleViewCreated";
  v48 = 0LL;
  v50 = 1LL;
  v52 = 0LL;
  v53 = 0LL;
  memset(v51, 0, sizeof(v51));
  v54 = 0LL;
  v55 = 0LL;
  v40[0] = &ViewManagerInteropTraceLogging::HandleViewCreated::`vftable';
  ViewManagerInteropTraceLogging::HandleViewCreated::StartActivity(
    (ViewManagerInteropTraceLogging::HandleViewCreated *)v40,
    a2);
  try
  {
    v23 = 0LL;
    v6 = 0LL;
    v31 = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)this + 37);
    v36 = (char *)this + 296;
    v27 = 0LL;
    if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(this, a2, &v27) < 0 )
    {
      v7 = 0LL;
      v30 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v8 = (_DWORD **)((char *)this + 432);
      v26 = 0LL;
      if ( *((_QWORD *)this + 55) )
      {
        v9 = *v8;
        while ( *v9 != a2 )
        {
          ++v7;
          v9 += 6;
          if ( v7 >= *((_QWORD *)this + 55) )
            goto LABEL_10;
        }
        v26 = v7;
        v10 = 0;
      }
      else
      {
LABEL_10:
        v10 = 1;
      }
      if ( v10 != 1 )
      {
        *(_QWORD *)&v32 = this;
        *((_QWORD *)&v32 + 1) = &v26;
        v38 = v32;
        v39 = 1;
        AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                  *((ViewManagerBridge **)this + 64),
                                  a3,
                                  &v24);
        if ( AppUserModelIdForView < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x3FA,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)AppUserModelIdForView);
        v28 = &v24;
        LOBYTE(v29) = 1;
        v33 = this;
        v12 = v24;
        if ( v24 )
        {
          v13 = *(_DWORD *)v24 & 0xE0000000;
          if ( v13 == 0x40000000 )
          {
            v12 = (struct MsgString *)((char *)v24 + 8);
          }
          else
          {
            if ( v13 != 0x80000000 )
              __debugbreak();
            v12 = (struct MsgString *)*((_QWORD *)v24 + 1);
          }
        }
        *(_QWORD *)&v32 = v12;
        v14 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
                (unsigned int)&v23,
                (unsigned int)&v25,
                (unsigned int)&v34,
                (unsigned int)&v32);
        if ( v14 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x409,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v14);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v23, &v31);
        if ( MatchingViewEventRegistration < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x40C,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        v6 = v31;
        if ( v31 )
          v16 = v31 + 1;
        else
          v16 = 0LL;
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD *, _QWORD))(*(_QWORD *)v23 + 568LL))(
          v23,
          v16,
          0LL);
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v23 + 648LL))(
          v23,
          *(_QWORD *)&(*v8)[6 * v26 + 4],
          0LL);
        valid = ViewEventDispatcher::_AddValidView(this, v23);
        if ( valid < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x411,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)valid);
        MsgRelease(v24);
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (char *)this + 432,
          v26);
      }
      else
      {
        LODWORD(v28) = a2;
        v29 = a3;
        if ( a3 )
          ((void (__fastcall *)(struct IUnknown *))a3->lpVtbl->AddRef)(a3);
        v30 = 0LL;
        v18 = CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::Add(
                (char *)this + 432,
                &v28);
        if ( v18 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x419,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v18);
        if ( v29 )
          ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
      }
    }
    else
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, struct IUnknown *))(*(_QWORD *)v27 + 680LL))(v27, a3);
    }
    v19 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( this != (ViewEventDispatcher *)-296LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 37);
    v20 = v23;
    if ( v23 )
    {
      v21 = (struct MsgString *)v6[4];
      v24 = v21;
      if ( v21 )
      {
        (*(void (__fastcall **)(struct MsgString *))(*(_QWORD *)v21 + 8LL))(v21);
        v20 = v23;
      }
      ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v20, 0LL, 0LL, &v24);
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
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
    ViewManagerBridge::NavigateView(*((_QWORD *)v35 + 64), v25, 0LL);
  }
  v40[0] = &ViewManagerInteropTraceLogging::HandleViewCreated::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v40);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v40);
}
