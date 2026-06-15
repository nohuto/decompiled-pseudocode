/*
 * XREFs of ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x1800C6BDC
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x1800BEC20 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800BFF80 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64___::_)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_ @ 0x1800C5D8C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800C5D8C.c)
 *     ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1800C60E8 (-LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800C64C0 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1800C7488 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CExclusiveModeListener::RuntimeClassInitialize(LPVOID *this)
{
  _QWORD *v2; // rdi
  HRESULT Instance; // ebx
  __int64 v4; // rdx
  __int64 *v6; // rsi
  LPVOID v7; // rcx
  __int64 v8; // rbx
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **v9; // r15
  LPVOID v10; // rcx
  __int64 v11; // rdi
  LPVOID v12; // rax
  unsigned int updated; // esi
  __int64 v14; // rbx
  LPVOID v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  CSpatialAudioResourceManagerTraceLogger *v25; // rcx
  unsigned int v26; // [rsp+48h] [rbp-19h] BYREF
  struct Windows::Graphics::Holographic::IHolographicDisplay *v27; // [rsp+50h] [rbp-11h] BYREF
  __int128 v28; // [rsp+58h] [rbp-9h]
  __int64 v29; // [rsp+68h] [rbp+7h]
  __int64 v30; // [rsp+70h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+17h] BYREF
  __int64 v32; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v29 = -2LL;
  v2 = this + 7;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               this + 7);
  if ( Instance < 0 )
  {
    v4 = 40LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)*v2 + 48LL))(*v2, this);
  if ( Instance < 0 )
  {
    v4 = 41LL;
    goto LABEL_3;
  }
  v32 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Graphics.Holographic.HolographicDisplay",
    0x30u,
    0x2Fu);
  v6 = (__int64 *)(this + 8);
  v7 = this[8];
  this[8] = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  Instance = RoGetActivationFactory(v32, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, this + 8);
  if ( Instance < 0 )
  {
    v4 = 43LL;
    goto LABEL_3;
  }
  v8 = *v6;
  v9 = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **)(this + 9);
  v10 = this[9];
  this[9] = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
  Instance = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 48LL))(v8, (char *)this + 72);
  if ( Instance < 0 )
  {
    v4 = 44LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v28 = CExclusiveModeListener::OnHmdAdded;
  DWORD2(v28) = 0;
  hstringHeader.Reserved.Reserved1 = this;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v28;
  v11 = 0LL;
  v12 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
    v11 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64___::___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_(
            (__int64)v12,
            (__int64)&hstringHeader);
  v30 = v11;
  if ( v11 )
  {
    *(_QWORD *)&v28 = CExclusiveModeListener::OnHmdRemoved;
    DWORD2(v28) = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v28;
    v14 = 0LL;
    v15 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v15 )
      v14 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64___::___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_(
              (__int64)v15,
              (__int64)&hstringHeader);
    *(_QWORD *)&v28 = v14;
    if ( !v14 )
    {
      updated = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_40;
    }
    v16 = *v6;
    v27 = 0LL;
    if ( (*(int (__fastcall **)(__int64, struct Windows::Graphics::Holographic::IHolographicDisplay **))(*(_QWORD *)v16 + 64LL))(
           v16,
           &v27) >= 0
      && v27
      && (v17 = CExclusiveModeListener::OnHmdAdded((CExclusiveModeListener *)this, *v9, v27), updated = v17, v17 < 0) )
    {
      v18 = (unsigned int)v17;
      v19 = 56LL;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, __int64, char *))(*(_QWORD *)*v9 + 56LL))(
              *v9,
              v11,
              (char *)this + 120);
      updated = v20;
      if ( v20 >= 0 )
      {
        v21 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, __int64, char *))(*(_QWORD *)*v9 + 72LL))(
                *v9,
                v14,
                (char *)this + 128);
        updated = v21;
        if ( v21 >= 0 )
        {
          v22 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)*v9 + 120LL))(*v9);
          updated = v22;
          if ( v22 >= 0 )
          {
            v26 = 0;
            v23 = RtlQueryWnfStateData(
                    &v26,
                    WNF_SHEL_APPLICATION_SPATIAL_INFO_UPDATE,
                    CExclusiveModeListener::SpatialApplicationInfoUpdateCallback,
                    this,
                    0LL);
            updated = v23 | 0x10000000;
            if ( v23 >= 0 )
            {
              v24 = RtlSubscribeWnfStateChangeNotification(
                      this + 44,
                      WNF_SHEL_APPLICATION_SPATIAL_INFO_UPDATE,
                      v26,
                      CExclusiveModeListener::SpatialApplicationInfoUpdateCallback,
                      this,
                      0LL,
                      0,
                      0);
              updated = v24 | 0x10000000;
              if ( v24 >= 0 )
              {
                CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(v25, 1);
                *((_BYTE *)this + 369) = 1;
                updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)this);
                goto LABEL_39;
              }
              v19 = 80LL;
            }
            else
            {
              v19 = 71LL;
            }
            v18 = updated;
          }
          else
          {
            v18 = (unsigned int)v22;
            v19 = 61LL;
          }
        }
        else
        {
          v18 = (unsigned int)v21;
          v19 = 60LL;
        }
      }
      else
      {
        v18 = (unsigned int)v20;
        v19 = 59LL;
      }
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v19,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)v18);
LABEL_39:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
LABEL_40:
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    goto LABEL_42;
  }
  updated = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)0x8007000ELL);
LABEL_42:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return updated;
}
