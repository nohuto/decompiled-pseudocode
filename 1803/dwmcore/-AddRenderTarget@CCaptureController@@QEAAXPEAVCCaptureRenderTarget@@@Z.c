/*
 * XREFs of ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x180182D58
 * Callers:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18015688C (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801568D4 (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180182BA8 (--$emplace_back@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 */

void __fastcall CCaptureController::AddRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  bool v4; // r8
  int v5; // xmm0_4
  float v6; // xmm1_4
  struct CCaptureRenderTarget *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CCaptureRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
    (__int64 **)this + 7,
    (__int64 *)&v7);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v7);
  CCaptureRenderTarget::SetRootVisual(a2, *((struct CVisual **)this + 10), v4);
  *((_BYTE *)a2 + 424) = *((_BYTE *)this + 88);
  v5 = *((_DWORD *)this + 24);
  *((_DWORD *)a2 + 146) = *((_DWORD *)this + 23);
  *((_DWORD *)a2 + 147) = v5;
  v6 = *((float *)this + 26);
  *((_DWORD *)a2 + 90) = (int)*((float *)this + 25);
  *((_DWORD *)a2 + 91) = (int)v6;
  CCaptureRenderTarget::SetTransform((struct CResource **)a2, *((struct CTransform3D **)this + 14));
}
