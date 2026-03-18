/*
 * XREFs of ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x180155D54
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180156620 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x180020CF8 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180074C24 (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180155614 (--$emplace_back@AEBV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$c.c)
 *     ??$emplace_back@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180155728 (--$emplace_back@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180156508 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180156C54 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18016FEBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?CreateSupportedFence@CD3DDeviceLevel1@@QEAAJ_KPEAPEAUID3D11Fence@@@Z @ 0x1801DF918 (-CreateSupportedFence@CD3DDeviceLevel1@@QEAAJ_KPEAPEAUID3D11Fence@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::EnsureResources(CCaptureRenderTarget *this, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  struct ID3D11Fence **v3; // r8
  int SupportedFence; // eax
  __int64 i; // rsi
  int v7; // eax
  enum DXGI_FORMAT v8; // ecx
  int updated; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v14; // [rsp+28h] [rbp-59h]
  struct ID3D11Texture2D *v15; // [rsp+38h] [rbp-49h] BYREF
  __int64 v16; // [rsp+40h] [rbp-41h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-39h] BYREF
  void *v18; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-29h] BYREF
  DXGI_FORMAT v20; // [rsp+68h] [rbp-19h]
  struct D3D11_TEXTURE2D_DESC v21; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = 0;
  v3 = (struct ID3D11Fence **)((char *)this + 464);
  if ( *((_QWORD *)this + 58) )
    goto LABEL_4;
  *v3 = 0LL;
  SupportedFence = CD3DDeviceLevel1::CreateSupportedFence(*((CD3DDeviceLevel1 **)this + 50), a2, v3);
  v2 = SupportedFence;
  if ( SupportedFence >= 0 )
  {
    *((_QWORD *)this + 59) = 0LL;
LABEL_4:
    for ( i = (__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) >> 3; ; LODWORD(i) = i + 1 )
    {
      v12 = *((_QWORD *)this + 67);
      if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)this + 68) - v12) >> 3) )
        return v2;
      v15 = 0LL;
      v7 = CD3DDeviceLevel1::OpenSharedTexture(
             *((CD3DDeviceLevel1 **)this + 50),
             &v21,
             (struct D3D11_SUBRESOURCE_DATA *)v3,
             *(void **)(v12 + 8LL * (unsigned int)i),
             1,
             &v15);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x122u);
        goto LABEL_28;
      }
      memset_0(v19, 0, 0x2CuLL);
      ((void (__fastcall *)(struct ID3D11Texture2D *, _BYTE *))v15->lpVtbl->GetDesc)(v15, v19);
      if ( !IsValidPixelFormat(v20) )
      {
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 536);
        CCaptureRenderTarget::ReleaseRenderingResources(this);
        goto LABEL_28;
      }
      if ( ((*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      {
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v8);
        v2 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x133u);
          goto LABEL_28;
        }
      }
      v16 = 0LL;
      wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v16);
      v10 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v15->lpVtbl->QueryInterface)(
              v15,
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v16);
      v2 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x161F,
          (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
          (const char *)(unsigned int)v10);
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x138u);
LABEL_23:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v16);
LABEL_28:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v15);
        return v2;
      }
      std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
        (__int64 **)this + 64,
        &v16);
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct ID3D11Texture2D *))(**((_QWORD **)this + 60) + 40LL))(
              *((_QWORD *)this + 60),
              0LL,
              0LL,
              v15);
      v2 = v11;
      if ( v11 < 0 )
        break;
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Texture2D *, void **))(**((_QWORD **)this + 60) + 56LL))(
              *((_QWORD *)this + 60),
              v15,
              &v18);
      v2 = v11;
      if ( v11 < 0 )
      {
        v14 = 322;
LABEL_22:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v14);
        goto LABEL_23;
      }
      hObject = v18;
      std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::emplace_back<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
        (_QWORD *)this + 70,
        (__int64 *)&hObject);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v16);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v15);
    }
    v14 = 316;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SupportedFence, 0x10Du);
  return v2;
}
