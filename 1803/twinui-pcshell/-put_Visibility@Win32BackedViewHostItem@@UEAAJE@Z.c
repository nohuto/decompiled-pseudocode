/*
 * XREFs of ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1801BA450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@$$QEA_N@Z @ 0x1801B4E84 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?InternalRelease@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7A28 (-InternalRelease@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::_DisplayInHeadset @ 0x1801B9924 (_anonymous_namespace_--_DisplayInHeadset.c)
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ @ 0x1801B9B10 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ.c)
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@@AEBQEAVPresentationReadyChangedEventArgs@@@Z @ 0x1801BAC54 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$AsyncEv.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32BackedViewHostItem::put_Visibility(HWND *this, char a2)
{
  const char *v4; // r9
  bool v6; // zf
  int ready; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v16; // [rsp+60h] [rbp+28h] BYREF
  char v17; // [rsp+68h] [rbp+30h] BYREF
  __int64 v18; // [rsp+70h] [rbp+38h]
  HWND *v19; // [rsp+78h] [rbp+40h]

  if ( !PostMessageW(this[14], 0x18u, a2 != 0, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x87,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v4);
  v6 = a2 == 0;
  if ( !a2 )
  {
    v16 = 0LL;
    v17 = 0;
    Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease(&v16);
    ready = Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool>(
              &v16,
              &v17);
    v8 = ready;
    if ( ready < 0 )
    {
      v9 = 144LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease(&v16);
      return v8;
    }
    v18 = v16;
    v19 = this;
    ready = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Win32BackedViewHostItem *,PresentationReadyChangedEventArgs *>(this + 49);
    v8 = ready;
    if ( ready < 0 )
    {
      v9 = 145LL;
      goto LABEL_8;
    }
    if ( (unsigned __int8)GetPropW(this[14], L"Windows.Graphics.Holographic.DisableForegroundOnPresence")
      && anonymous_namespace_::_DisplayInHeadset(v11, v10, v12, v13) )
    {
      v14 = (*(__int64 (__fastcall **)(HWND))(*(_QWORD *)this[17] + 56LL))(this[17]);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          152LL,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease(&v16);
    v6 = 1;
  }
  *((_BYTE *)this + 320) = !v6;
  Win32BackedViewHostItem::_RaiseTitleBarChangedEvent(this);
  return 0LL;
}
