/*
 * XREFs of ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@DirectDisplay@Graphics@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x18021D5C4
 * Callers:
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E3E4 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180156CCC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0xcqf @ 0x18021E8B8 (McTemplateU0xcqf.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::CreateWakeupFence(
        CComputeScribbleRenderer::CScheduler *this,
        const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *a2,
        struct Windows::Graphics::DirectDisplay::IDisplayFence **a3,
        struct ID3D12Fence **a4)
{
  __int64 v4; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  int v21; // r9d
  struct Windows::Graphics::DirectDisplay::IDisplayFence *v22; // rax
  struct ID3D12Fence *v23; // rax
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct Windows::Graphics::DirectDisplay::IDisplayFence *v29; // [rsp+90h] [rbp+30h] BYREF
  struct ID3D12Fence *v30; // [rsp+98h] [rbp+38h] BYREF

  v4 = *((_QWORD *)this + 2);
  v29 = 0LL;
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v29);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct Windows::Graphics::DirectDisplay::IDisplayFence **))(*(_QWORD *)v4 + 80LL))(
         v4,
         *((_QWORD *)this + 3),
         (unsigned int)(int)(float)(*((float *)a2 + 5) * 10000000.0),
         &v29);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 343LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)v11);
    goto LABEL_22;
  }
  if ( !v29 )
  {
    v10 = -2147024882;
    v12 = 346LL;
    v11 = 2147942414LL;
    goto LABEL_5;
  }
  v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  v27[0] = 0LL;
  v14 = (**v13)(v13, &GUID_64338358_366a_471b_bd56_dd8ef48e439b, v27);
  v10 = v14;
  if ( v14 >= 0 )
  {
    hObject = 0LL;
    v15 = v27[0];
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v16 = (*(__int64 (__fastcall **)(__int64, struct Windows::Graphics::DirectDisplay::IDisplayFence *, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v15 + 48LL))(
            v15,
            v29,
            0LL,
            0x10000000LL,
            0LL,
            &hObject);
    v10 = v16;
    if ( v16 >= 0 )
    {
      v25 = 0LL;
      v17 = *((_QWORD *)this + 1);
      wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v25);
      v18 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v17 + 56LL))(
              v17,
              &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
              &v25);
      v10 = v18;
      if ( v18 >= 0 )
      {
        v30 = 0LL;
        v19 = v25;
        wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v30);
        v20 = (*(__int64 (__fastcall **)(__int64, HANDLE, GUID *, struct ID3D12Fence **))(*(_QWORD *)v19 + 256LL))(
                v19,
                hObject,
                &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
                &v30);
        v10 = v20;
        if ( v20 >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            LOBYTE(v21) = *(_BYTE *)(*(_QWORD *)a2 + 209LL);
            McTemplateU0xcqf(
              *(_QWORD *)a2,
              (unsigned int)&EVTDESC_COMPUTESCRIBBLE_WAKEUPEVENTCREATED,
              *((_QWORD *)a2 + 1),
              v21,
              *((_DWORD *)a2 + 4),
              *((_DWORD *)a2 + 5));
          }
          v22 = v29;
          v29 = 0LL;
          *a3 = v22;
          v23 = v30;
          v30 = 0LL;
          v10 = 0;
          *a4 = v23;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x169,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
            (const char *)(unsigned int)v20);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v30);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x166,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
          (const char *)(unsigned int)v18);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x163,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v16);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v14);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)v10);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v27);
LABEL_22:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v29);
  return v10;
}
