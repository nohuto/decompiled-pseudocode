/*
 * XREFs of ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180210980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800720F8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800F67B4 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?Cloak@MonitorFrame@@QEAAJ_N@Z @ 0x1802097F8 (-Cloak@MonitorFrame@@QEAAJ_N@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18020AAC0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z @ 0x18020FBE8 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlAllUpViewHost::ViewLoaded(XamlAllUpViewHost *this)
{
  char *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // r15
  int v4; // r13d
  __int64 v5; // rdx
  MonitorFrame **v6; // r14
  MonitorFrame **v7; // r12
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v13; // rdx
  _BYTE v14[128]; // [rsp+58h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v16; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v17; // [rsp+F0h] [rbp+6Fh] BYREF

  v2 = (char *)this - 128;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 104) & -(__int64)(this != (XamlAllUpViewHost *)128));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v5 = ++*((_QWORD *)this + 28);
  if ( v5 == (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3 )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (XamlAllUpViewHost *)((char *)this + 240),
      (wil::ActivityThreadWatcher *)v14);
    v6 = (MonitorFrame **)*((_QWORD *)this + 25);
    v7 = (MonitorFrame **)*((_QWORD *)this + 26);
    while ( 1 )
    {
      if ( v6 == v7 )
      {
        *((_DWORD *)this + 144) = 1;
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v14);
        v5 = *((_QWORD *)this + 28);
        goto LABEL_9;
      }
      MonitorFrame::Cloak(*v6, 0);
      v17 = *((_QWORD *)*v6 + 5);
      v8 = v17;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v17);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v8 + 96LL))(v8, *((_QWORD *)this + 14), &v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
      if ( v9 < 0 )
        break;
      if ( v16 )
      {
        v17 = *((_QWORD *)*v6 + 6);
        v10 = v17;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v17);
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        if ( v9 < 0 )
        {
          v13 = 336LL;
          goto LABEL_17;
        }
      }
      ++v6;
    }
    v13 = 333LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v9);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v14);
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)v2);
  }
  else
  {
LABEL_9:
    v11 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
    if ( v5 == v11 )
      XamlSwitcherTelemetry::ShowXamlTaskView::Stop((XamlAllUpViewHost *)((char *)this + 240), v11, 1u);
    v9 = 0;
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return (unsigned int)v9;
}
