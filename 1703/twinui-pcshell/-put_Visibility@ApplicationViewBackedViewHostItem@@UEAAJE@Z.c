/*
 * XREFs of ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1800E5DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A66C0 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIPresentation.c)
 *     ??$Make@VApplicationViewOperation@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800DEF40 (--$Make@VApplicationViewOperation@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOperati.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIApplicationViewOperation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E26A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIApplicationViewOperation@@U-$InterfaceLi_ea_1800E26A0.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@@012@$$QEA_N@Z @ 0x1800E3DB4 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV-$ComP.c)
 *     ??$InvokeAll@QEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEBQEAVApplicationViewBackedViewHostItem@@$$QEAPEAVPresentationReadyChangedEventArgs@@@Z @ 0x1800E3E40 (--$InvokeAll@QEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$As.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewBackedViewHostItem::put_Visibility(ApplicationViewBackedViewHostItem *this, char a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  int ready; // eax
  __int64 v13; // rdx
  volatile signed __int64 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v24; // [rsp+78h] [rbp+28h] BYREF
  volatile signed __int32 *v25; // [rsp+80h] [rbp+30h] BYREF
  __int64 v26; // [rsp+88h] [rbp+38h] BYREF

  v22[1] = -2LL;
  if ( a2 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation>(&v25);
    v3 = v25;
    if ( !v25 )
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)0x8007000ELL);
LABEL_6:
      if ( v3 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewOperation,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
      return v4;
    }
    *((_DWORD *)v25 + 20) = 1;
    v5 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 *))(**((_QWORD **)this + 9) + 296LL))(
           *((_QWORD *)this + 9),
           v3);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x85,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_6;
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewOperation,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
    return 0LL;
  }
  v20 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v9 = Instance;
  if ( Instance >= 0 )
  {
    v26 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v20 + 24LL))(
            v20,
            &IID_IImmersiveApplicationManager,
            &GUID_9886efb0_afb3_4a35_b381_329935b32d5a,
            &v26);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v26 + 24LL))(
              v26,
              *((_QWORD *)this + 10),
              0LL,
              2050LL);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v25 = 0LL;
        v24 = 0;
        ready = Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool>(
                  (volatile signed __int64 **)&v25,
                  &v24);
        v9 = ready;
        if ( ready >= 0 )
        {
          v21 = (volatile signed __int64 *)v25;
          v22[0] = (__int64)this;
          ready = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem * const,PresentationReadyChangedEventArgs *>(
                    (RTL_SRWLOCK *)this + 26,
                    v22,
                    (__int64 *)&v21);
          v9 = ready;
          if ( ready >= 0 )
          {
            v17 = (volatile signed __int64 *)v25;
            if ( v25 )
            {
              v25 = 0LL;
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v17);
            }
            v18 = v26;
            if ( v26 )
            {
              v26 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
            v19 = v20;
            if ( v20 )
            {
              v20 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            }
            return 0LL;
          }
          v13 = 153LL;
        }
        else
        {
          v13 = 152LL;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
          (const char *)(unsigned int)ready);
        v14 = (volatile signed __int64 *)v25;
        if ( v25 )
        {
          v25 = 0LL;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v14);
        }
        goto LABEL_23;
      }
      v11 = 144LL;
    }
    else
    {
      v11 = 143LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v10);
LABEL_23:
    v15 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x8C,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)Instance);
LABEL_25:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v9;
}
