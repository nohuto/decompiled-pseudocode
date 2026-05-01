/*
 * XREFs of ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18012D0E0
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x18012D5F0 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18012E4C8 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18012F450 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@@Z @ 0x180142780 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlAllUpViewHost::Show(unsigned __int64 a1, IUnknown *a2, __int64 a3, int a4)
{
  __int64 *v8; // rax
  HRESULT Service; // eax
  int Frames; // ebx
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  int v16; // eax
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  void *v26; // rax
  const char *v27; // r9
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rcx
  int v33[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v34[2]; // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-50h] BYREF
  int v36; // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+48h] [rbp-40h] BYREF
  char v38; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  _DWORD *v40; // [rsp+90h] [rbp+8h]
  unsigned int v41; // [rsp+90h] [rbp+8h]

  v34[1] = -2LL;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64)));
  v34[0] = a1;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v37, v34);
  *(_QWORD *)v33 = 0LL;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)v33);
  Service = IUnknown_QueryService(
              a2,
              (const GUID *const)&SID_IImmersiveMonitorService,
              &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
              (void **)v8);
  Frames = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\Shell\\inc\\multitaskingbaseviewhost.h",
      (const char *)(unsigned int)Service);
    goto LABEL_24;
  }
  v11 = *(_QWORD *)v33;
  v12 = *(_QWORD *)(a1 + 96);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
    v13 = *(_QWORD *)(a1 + 96);
    if ( v13 )
    {
      *(_QWORD *)(a1 + 96) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v14 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( !v14 )
  {
    Frames = -2147024882;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3C,
      (__int64)"internal\\shell\\private\\inc\\eventregistrationhelpers.h",
      (const char *)0x8007000ELL);
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"internal\\Shell\\inc\\multitaskingbaseviewhost.h",
      (const char *)(unsigned int)Frames);
    goto LABEL_24;
  }
  v14[3] = 1;
  *(_QWORD *)v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)v15 + 2) = 0LL;
  v15[6] = 0;
  *((_QWORD *)v15 + 4) = 0LL;
  *(_QWORD *)v15 = off_1802409F8;
  *((_QWORD *)v15 + 2) = *(_QWORD *)(a1 + 88);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
  v40 = v15;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v40 + 48LL))(v40, v11);
  Frames = v16;
  if ( v16 >= 0 )
  {
    v17 = v40;
    if ( *(_DWORD **)(a1 + 96) != v40 )
    {
      if ( v40 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v40 + 8LL))(v40);
        v17 = v40;
      }
      v18 = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 96) = v40;
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v17 = v40;
      }
    }
    if ( v17 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 16LL))(v17);
    Frames = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3D,
      (__int64)"internal\\shell\\private\\inc\\eventregistrationhelpers.h",
      (const char *)(unsigned int)v16);
    if ( v40 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v40 + 16LL))(v40);
  }
  if ( Frames < 0 )
    goto LABEL_23;
LABEL_24:
  v19 = *(_QWORD *)v33;
  if ( *(_QWORD *)v33 )
  {
    *(_QWORD *)v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( Frames < 0 )
  {
    v20 = 304LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)Frames);
    if ( v38 )
    {
      v21 = v37;
      v22 = *(_QWORD *)(v37 + 192);
      if ( v22 )
      {
        *(_QWORD *)(v37 + 192) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(v21);
    }
    if ( v36 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)Frames;
  }
  *(_DWORD *)(a1 + 208) = a4;
  if ( *(IUnknown **)(a1 + 192) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
    v24 = *(_QWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 192) = a2;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( *(_QWORD *)(a1 + 200) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v25 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 200) = a3;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  try
  {
    v26 = Platform::Details::Heap::Allocate(0x68uLL, 0x98uLL);
    v28 = XamlAllUpViewController::XamlAllUpViewController(v26, a1, *(_QWORD *)(a1 + 160), *(_QWORD *)(a1 + 168));
    v29 = v28 + 16;
    if ( !v28 )
      v29 = 0LL;
    if ( v29 != *(_QWORD *)(a1 + 152) )
    {
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      v30 = *(_QWORD *)(a1 + 152);
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      *(_QWORD *)(a1 + 152) = v29;
    }
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  catch ( ... )
  {
    v41 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x13B,
            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
            v27);
    if ( v38 )
    {
      v31 = v37;
      v32 = *(_QWORD *)(v37 + 192);
      if ( v32 )
      {
        *(_QWORD *)(v37 + 192) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(v31);
    }
    if ( v36 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return v41;
  }
  Frames = XamlAllUpViewHost::CreateFrames((XamlAllUpViewHost *)a1);
  if ( Frames < 0 )
  {
    v20 = 317LL;
    goto LABEL_28;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(
    *(_QWORD *)(a1 + 80),
    *(unsigned int *)(a1 + 64));
  *(_BYTE *)(a1 + 104) = 1;
  if ( v36 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
