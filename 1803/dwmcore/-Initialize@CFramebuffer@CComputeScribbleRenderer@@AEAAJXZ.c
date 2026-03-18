/*
 * XREFs of ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021C744
 * Callers:
 *     ?Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEAPEAV12@@Z @ 0x18021C264 (-Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEA.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800BC600 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180142BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801DF6A4 (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::Initialize(CComputeScribbleRenderer::CFramebuffer *this)
{
  __int64 v1; // rbx
  int v3; // eax
  int LastError; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  struct ID3D11Fence *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int SharedFence; // eax
  struct ID3D11Fence *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  wil::details *Event; // rbx
  const char *v16; // r9
  bool v17; // sf
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  wil::details *v27; // rbx
  const char *v28; // r9
  bool v29; // sf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v32; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  v32 = 0LL;
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v32);
  v3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 56LL))(
         v1,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v32);
  LastError = v3;
  if ( v3 >= 0 )
  {
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 64);
    v9 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    SharedFence = CD3DDeviceLevel1::CreateSharedFence(
                    *(CD3DDeviceLevel1 **)this,
                    v7,
                    v8,
                    (struct ID3D11Fence **)this + 7,
                    (struct ID3D12Fence **)this + 8);
    LastError = SharedFence;
    if ( SharedFence >= 0 )
    {
      wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 80);
      v13 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v14 = CD3DDeviceLevel1::CreateSharedFence(
              *(CD3DDeviceLevel1 **)this,
              v11,
              v12,
              (struct ID3D11Fence **)this + 9,
              (struct ID3D12Fence **)this + 10);
      LastError = v14;
      if ( v14 >= 0 )
      {
        Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
        if ( Event )
        {
          GetLastError();
          wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
            (wil::details **)this + 11,
            Event);
          LastError = 0;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x1621,
                        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                        v16);
        }
        v17 = LastError < 0;
        if ( LastError > 0 )
        {
          LastError = (unsigned __int16)LastError | 0x80070000;
          v17 = LastError < 0;
        }
        if ( v17 )
        {
          v6 = 52LL;
        }
        else
        {
          v18 = v32;
          v19 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 2) = 0LL;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          v20 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, char *))(*(_QWORD *)v18 + 72LL))(
                  v18,
                  2LL,
                  &GUID_6102dee4_af59_4b09_b999_b44d73f09b24,
                  (char *)this + 16);
          LastError = v20;
          if ( v20 < 0 )
          {
            v5 = (unsigned int)v20;
            v6 = 56LL;
            goto LABEL_38;
          }
          v21 = v32;
          v22 = *((_QWORD *)this + 3);
          *((_QWORD *)this + 3) = 0LL;
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v21 + 96LL))(
                  v21,
                  0LL,
                  2LL,
                  *((_QWORD *)this + 2),
                  0LL,
                  &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,
                  (char *)this + 24);
          LastError = v23;
          if ( v23 < 0 )
          {
            v5 = (unsigned int)v23;
            v6 = 59LL;
            goto LABEL_38;
          }
          v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 72LL))(*((_QWORD *)this + 3));
          LastError = v24;
          if ( v24 < 0 )
          {
            v5 = (unsigned int)v24;
            v6 = 60LL;
            goto LABEL_38;
          }
          v25 = v32;
          wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 32);
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v25 + 288LL))(
                  v25,
                  0LL,
                  1LL,
                  &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
                  (char *)this + 32);
          LastError = v26;
          if ( v26 < 0 )
          {
            v5 = (unsigned int)v26;
            v6 = 66LL;
            goto LABEL_38;
          }
          v27 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
          if ( v27 )
          {
            GetLastError();
            wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
              (wil::details **)this + 5,
              v27);
            LastError = 0;
          }
          else
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x1621,
                          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                          v28);
          }
          v29 = LastError < 0;
          if ( LastError > 0 )
          {
            LastError = (unsigned __int16)LastError | 0x80070000;
            v29 = LastError < 0;
          }
          if ( !v29 )
          {
            LastError = 0;
            goto LABEL_40;
          }
          v6 = 67LL;
        }
        v5 = (unsigned int)LastError;
        goto LABEL_38;
      }
      v5 = (unsigned int)v14;
      v6 = 51LL;
    }
    else
    {
      v5 = (unsigned int)SharedFence;
      v6 = 49LL;
    }
  }
  else
  {
    v5 = (unsigned int)v3;
    v6 = 45LL;
  }
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
    (const char *)v5);
LABEL_40:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v32);
  return (unsigned int)LastError;
}
