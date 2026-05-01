/*
 * XREFs of ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801139F8
 * Callers:
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x180111DC0 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x180112010 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x1801CD1F4 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::CloseView(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2,
        struct IImmersiveApplication **a3)
{
  int ApplicationFromView; // eax
  unsigned int LastError; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  HWND Ancestor; // rax
  const char *v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  PeoplePaneViewManager *v16; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v17; // [rsp+70h] [rbp+30h] BYREF
  HWND hwnd; // [rsp+78h] [rbp+38h] BYREF

  v16 = this;
  v17 = 0LL;
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v17, a3);
  LastError = ApplicationFromView;
  if ( ApplicationFromView < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3C9,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)ApplicationFromView);
    goto LABEL_13;
  }
  v16 = 0LL;
  v5 = v17;
  v6 = *v17;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v16);
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, __int64 *))(v6 + 24))(
         v5,
         4LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         v7);
  LastError = v8;
  if ( v8 < 0 )
  {
    v9 = 972LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(PeoplePaneViewManager *, HWND *))(*(_QWORD *)v16 + 32LL))(v16, &hwnd);
  LastError = v8;
  if ( v8 < 0 )
  {
    v9 = 975LL;
    goto LABEL_7;
  }
  Ancestor = GetAncestor(hwnd, 2u);
  if ( PostMessageW(Ancestor, 0x10u, 0LL, 0LL) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3D2,
                  (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                  v11);
LABEL_11:
  v12 = (__int64)v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_13:
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  }
  return LastError;
}
