/*
 * XREFs of ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x18021D1C4
 * Callers:
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1802189AC (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x180218C10 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@@Z @ 0x18021D52C (-Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C97B8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801FEB48 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x18021DD1C (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Tidy@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@IEAAXXZ @ 0x18021E7C0 (-_Tidy@-$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V-$allocator@UScribbleFrame@C.c)
 */

void __fastcall CComputeScribbleRenderer::CScheduler::~CScheduler(CComputeScribbleRenderer::CScheduler *this, void *a2)
{
  unsigned int v3; // r8d
  const char *v4; // r9
  void *v5; // rdx
  __int64 *v6; // rbx
  __int64 v7; // rcx
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)(*((_QWORD *)this + 6) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::details::SetEvent(*((wil::details **)this + 7), a2);
    if ( WaitForSingleObject(*((HANDLE *)this + 6), 0xFFFFFFFF) == -1 )
      wil::details::in1diag3::Log_GetLastError(retaddr, (void *)0x9B, v3, v4);
  }
  std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::_Tidy((char *)this + 104);
  std::_Deallocate(*((char **)this + 13), 1uLL, 0x10uLL);
  *((_QWORD *)this + 13) = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 11);
  v6 = (__int64 *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v6 + 5);
    v7 = v6[4];
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v6);
    operator delete(v6);
  }
  v8 = (wil::details *)*((_QWORD *)this + 8);
  if ( v8 )
    wil::details::CloseHandle(v8, v5);
  v9 = (wil::details *)*((_QWORD *)this + 7);
  if ( v9 )
    wil::details::CloseHandle(v9, v5);
  v10 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 2);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 1);
}
