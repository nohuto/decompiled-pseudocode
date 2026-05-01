/*
 * XREFs of ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180122D48
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1801227F4 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x18011AFF8 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1801244F4 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180125100 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180127F90 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?Add@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ$$QEAUPendingViewData@ViewEventDispatcher@@PEA_K@Z @ 0x18012801C (-Add@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UPend.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x180129504 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBG.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180133010 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180134880 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801C0F4C (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedForExistingView(
        ViewEventDispatcher *this,
        HWND a2,
        unsigned int a3)
{
  unsigned int v3; // r12d
  char v6; // si
  _QWORD *v7; // rbx
  RTL_SRWLOCK *v8; // r13
  unsigned __int16 **v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rax
  struct IViewWrapperInternal *v15; // rbx
  struct IViewWrapperInternal *v16; // rdx
  struct IViewWrapperInternal *v17; // rcx
  int v18; // eax
  int ImmersiveAppIdFromWindow; // edi
  unsigned int v20; // edi
  unsigned __int64 v21; // rax
  _DWORD **v22; // r12
  unsigned __int64 v23; // rcx
  _DWORD *v24; // rdx
  char v25; // cl
  struct IUnknown *v26; // rdx
  int AppUserModelIdForView; // eax
  struct MsgString *v28; // rcx
  unsigned int v29; // eax
  int valid; // eax
  __int64 v31; // rdx
  int MatchingViewEventRegistration; // eax
  _QWORD *v33; // rdx
  unsigned __int16 **v34; // r8
  void *v35; // r15
  int v36; // eax
  unsigned __int64 v37; // r9
  __int64 v38; // rdx
  struct MsgString *v39; // rcx
  struct IViewWrapperInternal *v40; // rcx
  unsigned __int64 v42; // [rsp+30h] [rbp-89h] BYREF
  _QWORD *v43; // [rsp+38h] [rbp-81h] BYREF
  __int128 v44; // [rsp+40h] [rbp-79h] BYREF
  HWND v45; // [rsp+50h] [rbp-69h]
  LPVOID pv; // [rsp+58h] [rbp-61h] BYREF
  __int64 v47; // [rsp+60h] [rbp-59h]
  __int64 v48; // [rsp+68h] [rbp-51h]
  ViewEventDispatcher *v49; // [rsp+70h] [rbp-49h]
  struct MsgString *v50; // [rsp+78h] [rbp-41h] BYREF
  __int128 v51; // [rsp+80h] [rbp-39h]
  __int64 v52; // [rsp+90h] [rbp-29h]
  __int128 v53; // [rsp+98h] [rbp-21h]
  char v54; // [rsp+A8h] [rbp-11h]
  __int128 v55; // [rsp+B0h] [rbp-9h]
  char v56; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  struct MsgString *v58; // [rsp+120h] [rbp+67h] BYREF
  HWND hWnd; // [rsp+128h] [rbp+6Fh]
  unsigned int v60; // [rsp+130h] [rbp+77h] BYREF
  struct IViewWrapperInternal *v61; // [rsp+138h] [rbp+7Fh] BYREF

  v60 = a3;
  hWnd = a2;
  v52 = -2LL;
  v3 = a3;
  *(_QWORD *)&v51 = this;
  DWORD2(v51) = a3;
  v53 = v51;
  v6 = 1;
  v54 = 1;
  v61 = 0LL;
  v7 = 0LL;
  v43 = 0LL;
  v8 = (RTL_SRWLOCK *)((char *)this + 296);
  AcquireSRWLockExclusive((PSRWLOCK)this + 37);
  *(_QWORD *)&v51 = v8;
  v58 = 0LL;
  v10 = 0LL;
  v42 = 0LL;
  v11 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)this + 46) + 8 * v11);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 576LL))(v12) == v3 )
        break;
      if ( ++v11 >= *((_QWORD *)this + 47) )
      {
        v10 = v42;
        goto LABEL_6;
      }
    }
    v10 = v11;
    v42 = v11;
    v13 = 0;
  }
  else
  {
LABEL_6:
    v13 = 1;
  }
  if ( v13 == 1 )
  {
    v21 = 0LL;
    v48 = 0LL;
    pv = 0LL;
    v47 = 0LL;
    v22 = (_DWORD **)((char *)this + 432);
    v42 = 0LL;
    v23 = 0LL;
    if ( *((_QWORD *)this + 55) )
    {
      v24 = *v22;
      v9 = (unsigned __int16 **)v60;
      while ( *v24 != v60 )
      {
        ++v23;
        v24 += 6;
        if ( v23 >= *((_QWORD *)this + 55) )
          goto LABEL_22;
      }
      v21 = v23;
      v42 = v23;
      v25 = 0;
    }
    else
    {
LABEL_22:
      v25 = 1;
    }
    if ( v25 != 1 )
    {
      v26 = *(struct IUnknown **)&(*v22)[6 * v21 + 2];
      if ( v26 )
      {
        *(_QWORD *)&v44 = this;
        *((_QWORD *)&v44 + 1) = &v42;
        v55 = v44;
        v56 = 1;
        AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                  *((ViewManagerBridge **)this + 64),
                                  v26,
                                  &v58);
        ImmersiveAppIdFromWindow = AppUserModelIdForView;
        if ( AppUserModelIdForView < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xAAD,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)AppUserModelIdForView);
LABEL_44:
          CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
            (char *)this + 432,
            v42);
LABEL_58:
          v3 = v60;
LABEL_59:
          if ( v8 )
            ReleaseSRWLockExclusive(v8);
          goto LABEL_72;
        }
        pv = &v58;
        LOBYTE(v47) = 1;
        v49 = this;
        v28 = v58;
        if ( v58 )
        {
          v29 = *(_DWORD *)v58 & 0xE0000000;
          if ( v29 == 0x40000000 )
          {
            v28 = (struct MsgString *)((char *)v58 + 8);
          }
          else
          {
            if ( v29 != 0x80000000 )
              __debugbreak();
            v28 = (struct MsgString *)*((_QWORD *)v58 + 1);
          }
        }
        v50 = v28;
        *(_QWORD *)&v44 = *(_QWORD *)&(*v22)[6 * v42 + 2];
        valid = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
                  (unsigned int)&v61,
                  (unsigned int)&v60,
                  (unsigned int)&v44,
                  (unsigned int)&v50);
        ImmersiveAppIdFromWindow = valid;
        if ( valid < 0 )
        {
          v31 = 2748LL;
LABEL_42:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v31,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)valid);
          goto LABEL_43;
        }
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v61, &v43);
        ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
        if ( MatchingViewEventRegistration < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xABF,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
          v7 = v43;
LABEL_43:
          MsgRelease(v58);
          goto LABEL_44;
        }
        v7 = v43;
        if ( v43 )
          v33 = v43 + 1;
        else
          v33 = 0LL;
        (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD *, _QWORD))(*(_QWORD *)v61 + 568LL))(
          v61,
          v33,
          0LL);
        (*(void (__fastcall **)(struct IViewWrapperInternal *, HWND, _QWORD))(*(_QWORD *)v61 + 648LL))(v61, a2, 0LL);
        valid = ViewEventDispatcher::_AddValidView(this, v61);
        ImmersiveAppIdFromWindow = valid;
        if ( valid < 0 )
        {
          v31 = 2756LL;
          goto LABEL_42;
        }
        v20 = 0;
        MsgRelease(v58);
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          (char *)this + 432,
          v42);
LABEL_64:
        v3 = v60;
        goto LABEL_65;
      }
LABEL_63:
      v20 = 3;
      goto LABEL_64;
    }
    pv = 0LL;
    v47 = -1LL;
    v48 = -1LL;
    ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(a2, (HWND)&pv, v9);
    v35 = pv;
    if ( ImmersiveAppIdFromWindow >= 0 )
    {
      v36 = IsLegacyApp((CallerIdentity *)pv, (bool *)&v58, v34);
      ImmersiveAppIdFromWindow = v36;
      if ( v36 >= 0 )
      {
        if ( (_BYTE)v58 )
        {
          PostMessageW(hWnd, 0x10u, 0LL, 0LL);
          ImmersiveAppIdFromWindow = -2147023728;
          goto LABEL_56;
        }
        LODWORD(v44) = v60;
        *((_QWORD *)&v44 + 1) = 0LL;
        v45 = hWnd;
        ImmersiveAppIdFromWindow = CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::Add(
                                     (char *)this + 432,
                                     &v44);
        if ( *((_QWORD *)&v44 + 1) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v44 + 1) + 16LL))(*((_QWORD *)&v44 + 1));
        if ( ImmersiveAppIdFromWindow >= 0 )
        {
          if ( v35 )
            CoTaskMemFree(v35);
          goto LABEL_63;
        }
        v37 = (unsigned int)ImmersiveAppIdFromWindow;
        v38 = 2793LL;
      }
      else
      {
        v37 = (unsigned int)v36;
        v38 = 2777LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v38,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)v37);
    }
LABEL_56:
    if ( v35 )
      CoTaskMemFree(v35);
    goto LABEL_58;
  }
  v14 = *((_QWORD *)this + 46);
  v15 = *(struct IViewWrapperInternal **)(v14 + 8 * v10);
  v16 = v61;
  if ( v61 != v15 )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*(_QWORD *)(v14 + 8 * v10));
      v16 = v61;
    }
    v17 = v16;
    v16 = v15;
    v61 = v15;
    if ( v17 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, struct IViewWrapperInternal *))(*(_QWORD *)v17 + 16LL))(
        v17,
        v15);
      v16 = v61;
    }
  }
  v18 = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v16, &v43);
  ImmersiveAppIdFromWindow = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA99,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v18);
    v7 = v43;
    goto LABEL_59;
  }
  (*(void (__fastcall **)(struct IViewWrapperInternal *, HWND, _QWORD))(*(_QWORD *)v61 + 648LL))(v61, a2, 0LL);
  v20 = 6;
  v7 = v43;
LABEL_65:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  if ( v7 )
  {
    v39 = (struct MsgString *)v7[4];
    v58 = v39;
    if ( v39 )
      (*(void (__fastcall **)(struct MsgString *))(*(_QWORD *)v39 + 8LL))(v39);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v61, v20, 0LL, &v58);
  }
  v6 = 0;
  v54 = 0;
  ImmersiveAppIdFromWindow = 0;
LABEL_72:
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  v40 = v61;
  if ( v61 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v40 + 16LL))(v40);
  }
  if ( v6 )
    ViewManagerBridge::NavigateView(*((_QWORD *)this + 64), v3, 0LL);
  return (unsigned int)ImmersiveAppIdFromWindow;
}
