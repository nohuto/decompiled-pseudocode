/*
 * XREFs of ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112910
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180112800 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x180072E04 (--$emplace_back@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@@@WRL@M.c)
 *     ?IsPlaceModeEnabled@@YA_NXZ @ 0x18011007C (-IsPlaceModeEnabled@@YA_NXZ.c)
 *     ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x180112ED8 (-GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z.c)
 *     ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112FA4 (-AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801133B8 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180113B94 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PeoplePaneViewManager::AddedApplicationView(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2)
{
  __int64 *v4; // rbx
  __int64 *v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  int TabletModePositioner; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct ITabletModePositioner *v17; // rcx
  __int64 v18; // rcx
  struct ITabletModePositioner *v19; // rcx
  RTL_SRWLOCK *v20; // rcx
  struct IApplicationView **i; // rax
  __int64 v22; // rbx
  struct ITabletModePositioner *v24; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v25[4]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v26; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v28; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+48h] BYREF

  v25[1] = -2LL;
  v26 = 0LL;
  if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView(this, a2, &v26) < 0
    || (v4 = (__int64 *)v26, *(_BYTE *)(v26 + 56) != 1) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 20);
    for ( i = (struct IApplicationView **)*((_QWORD *)this + 21); i != *((struct IApplicationView ***)this + 22); ++i )
    {
      if ( *i == a2 )
        goto LABEL_53;
    }
    if ( this != (PeoplePaneViewManager *)-160LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 20);
    AcquireSRWLockExclusive((PSRWLOCK)this + 20);
    v25[3] = (char *)this + 160;
    v25[0] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::emplace_back<Microsoft::WRL::ComPtr<ITaskWindow>>(
      (unsigned __int64 *)this + 21,
      v25);
    if ( v25[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
LABEL_53:
    if ( this == (PeoplePaneViewManager *)-160LL )
      goto LABEL_56;
    v20 = (RTL_SRWLOCK *)((char *)this + 160);
    goto LABEL_55;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  v25[2] = (char *)this + 128;
  v5 = v4;
  if ( (unsigned __int64)v4[3] >= 8 )
    v5 = (__int64 *)*v4;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v5, *((unsigned int *)v4 + 10));
  if ( (struct IApplicationView *)v4[4] != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = v4[4];
    v4[4] = (__int64)a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !*((_DWORD *)this + 52) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4[4] + 32LL))(v4[4]);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x261,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_41:
    if ( this == (PeoplePaneViewManager *)-128LL )
    {
LABEL_56:
      v9 = 0;
      goto LABEL_57;
    }
    v20 = (RTL_SRWLOCK *)((char *)this + 128);
LABEL_55:
    ReleaseSRWLockExclusive(v20);
    goto LABEL_56;
  }
  v24 = 0LL;
  TabletModePositioner = PeoplePaneViewManager::GetTabletModePositioner(this, &v24);
  v9 = TabletModePositioner;
  if ( TabletModePositioner >= 0 )
  {
    v28 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, &v28);
    v9 = v10;
    if ( v10 < 0 )
    {
      v11 = 617LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_31:
      v16 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      goto LABEL_33;
    }
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 80LL))(v28, 1LL) == 2
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v28 + 88LL))(v28)
      && IsPlaceModeEnabled() )
    {
      v29 = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *, __int64 *))(**((_QWORD **)this + 24) + 72LL))(
              *((_QWORD *)this + 24),
              0LL,
              &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
              &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
              &v29);
      v9 = v12;
      if ( v12 < 0 )
      {
        v13 = 624LL;
        goto LABEL_24;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, __int64, _QWORD))(*(_QWORD *)v29 + 56LL))(
              v29,
              a2,
              v28,
              0LL);
      v9 = v12;
      if ( v12 < 0 )
      {
        v13 = 625LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v12);
        v14 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        goto LABEL_31;
      }
      v15 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    else
    {
      v10 = PeoplePaneViewManager::AddPeoplePaneToTabletModeLayout(this, (struct IApplicationView *)v4[4]);
      v9 = v10;
      if ( v10 < 0 )
      {
        v11 = 629LL;
        goto LABEL_30;
      }
    }
    v18 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct ITabletModePositioner *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x266,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)TabletModePositioner);
LABEL_33:
  v17 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct ITabletModePositioner *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( this != (PeoplePaneViewManager *)-128LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 16);
LABEL_57:
  if ( *((_QWORD *)&v26 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v22 = *((_QWORD *)&v26 + 1);
      (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
    }
  }
  return v9;
}
