/*
 * XREFs of ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7eae7a1c8177dd920e080cdaffe7035f___ @ 0x18014C764 (Windows--Internal--ComTaskPool--QueueTask__lambda_7eae7a1c8177dd920e080cdaffe7035f___.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18014DF8C (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18014EB84 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall FullScreenPositioner::UnsubscribeFromServices(
        FullScreenPositioner *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IApplicationView *v8; // rdx
  int v9; // eax
  struct IApplicationView **v10; // r14
  FullScreenPositionerHelpers *v11; // rcx
  __int64 *v12; // rbx
  CWinRTApplicationView *v13; // rbx
  __int64 v14; // rcx
  struct IServiceProvider *v15; // [rsp+38h] [rbp-18h] BYREF
  CWinRTApplicationView *v16[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  CWinRTApplicationView *v18; // [rsp+80h] [rbp+30h] BYREF
  struct IServiceProvider *v19; // [rsp+90h] [rbp+40h] BYREF

  if ( *((_DWORD *)this + 46) )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, CWinRTApplicationView **))a2->lpVtbl->QueryService)(
           a2,
           &IID_IActiveZBandNotificationForMonitorService,
           &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
           &v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 182LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v4);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      return v5;
    }
    v4 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, _QWORD))(*(_QWORD *)v18 + 32LL))(
           v18,
           *((unsigned int *)this + 46));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 183LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 46) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  if ( *((_DWORD *)this + 47) )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, CWinRTApplicationView **))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 190LL;
      goto LABEL_6;
    }
    v4 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, _QWORD))(*(_QWORD *)v18 + 32LL))(
           v18,
           *((unsigned int *)this + 47));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 191LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 47) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  v8 = (struct IApplicationView *)*((unsigned int *)this + 48);
  if ( (_DWORD)v8 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 96LL))(*((_QWORD *)this + 17));
    *((_DWORD *)this + 48) = 0;
  }
  if ( *((_DWORD *)this + 49) )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, CWinRTApplicationView **))a2->lpVtbl->QueryService)(
           a2,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &v18);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      return v5;
    }
    (*(void (__fastcall **)(CWinRTApplicationView *, _QWORD))(*(_QWORD *)v18 + 80LL))(v18, *((unsigned int *)this + 49));
    *((_DWORD *)this + 49) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  v10 = (struct IApplicationView **)((char *)this + 160);
  v11 = (FullScreenPositionerHelpers *)*((_QWORD *)this + 20);
  v12 = (__int64 *)((char *)this + 136);
  if ( v11 )
  {
    if ( !FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(v11, v8) )
    {
      FullScreenPositioner::SetPositionerMonitor(*v10, 0LL);
      v19 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v19);
      v18 = *v10;
      v13 = v18;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v18);
      v15 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
      v16[0] = v13;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)v16);
      Windows::Internal::ComTaskPool::QueueTask__lambda_7eae7a1c8177dd920e080cdaffe7035f___(v14, &v15);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      v12 = (__int64 *)((char *)this + 136);
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)this + 20);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  return 0LL;
}
