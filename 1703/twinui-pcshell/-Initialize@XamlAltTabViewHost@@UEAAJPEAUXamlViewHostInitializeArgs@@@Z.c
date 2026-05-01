/*
 * XREFs of ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18013ED30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x180143C88 (--0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImme.c)
 *     ?AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x18015DAB4 (-AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLo.c)
 *     ?ThumbnailInteropDevice_CreateInstance@@YAJPEAPEAUIThumbnailInteropDevice@@@Z @ 0x180166F60 (-ThumbnailInteropDevice_CreateInstance@@YAJPEAPEAUIThumbnailInteropDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlAltTabViewHost::Initialize(XamlAltTabViewHost *this, struct XamlViewHostInitializeArgs *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct IThumbnailInteropDevice **v14; // r14
  __int64 v15; // rcx
  int Instance; // eax
  unsigned int v17; // ebx
  struct IThumbnailInteropDevice *v19; // rbx
  __int64 *v20; // rax
  const struct _GUID *v21; // r9
  int v22; // eax
  void *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  const char *v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v34; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, void **); // [rsp+68h] [rbp+10h] BYREF
  void *v36; // [rsp+70h] [rbp+18h]

  v4 = *(_QWORD *)a2;
  if ( *((_QWORD *)this - 5) != *(_QWORD *)a2 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)a2);
    v5 = *((_QWORD *)this - 5);
    *((_QWORD *)this - 5) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)a2 + 6);
  if ( *((_QWORD *)this - 4) != v6 )
  {
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)a2 + 6));
    v7 = *((_QWORD *)this - 4);
    *((_QWORD *)this - 4) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)a2 + 5);
  if ( *((_QWORD *)this + 6) != v8 )
  {
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)a2 + 5));
    v9 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)a2 + 3);
  if ( *((_QWORD *)this + 4) != v10 )
  {
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + 3));
    v11 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)a2 + 4);
  if ( *((_QWORD *)this + 5) != v12 )
  {
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)a2 + 4));
    v13 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = v12;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = (struct IThumbnailInteropDevice **)((char *)this + 56);
  v15 = *((_QWORD *)this + 7);
  if ( v15 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  Instance = ThumbnailInteropDevice_CreateInstance((struct IThumbnailInteropDevice **)this + 7);
  v17 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4A,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)Instance);
    return v17;
  }
  v35 = 0LL;
  v19 = *v14;
  v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v35);
  v22 = AppViewDataSource_CreateInstance(
          *((struct IApplicationViewCollection **)a2 + 2),
          *((struct IApplicationViewIconLoader **)a2 + 8),
          v19,
          v21,
          (void **)v20);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v22);
    __debugbreak();
  }
  v23 = 0LL;
  v34 = 0LL;
  if ( v35 )
  {
    v24 = (**v35)(v35, &GUID_5cc69cbd_8bcc_4674_a80b_9466992872d0, &v34);
    if ( v24 < 0 )
      __abi_WinRTraiseException(v24);
    v23 = v34;
  }
  v36 = v23;
  if ( v23 != *((void **)this + 2) )
  {
    if ( v23 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
    v25 = *((_QWORD *)this + 2);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    *((_QWORD *)this + 2) = v23;
  }
  if ( v23 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
  try
  {
    v34 = Platform::Details::Heap::Allocate(0x68uLL, 0x98uLL);
    v26 = XamlAltTabViewController::XamlAltTabViewController(
            v34,
            (char *)this - 112,
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 5),
            *((_QWORD *)this - 5));
    v28 = v26;
    v34 = (void *)v26;
    if ( v26 )
      v29 = v26 + 16;
    else
      v29 = 0LL;
    if ( v29 != *((_QWORD *)this + 3) )
    {
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      v30 = *((_QWORD *)this + 3);
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      *((_QWORD *)this + 3) = v29;
    }
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  catch ( ... )
  {
    LODWORD(v34) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x54,
                     (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                     v27);
    v32 = (__int64)v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    return (unsigned int)v34;
  }
  v31 = (__int64)v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return 0LL;
}
