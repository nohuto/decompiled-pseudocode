/*
 * XREFs of ?ExitFullScreen@Win32BackedViewHostItem@@UEAAJXZ @ 0x180108950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ??$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEAPEAVApplicationViewBackedViewHostItem@@$$QEAPEAVViewSizePreferencesChangedEventArgs@@@Z @ 0x1801036D8 (--$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs@@@-$.c)
 *     ??$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@@012@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x18010A270 (--$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEAW4ViewMode@Holographic@She.c)
 */

__int64 __fastcall Win32BackedViewHostItem::ExitFullScreen(Win32BackedViewHostItem *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  volatile signed __int64 *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  *((_DWORD *)this + 28) = 0;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ViewHostViewModeChangeRequestedEventArgs,ViewHostViewModeChangeRequestedEventArgs,enum Windows::Internal::Shell::Holographic::ViewMode &>(&v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 408LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_7;
  }
  v9 = v8;
  v10 = (__int64)this - 16;
  v2 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem *,ViewSizePreferencesChangedEventArgs *>(
         (RTL_SRWLOCK *)this + 53,
         &v10,
         &v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 409LL;
    goto LABEL_5;
  }
  v3 = 0;
LABEL_7:
  v5 = (volatile signed __int64 *)v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v5);
  }
  return v3;
}
