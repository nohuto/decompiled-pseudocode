/*
 * XREFs of ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180032D68
 * Callers:
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18003291C (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18000C234 (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800324F4 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180055B40 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x1800945FC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBG.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x1800961B0 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x1800F040C (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
        ViewManagerBridge **this,
        unsigned int a2,
        struct IViewWrapperInternal **a3,
        struct IUnknown **a4,
        char *a5)
{
  char v9; // r14
  int MatchingViewEventRegistration; // eax
  int v11; // edi
  struct IUnknown *v12; // r15
  struct IViewWrapperInternal *v13; // rax
  int AppUserModelIdForView; // eax
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  struct IViewWrapperInternal *v20; // rbx
  void *v21; // r8
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  struct MsgString **v24; // rdx
  int v25; // [rsp+20h] [rbp-50h]
  struct MsgString *v26[2]; // [rsp+30h] [rbp-40h] BYREF
  const unsigned __int16 *Data; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-28h] BYREF
  char v29; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v31; // [rsp+B8h] [rbp+48h] BYREF
  struct IViewWrapperInternal *v32; // [rsp+C0h] [rbp+50h] BYREF
  struct IUnknown *v33; // [rsp+C8h] [rbp+58h] BYREF

  v31 = a2;
  v28[1] = -2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 0;
  v9 = 0;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v32);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v32) < 0 )
  {
    v9 = 1;
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
    AppUserModelIdForView = ViewEventDispatcher::_RemovePendingViewReferenceForViewInstanceId(
                              (ViewEventDispatcher *)this,
                              a2,
                              &v33);
    v11 = AppUserModelIdForView;
    if ( AppUserModelIdForView >= 0 )
    {
      AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(this[64], v33, v26);
      v11 = AppUserModelIdForView;
      if ( AppUserModelIdForView >= 0 )
      {
        v28[2] = v26;
        v29 = 1;
        v26[1] = (struct MsgString *)this;
        Data = MsgStringGetData(v26[0]);
        v28[0] = v33;
        v17 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
                (unsigned int)&v32,
                (unsigned int)&v31,
                (unsigned int)v28,
                (unsigned int)&Data);
        v11 = v17;
        if ( v17 >= 0 )
        {
          MsgRelease(v26[0]);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
          goto LABEL_2;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9E9,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v17,
          v25);
        MsgRelease(v26[0]);
LABEL_14:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
        goto LABEL_6;
      }
      v16 = 2524LL;
    }
    else
    {
      v16 = 2521LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)AppUserModelIdForView,
      v25);
    goto LABEL_14;
  }
LABEL_2:
  v33 = 0LL;
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v33);
  MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)this, v32, &v33);
  v11 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration < 0 )
  {
    v18 = (unsigned int)MatchingViewEventRegistration;
    v19 = 2541LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v18,
      v25);
    goto LABEL_5;
  }
  v12 = v33;
  if ( v9 )
  {
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v32 + 584LL))(
      v32,
      (unsigned __int64)&v33[1] & ((unsigned __int128)-(__int128)(unsigned __int64)v33 >> 64),
      0LL);
    v20 = v32;
    v26[0] = v32;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v26);
    v22 = this + 46;
    v11 = 0;
    v23 = v22[1];
    if ( v23 != v22[3]
      || (v11 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  (__int64)v22,
                  v23 + 1,
                  v21),
          v11 >= 0) )
    {
      v24 = (struct MsgString **)(*v22 + 8 * v22[1]++);
      if ( v24 )
      {
        *v24 = 0LL;
        if ( v24 != v26 )
        {
          *v24 = v20;
          v26[0] = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v26);
    if ( v11 < 0 )
    {
      v18 = (unsigned int)v11;
      v19 = 2549LL;
      goto LABEL_24;
    }
  }
  v13 = v32;
  v32 = 0LL;
  *a3 = v13;
  v33 = 0LL;
  *a4 = v12;
  *a5 = v9;
  v11 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v33);
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v32);
  return (unsigned int)v11;
}
