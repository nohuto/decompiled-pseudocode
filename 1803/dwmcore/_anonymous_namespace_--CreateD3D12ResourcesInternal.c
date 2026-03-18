/*
 * XREFs of _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x1801DF2E0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources_____ptr64_::_Do_call @ 0x1801E15F0 (std--_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceL_ea_1801E15F0.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801B3050 (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall anonymous_namespace_::CreateD3D12ResourcesInternal(IUnknown **a1, __int64 *a2, void **a3)
{
  HRESULT v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  void *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  void *v12; // rcx
  void *v13; // rbx
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  void *ppDevice; // [rsp+38h] [rbp-38h] BYREF
  int v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+44h] [rbp-2Ch]
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  ppDevice = 0LL;
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&ppDevice);
  v6 = D3D12CreateDevice(*a1, D3D_FEATURE_LEVEL_12_0, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &ppDevice);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v18 = 10000LL;
    v19[1] = 0LL;
    v19[0] = 0x271000000002LL;
    v17 = 2;
    v6 = (*(__int64 (__fastcall **)(void *, __int64, int *))(*(_QWORD *)ppDevice + 104LL))(ppDevice, 20LL, &v17);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 4374LL;
      goto LABEL_5;
    }
    if ( !HIDWORD(v18) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 2);
      wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(a3);
      wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(a3 + 1);
LABEL_20:
      v7 = 0;
      goto LABEL_21;
    }
    v15 = 0LL;
    v9 = ppDevice;
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v15);
    v10 = (*(__int64 (__fastcall **)(void *, _QWORD *, GUID *, __int64 *))(*(_QWORD *)v9 + 64LL))(
            v9,
            v19,
            &GUID_0ec870a6_5d7e_4c22_8cfc_5baae07616ed,
            &v15);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)*a2 + 32LL))(*a2, ppDevice, v15);
      v7 = v10;
      if ( v10 >= 0 )
      {
        v12 = ppDevice;
        v13 = *a3;
        *a3 = ppDevice;
        if ( v12 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 8LL))(v12);
        if ( v13 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
        wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)a3 + 1, v15);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v15);
        goto LABEL_20;
      }
      v11 = 4391LL;
    }
    else
    {
      v11 = 4388LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v15);
    goto LABEL_21;
  }
  v8 = 4349LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
    (const char *)(unsigned int)v6);
LABEL_21:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&ppDevice);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)a1);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(a2);
  return v7;
}
