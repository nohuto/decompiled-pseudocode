/*
 * XREFs of ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x1800E6FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D7D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A66C0 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIPresentation.c)
 *     ??$InvokeAll@QEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEBQEAVApplicationViewBackedViewHostItem@@$$QEA$$T@Z @ 0x1800DEC80 (--$InvokeAll@QEAVApplicationViewBackedViewHostItem@@$$T@-$AsyncEventSourceT@U-$ITypedEventHandle.c)
 *     ??$InvokeAll@QEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEBQEAVApplicationViewBackedViewHostItem@@$$QEAPEAVPresentationReadyChangedEventArgs@@@Z @ 0x1800E3E40 (--$InvokeAll@QEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$As.c)
 *     ??0PresentationReadyChangedEventArgs@@QEAA@XZ @ 0x1800E521C (--0PresentationReadyChangedEventArgs@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::OnImmersiveApplicationPresentationChange(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  BOOL v9; // edi
  PresentationReadyChangedEventArgs *v10; // rax
  PresentationReadyChangedEventArgs *v11; // rbx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  volatile signed __int64 *v15; // rcx
  volatile signed __int64 *v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // rcx
  RTL_SRWLOCK *v20; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v23; // [rsp+60h] [rbp+20h] BYREF
  PresentationReadyChangedEventArgs *v24; // [rsp+68h] [rbp+28h] BYREF
  __int64 v25; // [rsp+78h] [rbp+38h] BYREF

  v21[1] = -2LL;
  v23 = 0;
  if ( (*(int (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)a2 + 104LL))(a2, a1[7].Ptr, &v23) < 0 || !v23 )
    return 0LL;
  v25 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(PVOID, GUID *, __int64 *))a1[7].Ptr)(
         a1[7].Ptr,
         &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e,
         &v25);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v24 = 0LL;
        v20 = a1 - 3;
        v5 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem * const,std::nullptr_t>(
               a1 + 41,
               (__int64 *)&v20,
               (__int64 *)&v24);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 559LL;
          goto LABEL_5;
        }
      }
      goto LABEL_22;
    }
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25);
    v9 = v8 != 0;
    if ( v8 )
    {
      v24 = 0LL;
      v10 = (PresentationReadyChangedEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( !v10 )
      {
        v6 = -2147024882;
        v13 = 2147942414LL;
        v14 = 549LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
          (const char *)v13);
        v16 = (volatile signed __int64 *)v24;
        if ( v24 )
        {
          v24 = 0LL;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v16);
        }
        goto LABEL_19;
      }
      v11 = PresentationReadyChangedEventArgs::PresentationReadyChangedEventArgs(v10);
      *((_BYTE *)v11 + 64) = v9;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef((__int64)v11);
      v24 = v11;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v11);
      v20 = (RTL_SRWLOCK *)v24;
      v21[0] = (__int64)&a1[-3];
      v12 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem * const,PresentationReadyChangedEventArgs *>(
              a1 + 23,
              v21,
              (__int64 *)&v20);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = (unsigned int)v12;
        v14 = 550LL;
        goto LABEL_17;
      }
      v15 = (volatile signed __int64 *)v24;
      if ( v24 )
      {
        v24 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v15);
      }
    }
LABEL_22:
    v19 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return 0LL;
  }
  v7 = 532LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v5);
LABEL_19:
  v17 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v6;
}
