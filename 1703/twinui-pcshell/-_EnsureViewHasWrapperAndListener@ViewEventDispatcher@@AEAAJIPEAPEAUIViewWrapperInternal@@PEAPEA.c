/*
 * XREFs of ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x1800F8480
 * Callers:
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8790 (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x1800F8E9C (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@PEBGAEAY0DF@$$CBGQEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAIAEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEBQEAVViewEventDispatcher@@@Z @ 0x1800FE7FC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@PEBGAEAY0DF@$$.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180109ED0 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
        ViewManagerBridge **this,
        unsigned int a2,
        struct IViewWrapperInternal **a3,
        struct IUnknown **a4,
        char *a5)
{
  char v9; // r15
  int AppUserModelIdForView; // eax
  int v11; // esi
  __int64 v12; // rdx
  char *v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  struct IUnknown *v16; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  struct IUnknown *v18; // rcx
  int MatchingViewEventRegistration; // eax
  struct IUnknown *v20; // rbx
  struct IUnknown *v21; // rdx
  struct IViewWrapperInternal *v22; // rdi
  _QWORD *v23; // r14
  __int64 v24; // rdx
  struct IViewWrapperInternal **v25; // rdx
  struct IViewWrapperInternal *v26; // rax
  struct IUnknown *v27; // rax
  struct IViewWrapperInternal *v28; // rcx
  struct MsgString *v30; // [rsp+30h] [rbp-40h] BYREF
  struct MsgString **v31; // [rsp+38h] [rbp-38h] BYREF
  char *v32; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v33[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD *v34; // [rsp+58h] [rbp-18h] BYREF
  char v35; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v37; // [rsp+B8h] [rbp+48h] BYREF
  struct IViewWrapperInternal *v38; // [rsp+C0h] [rbp+50h] BYREF
  struct IUnknown *v39; // [rsp+C8h] [rbp+58h] BYREF

  v37 = a2;
  v33[1] = -2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 0;
  v9 = 0;
  v38 = 0LL;
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v38) < 0 )
  {
    v9 = 1;
    v39 = 0LL;
    AppUserModelIdForView = ViewEventDispatcher::_RemovePendingViewReferenceForViewInstanceId(
                              (ViewEventDispatcher *)this,
                              a2,
                              &v39);
    v11 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
    {
      v12 = 2810LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)AppUserModelIdForView);
LABEL_17:
      v16 = v39;
      if ( !v39 )
        goto LABEL_43;
      v39 = 0LL;
      lpVtbl = v16->lpVtbl;
      goto LABEL_42;
    }
    AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(this[55], v39, &v30);
    v11 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
    {
      v12 = 2813LL;
      goto LABEL_6;
    }
    v31 = &v30;
    wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v34, &v31);
    v31 = this;
    if ( v30 )
    {
      v14 = *(_DWORD *)v30 & 0xE0000000;
      if ( v14 == 0x40000000 )
      {
        v13 = (char *)v30 + 8;
      }
      else
      {
        if ( v14 != 0x80000000 )
          __debugbreak();
        v13 = (char *)*((_QWORD *)v30 + 1);
      }
    }
    else
    {
      v13 = 0LL;
    }
    v32 = v13;
    v33[0] = v39;
    v15 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown * &,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher * const>(
            (unsigned int)&v38,
            (unsigned int)&v37,
            (unsigned int)v33,
            (unsigned int)&v32);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB0A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v15);
      if ( v35 )
        MsgRelease(*v34);
      goto LABEL_17;
    }
    if ( v35 )
      MsgRelease(*v34);
    v18 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
    }
  }
  v39 = 0LL;
  MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v38, &v39);
  v11 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration >= 0 )
  {
    v20 = v39;
    if ( !v9 )
      goto LABEL_39;
    v21 = v39 + 1;
    if ( !v39 )
      v21 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *, struct IUnknown *, _QWORD))(*(_QWORD *)v38 + 568LL))(
      v38,
      v21,
      0LL);
    v22 = v38;
    v33[0] = v38;
    if ( v38 )
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v38 + 8LL))(v38);
    v23 = this + 37;
    v11 = 0;
    v24 = v23[1];
    if ( v24 != v23[3]
      || (v11 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                  (__int64)v23,
                  v24 + 1),
          v11 >= 0) )
    {
      v25 = (struct IViewWrapperInternal **)(*v23 + 8 * v23[1]++);
      if ( v25 )
      {
        *v25 = 0LL;
        if ( v25 != v33 )
        {
          *v25 = v22;
          v22 = 0LL;
        }
      }
    }
    if ( v22 )
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB16,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
    }
    else
    {
LABEL_39:
      v26 = v38;
      v38 = 0LL;
      *a3 = v26;
      v27 = v20;
      v20 = 0LL;
      *a4 = v27;
      *a5 = v9;
      v11 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB0E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    v20 = v39;
  }
  if ( v20 )
  {
    lpVtbl = v20->lpVtbl;
    v16 = v20;
LABEL_42:
    ((void (__fastcall *)(struct IUnknown *))lpVtbl->Release)(v16);
  }
LABEL_43:
  v28 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return (unsigned int)v11;
}
