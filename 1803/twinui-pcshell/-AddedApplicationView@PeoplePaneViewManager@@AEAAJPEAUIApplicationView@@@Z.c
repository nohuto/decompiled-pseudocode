/*
 * XREFs of ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C1208
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800216A0 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1801BFE1C (--$emplace_back@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplicationVi.c)
 *     ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C10C0 (-AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C1CD0 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x1801C27C8 (-GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z.c)
 *     ?IsApplicationViewAlreadyStashed@PeoplePaneViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x1801C2BD4 (-IsApplicationViewAlreadyStashed@PeoplePaneViewManager@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsPlaceModeEnabled@@YA_NXZ @ 0x1801C2D7C (-IsPlaceModeEnabled@@YA_NXZ.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1801C3F90 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PeoplePaneViewManager::AddedApplicationView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  std::_Ref_count_base *v4; // rbx
  std::_Ref_count_base *v5; // r8
  struct IApplicationView **v6; // r15
  int v7; // eax
  int TabletModePositioner; // eax
  unsigned int v9; // ebx
  struct ITabletModePositioner *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  PVOID Ptr; // rbx
  int v14; // eax
  __int64 v15; // rdx
  RTL_SRWLOCK *v16; // rcx
  struct ITabletModePositioner *v18[3]; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  CWinRTApplicationView *v21; // [rsp+A0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v22; // [rsp+A8h] [rbp+48h] BYREF

  v18[1] = (struct ITabletModePositioner *)-2LL;
  *(_OWORD *)v19 = 0LL;
  if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView(this, a2, v19) < 0
    || (v4 = v19[0], *((_BYTE *)v19[0] + 56) != 1) )
  {
    if ( PeoplePaneViewManager::IsApplicationViewAlreadyStashed((PeoplePaneViewManager *)this, a2) )
      goto LABEL_36;
    AcquireSRWLockExclusive(this + 20);
    v22 = this + 20;
    v21 = a2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v21);
    std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::emplace_back<Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&this[21],
      (__int64 *)&v21);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
    if ( this == (RTL_SRWLOCK *)-160LL )
      goto LABEL_36;
    v16 = this + 20;
    goto LABEL_35;
  }
  AcquireSRWLockExclusive(this + 16);
  v18[2] = (struct ITabletModePositioner *)&this[16];
  v5 = v4;
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v5 = *(std::_Ref_count_base **)v4;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v5, *((unsigned int *)v4 + 10));
  v6 = (struct IApplicationView **)((char *)v4 + 32);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)v4 + 4, a2);
  if ( !LODWORD(this[26].Ptr) )
  {
    v7 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)*v6 + 56LL))(*v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        589LL,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
    goto LABEL_22;
  }
  v18[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
  TabletModePositioner = PeoplePaneViewManager::GetTabletModePositioner((PeoplePaneViewManager *)this, v18);
  v9 = TabletModePositioner;
  if ( TabletModePositioner < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x252,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)TabletModePositioner);
    goto LABEL_30;
  }
  v21 = 0LL;
  v10 = v18[0];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v11 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, CWinRTApplicationView **))(*(_QWORD *)v10 + 72LL))(
          v10,
          &v21);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 597LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_29;
  }
  if ( (*(unsigned int (__fastcall **)(CWinRTApplicationView *, __int64))(*(_QWORD *)v21 + 80LL))(v21, 1LL) != 2
    || (*(unsigned int (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v21 + 88LL))(v21)
    || !IsPlaceModeEnabled() )
  {
    v11 = PeoplePaneViewManager::AddPeoplePaneToTabletModeLayout((PeoplePaneViewManager *)this, *v6);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 609LL;
      goto LABEL_28;
    }
    v11 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)*v6 + 56LL))(*v6);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 610LL;
      goto LABEL_28;
    }
    goto LABEL_21;
  }
  v22 = 0LL;
  Ptr = this[24].Ptr;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v14 = (*(__int64 (__fastcall **)(PVOID, _QWORD, GUID *, GUID *, RTL_SRWLOCK **))(*(_QWORD *)Ptr + 72LL))(
          Ptr,
          0LL,
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &v22);
  v9 = v14;
  if ( v14 >= 0 )
  {
    v14 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, struct IApplicationView *, CWinRTApplicationView *, _QWORD))v22->Ptr
           + 7))(
            v22,
            a2,
            v21,
            0LL);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 605LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
LABEL_22:
    if ( this == (RTL_SRWLOCK *)-128LL )
    {
LABEL_36:
      v9 = 0;
      goto LABEL_37;
    }
    v16 = this + 16;
LABEL_35:
    ReleaseSRWLockExclusive(v16);
    goto LABEL_36;
  }
  v15 = 604LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
  if ( this != (RTL_SRWLOCK *)-128LL )
    ReleaseSRWLockExclusive(this + 16);
LABEL_37:
  if ( v19[1] )
    std::_Ref_count_base::_Decref(v19[1]);
  return v9;
}
