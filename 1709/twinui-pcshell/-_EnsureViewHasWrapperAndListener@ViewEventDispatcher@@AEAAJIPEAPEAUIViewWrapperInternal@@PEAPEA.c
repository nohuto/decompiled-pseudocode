/*
 * XREFs of ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180123720
 * Callers:
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180123A18 (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x18012411C (-_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@012@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x180129504 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBG.c)
 *     ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180134880 (-GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  char *v13; // rax
  unsigned int v14; // ecx
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
  struct MsgString *v30[2]; // [rsp+30h] [rbp-40h] BYREF
  char *v31; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v32[3]; // [rsp+48h] [rbp-28h] BYREF
  char v33; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v35; // [rsp+B8h] [rbp+48h] BYREF
  struct IViewWrapperInternal *v36; // [rsp+C0h] [rbp+50h] BYREF
  struct IUnknown *v37; // [rsp+C8h] [rbp+58h] BYREF

  v35 = a2;
  v32[1] = -2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 0;
  v9 = 0;
  v36 = 0LL;
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v36) < 0 )
  {
    v9 = 1;
    v37 = 0LL;
    AppUserModelIdForView = ViewEventDispatcher::_RemovePendingViewReferenceForViewInstanceId(
                              (ViewEventDispatcher *)this,
                              a2,
                              &v37);
    v11 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
    {
      v12 = 2940LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)AppUserModelIdForView);
LABEL_16:
      v16 = v37;
      if ( !v37 )
        goto LABEL_40;
      v37 = 0LL;
      lpVtbl = v16->lpVtbl;
      goto LABEL_39;
    }
    AppUserModelIdForView = ViewManagerBridge::GetAppUserModelIdForView(this[64], v37, v30);
    v11 = AppUserModelIdForView;
    if ( AppUserModelIdForView < 0 )
    {
      v12 = 2943LL;
      goto LABEL_6;
    }
    v32[2] = v30;
    v33 = 1;
    v30[1] = (struct MsgString *)this;
    if ( v30[0] )
    {
      v14 = *(_DWORD *)v30[0] & 0xE0000000;
      if ( v14 == 0x40000000 )
      {
        v13 = (char *)v30[0] + 8;
      }
      else
      {
        if ( v14 != 0x80000000 )
          __debugbreak();
        v13 = (char *)*((_QWORD *)v30[0] + 1);
      }
    }
    else
    {
      v13 = 0LL;
    }
    v31 = v13;
    v32[0] = v37;
    v15 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const (&)[53],ViewEventDispatcher *>(
            (unsigned int)&v36,
            (unsigned int)&v35,
            (unsigned int)v32,
            (unsigned int)&v31);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB8C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v15);
      MsgRelease(v30[0]);
      goto LABEL_16;
    }
    MsgRelease(v30[0]);
    v18 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
    }
  }
  v37 = 0LL;
  MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v36, &v37);
  v11 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration >= 0 )
  {
    v20 = v37;
    if ( !v9 )
      goto LABEL_36;
    v21 = v37 + 1;
    if ( !v37 )
      v21 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *, struct IUnknown *, _QWORD))(*(_QWORD *)v36 + 568LL))(
      v36,
      v21,
      0LL);
    v22 = v36;
    v32[0] = v36;
    if ( v36 )
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v36 + 8LL))(v36);
    v23 = this + 46;
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
        if ( v25 != v32 )
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
        (void *)0xB98,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
    }
    else
    {
LABEL_36:
      v26 = v36;
      v36 = 0LL;
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
      (void *)0xB90,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    v20 = v37;
  }
  if ( v20 )
  {
    lpVtbl = v20->lpVtbl;
    v16 = v20;
LABEL_39:
    ((void (__fastcall *)(struct IUnknown *))lpVtbl->Release)(v16);
  }
LABEL_40:
  v28 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return (unsigned int)v11;
}
