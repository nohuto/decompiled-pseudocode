/*
 * XREFs of _lambda_3c23c103e221e9d7edb5a529b76dd87c_::operator() @ 0x1801EA6B8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c23c103e221e9d7edb5a529b76dd87c___::Run @ 0x1801ED760 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c23c103e221e9d7edb5a529b76dd87c___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180149828 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z@Z @ 0x1801E89DC (--$MakeAgileCallback@U-$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@I.c)
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIWindowChangedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@6789@@Z@Z @ 0x1801E8A94 (--$MakeAgileCallback@U-$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@Appli_ea_1801E8A94.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_3c23c103e221e9d7edb5a529b76dd87c_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  wil *v16; // rcx
  const char *v18; // r9
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h] BYREF
  __int64 v21[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v22[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v26; // [rsp+70h] [rbp+8h]
  int v27; // [rsp+78h] [rbp+10h] BYREF
  __int64 v28; // [rsp+80h] [rbp+18h] BYREF
  __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  v21[1] = -2LL;
  try
  {
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
    v3 = *(_QWORD *)a1 + 192LL;
    SafeRelease<IShellItemArray>(v3);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 96LL))(v2, v3);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        712LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 192LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 192LL),
           &v27);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        713LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    if ( (unsigned int)(v27 - 1) <= 1 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        717LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)0x8000FFFFLL);
      __debugbreak();
    }
    *(_QWORD *)&v22[0] = WindowManagerBridge::OnWindowEnumerationCompleted;
    DWORD2(v22[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *)>(
      v21,
      (__int64 *)a1,
      v22);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 48LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 192LL),
           v21[0],
           *(_QWORD *)a1 + 208LL);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        721LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    *(_QWORD *)&v22[0] = WindowManagerBridge::OnWindowWatcherStopped;
    DWORD2(v22[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *)>(
      &v20,
      (__int64 *)a1,
      v22);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 64LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 192LL),
           v20,
           *(_QWORD *)a1 + 216LL);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        724LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    *(_QWORD *)&v22[0] = WindowManagerBridge::OnWindowAdded;
    DWORD2(v22[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *)>(
      &v19,
      (__int64 *)a1,
      v22);
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 80LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 192LL),
           v19,
           *(_QWORD *)a1 + 224LL);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        727LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    *(_QWORD *)&v22[0] = CToastCenterExperienceManager::OnVisibilityRevokedChanged;
    DWORD2(v22[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *)>(
      &v29,
      (__int64 *)a1,
      v22);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 96LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 192LL),
           v29,
           *(_QWORD *)a1 + 232LL);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        730LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    *(_QWORD *)&v22[0] = CToastCenterExperienceManager::OnVisibilityRevokedChanged;
    DWORD2(v22[0]) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,WindowManagerBridge * const &,long (WindowManagerBridge::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *)>(
      &v28,
      (__int64 *)a1,
      v22);
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 160LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 192LL),
            v28,
            *(_QWORD *)a1 + 240LL);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        733LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    *(_BYTE *)(*(_QWORD *)a1 + 200LL) = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 200LL))(*(_QWORD *)(*(_QWORD *)a1 + 192LL));
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        736LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    v12 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = (wil *)v21[0];
    if ( v21[0] )
    {
      v21[0] = 0LL;
      (*(void (__fastcall **)(wil *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  catch ( ... )
  {
    **(_DWORD **)(a1 + 8) = wil::ResultFromCaughtException(v16);
    v18 = (const char *)**(unsigned int **)(a1 + 8);
    v26 = (unsigned int)v18;
    if ( (int)v18 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E5,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v18);
    return v26;
  }
  return 0LL;
}
