/*
 * XREFs of ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112FA4
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112910 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x180112ED8 (-GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::AddPeoplePaneToTabletModeLayout(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2)
{
  int TabletModePositioner; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct ITabletModePositioner *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  struct ITabletModePositioner *v12; // [rsp+68h] [rbp+28h] BYREF

  v12 = 0LL;
  TabletModePositioner = PeoplePaneViewManager::GetTabletModePositioner(this, &v12);
  v4 = TabletModePositioner;
  if ( TabletModePositioner < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2BE,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)TabletModePositioner);
    goto LABEL_13;
  }
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, GUID *, GUID *, __int64 *))(*(_QWORD *)v12 + 64LL))(
         v12,
         &CLSID_AppSwitchOperation,
         &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
         &v11);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 705LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v11 + 40LL))(v11, a2, 0LL);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 706LL;
    goto LABEL_9;
  }
  v5 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, __int64))(*(_QWORD *)v12 + 72LL))(v12, v11);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 707LL;
    goto LABEL_9;
  }
  v4 = 0;
LABEL_11:
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
LABEL_13:
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct ITabletModePositioner *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v4;
}
