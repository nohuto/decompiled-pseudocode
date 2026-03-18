/*
 * XREFs of ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x18021EB60
 * Callers:
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x18021E9E4 (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801B3050 (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::Initialize(
        CComputeScribbleStopwatch *this,
        struct ID3D12CommandQueue *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v12; // [rsp+50h] [rbp-39h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-31h] BYREF
  _DWORD v14[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v15[2]; // [rsp+70h] [rbp-19h] BYREF
  int v16; // [rsp+80h] [rbp-9h]
  _DWORD v17[4]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+A4h] [rbp+1Bh]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  int v23; // [rsp+B4h] [rbp+2Bh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v12 = 0LL;
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v12);
  v4 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, GUID *, __int64 *))a2->lpVtbl->GetDevice)(
         a2,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this, (__int64)a2);
    v7 = v12;
    v8 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0LL;
    *(_QWORD *)&v14[1] = 1LL;
    v14[0] = 1;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, GUID *, char *))(*(_QWORD *)v7 + 312LL))(
           v7,
           v14,
           &GUID_0d9658ae_ed45_469e_a61d_970ec583cab4,
           (char *)this + 32);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v15[1] = 0LL;
      v16 = 0;
      v15[0] = 3LL;
      memset_0(v17, 0, 0x38uLL);
      v21 = 0;
      v9 = *((_QWORD *)this + 5);
      *((_QWORD *)this + 5) = 0LL;
      v10 = v12;
      v17[0] = 1;
      v18 = 8LL;
      v19 = 1;
      v20 = 65537;
      v22 = 1;
      v23 = 1;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _DWORD *, int, _QWORD, GUID *, char *))(*(_QWORD *)v10 + 216LL))(
             v10,
             v15,
             0LL,
             v17,
             1024,
             0LL,
             &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
             (char *)this + 40);
      v5 = v4;
      if ( v4 >= 0 )
      {
        QueryPerformanceFrequency(&Frequency);
        v5 = 0;
        *((float *)this + 2) = (float)(int)Frequency.LowPart;
        goto LABEL_13;
      }
      v6 = 46LL;
    }
    else
    {
      v6 = 24LL;
    }
  }
  else
  {
    v6 = 16LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblestopwatch.cpp",
    (const char *)(unsigned int)v4);
LABEL_13:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v12);
  return v5;
}
