/*
 * XREFs of ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x1801B8CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewSizePreferencesChangedEventArgs@@AEAUSize@Foundation@Windows@@@Z @ 0x1801B50F4 (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Deta.c)
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7A48 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@@AEBQEAVViewSizePreferencesChangedEventArgs@@@Z @ 0x1801BAD70 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs@@@-$Async.c)
 */

__int64 __fastcall Win32BackedViewHostItem::RaiseSizePreferencesChanged(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ViewSizePreferencesChangedEventArgs *v9; // [rsp+50h] [rbp+18h] BYREF
  ViewSizePreferencesChangedEventArgs *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v7[0] = a2;
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgs>::InternalRelease((__int64 *)&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgs,ViewSizePreferencesChangedEventArgs,Windows::Foundation::Size &>(
         &v9,
         v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v10 = v9;
    v7[1] = a1 - 16;
    v3 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Win32BackedViewHostItem *,ViewSizePreferencesChangedEventArgs *>((PVOID)(a1 + 440));
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 446LL;
  }
  else
  {
    v5 = 445LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgs>::InternalRelease((__int64 *)&v9);
  return v4;
}
