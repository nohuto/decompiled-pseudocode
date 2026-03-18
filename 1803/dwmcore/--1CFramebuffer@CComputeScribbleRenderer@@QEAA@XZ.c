/*
 * XREFs of ??1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ @ 0x180218A48
 * Callers:
 *     ??1?$unique_ptr@VCFramebuffer@CComputeScribbleRenderer@@U?$default_delete@VCFramebuffer@CComputeScribbleRenderer@@@std@@@std@@QEAA@XZ @ 0x180218980 (--1-$unique_ptr@VCFramebuffer@CComputeScribbleRenderer@@U-$default_delete@VCFramebuffer@CCompute.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x180218C10 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEAPEAV12@@Z @ 0x18021C264 (-Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEA.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C97B8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComputeScribbleRenderer::CFramebuffer::~CFramebuffer(CComputeScribbleRenderer::CFramebuffer *this)
{
  void *v2; // rdx
  char *v3; // rdi
  char *v4; // rsi
  wil::details *v5; // rcx
  __int64 v6; // rcx
  void *v7; // rdx
  __int64 v8; // rcx
  wil::details *v9; // rcx

  FastRegion::CRegion::FreeMemory((void **)this + 16);
  v3 = (char *)*((_QWORD *)this + 13);
  if ( v3 )
  {
    v4 = (char *)*((_QWORD *)this + 14);
    if ( v3 != v4 )
    {
      do
      {
        if ( *(_QWORD *)v3 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
        v3 += 8;
      }
      while ( v3 != v4 );
      v3 = (char *)*((_QWORD *)this + 13);
    }
    std::_Deallocate(v3, (__int64)(*((_QWORD *)this + 15) - (_QWORD)v3) >> 3, 8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  v5 = (wil::details *)*((_QWORD *)this + 11);
  if ( v5 )
    wil::details::CloseHandle(v5, v2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 10);
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 8);
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (wil::details *)*((_QWORD *)this + 5);
  if ( v9 )
    wil::details::CloseHandle(v9, v7);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 1);
  if ( *(_QWORD *)this )
    CMILPoolResource::Release((CMILPoolResource *)(*(_QWORD *)this + 472LL));
}
