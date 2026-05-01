/*
 * XREFs of ?Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180140650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x18015DAB4 (-AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLo.c)
 *     ?ThumbnailInteropDevice_CreateInstance@@YAJPEAPEAUIThumbnailInteropDevice@@@Z @ 0x180166F60 (-ThumbnailInteropDevice_CreateInstance@@YAJPEAPEAUIThumbnailInteropDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlSnapAssistViewHost::Initialize(
        XamlSnapAssistViewHost *this,
        struct XamlViewHostInitializeArgs *a2)
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
  struct IThumbnailInteropDevice **v14; // rbx
  __int64 v15; // rcx
  int Instance; // eax
  unsigned int v17; // ebp
  struct IThumbnailInteropDevice *v19; // rbx
  __int64 *v20; // rax
  const struct _GUID *v21; // r9
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+68h] [rbp+10h] BYREF
  __int64 v31; // [rsp+70h] [rbp+18h]

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
  if ( *((_QWORD *)this + 4) != v8 )
  {
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)a2 + 5));
    v9 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)a2 + 7);
  if ( *((_QWORD *)this + 5) != v10 )
  {
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + 7));
    v11 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)a2 + 4);
  if ( *((_QWORD *)this + 6) != v12 )
  {
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)a2 + 4));
    v13 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v12;
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
  if ( Instance >= 0 )
  {
    v29 = 0LL;
    v19 = *v14;
    v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v29);
    v22 = AppViewDataSource_CreateInstance(
            *((struct IApplicationViewCollection **)a2 + 2),
            *((struct IApplicationViewIconLoader **)a2 + 8),
            v19,
            v21,
            (void **)v20);
    v23 = v22;
    if ( v22 >= 0 )
    {
      v24 = 0LL;
      v30 = 0LL;
      if ( v29 )
      {
        v25 = (**v29)(v29, &GUID_5cc69cbd_8bcc_4674_a80b_9466992872d0, &v30);
        if ( v25 < 0 )
          __abi_WinRTraiseException(v25);
        v24 = v30;
      }
      v31 = v24;
      if ( v24 != *((_QWORD *)this + 2) )
      {
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
        v26 = *((_QWORD *)this + 2);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        *((_QWORD *)this + 2) = v24;
      }
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      v23 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x4B,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)v22);
    }
    v27 = (__int64)v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return v23;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x48,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)Instance);
    return v17;
  }
}
