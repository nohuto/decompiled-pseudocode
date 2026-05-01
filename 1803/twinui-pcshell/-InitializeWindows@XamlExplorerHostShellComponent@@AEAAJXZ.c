/*
 * XREFs of ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1801F8A60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_426bb45a896c97a0e7f03d36232edfea___::Run @ 0x1801F91F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_426bb45a896c97a0e7f03d36232edfea___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009FFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18009FFC0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167___ @ 0x1801F7200 (MakeXamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167___.c)
 *     ??0?$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801F756C (--0-$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA@QEAV1@I@Z @ 0x1801F7728 (--0Iterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ @ 0x1801F83D4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@AEAAXXZ.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FA99C (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlExplorerHostShellComponent::InitializeWindows(XamlExplorerHostShellComponent *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  volatile int *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  int XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // [rsp+48h] [rbp-59h] BYREF
  __int64 v15; // [rsp+50h] [rbp-51h] BYREF
  __int64 v16; // [rsp+58h] [rbp-49h] BYREF
  __int64 v17; // [rsp+60h] [rbp-41h] BYREF
  __int64 v18[2]; // [rsp+68h] [rbp-39h] BYREF
  void *v19; // [rsp+78h] [rbp-29h] BYREF
  int v20; // [rsp+80h] [rbp-21h]
  __int64 v21; // [rsp+88h] [rbp-19h] BYREF
  __int64 v22[2]; // [rsp+90h] [rbp-11h] BYREF
  int v23; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v24[4]; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v25; // [rsp+C8h] [rbp+27h] BYREF
  __int128 v26; // [rsp+D8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v24[2] = -2LL;
  v16 = 0LL;
  v2 = *((_QWORD *)this + 24);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v16);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 112LL))(v2, &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    ObjectArrayAdapter<IPenWorkspaceLayoutItem>::ObjectArrayAdapter<IPenWorkspaceLayoutItem>((__int64)&v19, v16);
    ObjectArrayAdapter<IImmersiveMonitor>::Iterator::Iterator((__int64)&v21, (__int64)&v19, 0);
    ObjectArrayAdapter<IImmersiveMonitor>::Iterator::Iterator((__int64)&v23, (__int64)&v19, v20);
    while ( 1 )
    {
      if ( (_DWORD)v21 == v23 && v22[1] == v24[1] )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v24);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v22);
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v19);
        v4 = 0;
        goto LABEL_29;
      }
      v15 = v22[0];
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v15);
      v24[3] = (__int64)this;
      v6 = *((_QWORD *)this + 22);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != 0x7FFFFFFF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 22, v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_12;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v6 + 16), v5);
LABEL_12:
      v18[0] = (__int64)this;
      v8 = *((_QWORD *)this + 22);
      while ( v8 >= 0 )
      {
        if ( (_DWORD)v8 != 0x7FFFFFFF )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 22, v8 + 1, v8);
          if ( v9 != v8 )
            continue;
        }
        goto LABEL_18;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v8 + 16), v5);
LABEL_18:
      v18[1] = (__int64)this;
      v14 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167 = MakeXamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_(
                                                                                         &v14,
                                                                                         v18);
      v4 = XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167;
      if ( XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167 < 0 )
        break;
      XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 88LL))(
                                                                                         v15,
                                                                                         &v26);
      v4 = XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167;
      if ( XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167 < 0 )
      {
        v12 = 281LL;
        goto LABEL_26;
      }
      v17 = 0LL;
      v25 = v26;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      XamlExplorerHost::CreateXamlExplorerHostWindowInBand(
        *((_QWORD *)this + 28),
        v14,
        (unsigned int)&v25,
        1,
        *((_QWORD *)this + 30),
        ((_DWORD)this + 128) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      v11 = v18[0];
      if ( v18[0] )
      {
        v18[0] = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release(v11);
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release((__int64)this);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
      LODWORD(v21) = v21 + 1;
      ObjectArrayAdapter<IImmersiveMonitor>::Iterator::GetCurrentObject(&v21);
    }
    v12 = 278LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    if ( v18[0] )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release(v18[0]);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release((__int64)this);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v22);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x102,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v3);
  }
LABEL_29:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v16);
  return v4;
}
