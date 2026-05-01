/*
 * XREFs of ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1800F7A78
 * Callers:
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1800F7598 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x1800F05C8 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800F9274 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1800F9DD0 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x1800FCE64 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?Add@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ$$QEAUPendingViewData@ViewEventDispatcher@@PEA_K@Z @ 0x1800FCEF0 (-Add@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UPend.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@PEBGAEAY0DF@$$CBGQEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAIAEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEBQEAVViewEventDispatcher@@@Z @ 0x1800FE7FC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@PEBGAEAY0DF@$$.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180108770 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180109ED0 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801757E4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreatedForExistingView(ViewEventDispatcher *this, HWND a2, int a3)
{
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  int v9; // r14d
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  struct IViewWrapperInternal *v13; // rbx
  struct IViewWrapperInternal *v14; // rdx
  struct IViewWrapperInternal *v15; // rcx
  int v16; // eax
  int ImmersiveAppIdFromWindow; // edi
  unsigned int v18; // edi
  unsigned __int64 v19; // rax
  _DWORD **v20; // r15
  unsigned __int64 v21; // rcx
  _DWORD *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r10
  int AppUserModelIdForView; // eax
  struct MsgString *v26; // rcx
  unsigned int v27; // eax
  int valid; // eax
  __int64 v29; // rdx
  int MatchingViewEventRegistration; // eax
  _QWORD *v31; // rdx
  unsigned __int16 **v32; // r8
  void *v33; // r14
  int v34; // eax
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  char v37; // si
  unsigned __int64 v38; // rcx
  struct IViewWrapperInternal *v39; // rcx
  _QWORD *v41; // [rsp+38h] [rbp-59h] BYREF
  __int128 v42; // [rsp+40h] [rbp-51h] BYREF
  HWND v43; // [rsp+50h] [rbp-41h]
  LPVOID pv; // [rsp+58h] [rbp-39h] BYREF
  __int64 v45; // [rsp+60h] [rbp-31h]
  __int64 v46; // [rsp+68h] [rbp-29h]
  struct MsgString **v47; // [rsp+70h] [rbp-21h] BYREF
  struct MsgString *v48; // [rsp+78h] [rbp-19h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-11h] BYREF
  __int64 v50; // [rsp+88h] [rbp-9h] BYREF
  struct MsgString *v51; // [rsp+90h] [rbp-1h] BYREF
  __int64 v52; // [rsp+98h] [rbp+7h] BYREF
  unsigned int v53; // [rsp+A0h] [rbp+Fh]
  char v54; // [rsp+A8h] [rbp+17h]
  __int64 v55; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  struct IViewWrapperInternal *v57; // [rsp+F8h] [rbp+67h] BYREF
  int v58; // [rsp+108h] [rbp+77h] BYREF
  unsigned __int64 v59; // [rsp+110h] [rbp+7Fh] BYREF

  v58 = a3;
  v55 = -2LL;
  *(_QWORD *)&v42 = this;
  DWORD2(v42) = a3;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)&v52, &v42);
  v57 = 0LL;
  v6 = 0LL;
  v41 = 0LL;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 28, &SRWLock);
  v50 = 0LL;
  v7 = 0LL;
  v59 = 0LL;
  v8 = 0LL;
  v9 = -2147319765;
  if ( *((_QWORD *)this + 38) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 37) + 8 * v8);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 576LL))(v10) == a3 )
        break;
      if ( ++v8 >= *((_QWORD *)this + 38) )
      {
        v7 = v59;
        goto LABEL_6;
      }
    }
    v7 = v8;
    v59 = v8;
    v11 = 0;
  }
  else
  {
LABEL_6:
    v11 = -2147319765;
  }
  if ( v11 < 0 )
  {
    v19 = 0LL;
    v46 = 0LL;
    pv = 0LL;
    v45 = 0LL;
    v20 = (_DWORD **)((char *)this + 360);
    v59 = 0LL;
    v21 = 0LL;
    if ( *((_QWORD *)this + 46) )
    {
      v22 = *v20;
      while ( *v22 != a3 )
      {
        ++v21;
        v22 += 6;
        if ( v21 >= *((_QWORD *)this + 46) )
          goto LABEL_22;
      }
      v19 = v21;
      v59 = v21;
      v9 = 0;
    }
LABEL_22:
    if ( v9 >= 0 )
    {
      if ( *(_QWORD *)&(*v20)[6 * v19 + 2] )
      {
        *(_QWORD *)&v42 = this;
        *((_QWORD *)&v42 + 1) = &v59;
        wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)&pv, &v42);
        AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(
                                  *((ViewManagerBridge **)this + 55),
                                  *(struct IUnknown **)(v24 + 8 * v23 + 8),
                                  &v48);
        ImmersiveAppIdFromWindow = AppUserModelIdForView;
        if ( AppUserModelIdForView < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xA2B,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)AppUserModelIdForView);
LABEL_44:
          if ( (_BYTE)v46 )
            CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
              (char *)pv + 360,
              *(_QWORD *)v45);
          goto LABEL_62;
        }
        v47 = &v48;
        wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v42, &v47);
        v47 = (struct MsgString **)this;
        v26 = v48;
        if ( v48 )
        {
          v27 = *(_DWORD *)v48 & 0xE0000000;
          if ( v27 == 0x40000000 )
          {
            v26 = (struct MsgString *)((char *)v48 + 8);
          }
          else
          {
            if ( v27 != 0x80000000 )
              __debugbreak();
            v26 = (struct MsgString *)*((_QWORD *)v48 + 1);
          }
        }
        v51 = v26;
        v50 = *(_QWORD *)&(*v20)[6 * v59 + 2];
        valid = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown * &,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher * const>(
                  (unsigned int)&v57,
                  (unsigned int)&v58,
                  (unsigned int)&v50,
                  (unsigned int)&v51);
        ImmersiveAppIdFromWindow = valid;
        if ( valid >= 0 )
        {
          MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v57, &v41);
          ImmersiveAppIdFromWindow = MatchingViewEventRegistration;
          if ( MatchingViewEventRegistration < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0xA3D,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
              (const char *)(unsigned int)MatchingViewEventRegistration);
            v6 = v41;
            goto LABEL_42;
          }
          v6 = v41;
          if ( v41 )
            v31 = v41 + 1;
          else
            v31 = 0LL;
          (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD *, _QWORD))(*(_QWORD *)v57 + 568LL))(
            v57,
            v31,
            0LL);
          (*(void (__fastcall **)(struct IViewWrapperInternal *, HWND, _QWORD))(*(_QWORD *)v57 + 648LL))(v57, a2, 0LL);
          valid = ViewEventDispatcher::_AddValidView(this, v57);
          ImmersiveAppIdFromWindow = valid;
          if ( valid >= 0 )
          {
            v18 = 0;
            if ( BYTE8(v42) )
              MsgRelease(*(_QWORD *)v42);
            if ( (_BYTE)v46 )
              CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
                (char *)pv + 360,
                *(_QWORD *)v45);
            goto LABEL_68;
          }
          v29 = 2626LL;
        }
        else
        {
          v29 = 2618LL;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v29,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)valid);
LABEL_42:
        if ( BYTE8(v42) )
          MsgRelease(*(_QWORD *)v42);
        goto LABEL_44;
      }
LABEL_67:
      v18 = 3;
      goto LABEL_68;
    }
    pv = 0LL;
    v45 = -1LL;
    v46 = -1LL;
    ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(a2, (HWND)&pv, 0LL);
    v33 = pv;
    if ( ImmersiveAppIdFromWindow >= 0 )
    {
      v34 = IsLegacyApp((CallerIdentity *)pv, (bool *)&v58, v32);
      ImmersiveAppIdFromWindow = v34;
      if ( v34 >= 0 )
      {
        if ( (_BYTE)v58 )
        {
          PostMessageW(a2, 0x10u, 0LL, 0LL);
          ImmersiveAppIdFromWindow = -2147023728;
          goto LABEL_60;
        }
        LODWORD(v42) = a3;
        *((_QWORD *)&v42 + 1) = 0LL;
        v43 = a2;
        ImmersiveAppIdFromWindow = CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::Add(
                                     (char *)this + 360,
                                     &v42);
        if ( *((_QWORD *)&v42 + 1) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v42 + 1) + 16LL))(*((_QWORD *)&v42 + 1));
        if ( ImmersiveAppIdFromWindow >= 0 )
        {
          if ( v33 )
            CoTaskMemFree(v33);
          goto LABEL_67;
        }
        v35 = (unsigned int)ImmersiveAppIdFromWindow;
        v36 = 2663LL;
      }
      else
      {
        v35 = (unsigned int)v34;
        v36 = 2647LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v36,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)v35);
    }
LABEL_60:
    if ( v33 )
      CoTaskMemFree(v33);
    goto LABEL_62;
  }
  v12 = *((_QWORD *)this + 37);
  v13 = *(struct IViewWrapperInternal **)(v12 + 8 * v7);
  v14 = v57;
  if ( v57 != v13 )
  {
    if ( v13 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(v12 + 8 * v7));
      v14 = v57;
    }
    v15 = v14;
    v14 = v13;
    v57 = v13;
    if ( v15 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, struct IViewWrapperInternal *))(*(_QWORD *)v15 + 16LL))(
        v15,
        v13);
      v14 = v57;
    }
  }
  v16 = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v14, &v41);
  ImmersiveAppIdFromWindow = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA17,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v16);
    v6 = v41;
LABEL_62:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v37 = v54;
    goto LABEL_75;
  }
  (*(void (__fastcall **)(struct IViewWrapperInternal *, HWND, _QWORD))(*(_QWORD *)v57 + 648LL))(v57, a2, 0LL);
  v18 = 6;
  v6 = v41;
LABEL_68:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6 )
  {
    v38 = v6[4];
    v59 = v38;
    if ( v38 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v38 + 8LL))(v38);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(this, v57, v18, 0LL, &v59);
  }
  v37 = 0;
  v54 = 0;
  ImmersiveAppIdFromWindow = 0;
LABEL_75:
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  v39 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v39 + 16LL))(v39);
  }
  if ( v37 )
    ViewManagerBridge::NavigateView(*(_QWORD *)(v52 + 440), v53, 0LL);
  return (unsigned int)ImmersiveAppIdFromWindow;
}
