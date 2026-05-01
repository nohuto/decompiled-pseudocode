/*
 * XREFs of ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180112800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112910 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112D10 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180112E24 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x180113B38 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  __int64 v3; // rbx
  const unsigned __int16 *AppId; // rax
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  AppId = PeoplePaneViewManager::s_GetAppId();
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, const unsigned __int16 *, int *))(v3 + 128))(
         a2,
         AppId,
         &v12);
  if ( v8 < 0 )
  {
    v9 = 558LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( v12 )
  {
    if ( !a3 )
    {
      v8 = PeoplePaneViewManager::AddedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
      if ( v8 < 0 )
      {
        v9 = 565LL;
        goto LABEL_3;
      }
      return 0LL;
    }
    if ( a3 <= 0 )
      return 0LL;
    if ( a3 <= 2 )
      goto LABEL_16;
    switch ( a3 )
    {
      case 7:
        v8 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 1);
        if ( v8 < 0 )
        {
          v9 = 573LL;
          goto LABEL_3;
        }
        break;
      case 9:
        v8 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 0);
        if ( v8 < 0 )
        {
          v9 = 576LL;
          goto LABEL_3;
        }
        break;
      case 11:
LABEL_16:
        v8 = PeoplePaneViewManager::RemovedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
        if ( v8 < 0 )
        {
          v9 = 570LL;
          goto LABEL_3;
        }
        return 0LL;
      default:
        return 0LL;
    }
  }
  return 0LL;
}
