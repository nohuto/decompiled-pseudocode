/*
 * XREFs of ?RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1801BC270
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVFrameworkViewTypeSetEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVFrameworkViewTypeSetEventArgs@@@Z @ 0x1801BAB20 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVFrameworkViewTypeSetEventArgs@@@-$A.c)
 *     ??$MakeAndInitialize@VFrameworkViewTypeSetEventArgs@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVFrameworkViewTypeSetEventArgs@@AEAH@Z @ 0x1801BB0C0 (--$MakeAndInitialize@VFrameworkViewTypeSetEventArgs@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVFr.c)
 *     ?get_FrameworkViewType@ApplicationViewBackedViewHostItem@@UEAAJPEAH@Z @ 0x1801BE020 (-get_FrameworkViewType@ApplicationViewBackedViewHostItem@@UEAAJPEAH@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E5C98 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::RaiseFrameworkViewTypeSet(
        ApplicationViewBackedViewHostItem *this)
{
  char *v2; // rsi
  int FrameworkViewType; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  FrameworkViewTypeSetEventArgs *v8; // [rsp+50h] [rbp+8h] BYREF
  FrameworkViewTypeSetEventArgs *v9; // [rsp+58h] [rbp+10h] BYREF
  char *v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = (char *)this - 16;
  FrameworkViewType = ApplicationViewBackedViewHostItem::get_FrameworkViewType(
                        (ApplicationViewBackedViewHostItem *)((char *)this - 16),
                        (int *)&v8);
  v4 = FrameworkViewType;
  if ( FrameworkViewType >= 0 )
  {
    Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v9);
    FrameworkViewType = Microsoft::WRL::Details::MakeAndInitialize<FrameworkViewTypeSetEventArgs,FrameworkViewTypeSetEventArgs,int &>(
                          &v9,
                          (int *)&v8);
    v4 = FrameworkViewType;
    if ( FrameworkViewType >= 0 )
    {
      v8 = v9;
      v10 = v2;
      FrameworkViewType = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,FrameworkViewTypeSetEventArgs *>(
                            (_QWORD *)this + 59,
                            (volatile int *)&v10,
                            (__int64 *)&v8);
      v4 = FrameworkViewType;
      if ( FrameworkViewType >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v5 = 551LL;
    }
    else
    {
      v5 = 550LL;
    }
  }
  else
  {
    v5 = 549LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)FrameworkViewType);
LABEL_9:
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v9);
  return v4;
}
