/*
 * XREFs of ??1CCaptureController@@EEAA@XZ @ 0x180182CA0
 * Callers:
 *     ??_ECCaptureController@@EEAAPEAXI@Z @ 0x18016E4C0 (--_ECCaptureController@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18015688C (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

void __fastcall CCaptureController::~CCaptureController(CCaptureController *this)
{
  CCaptureRenderTarget **v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 *v5; // rsi

  *(_QWORD *)this = &CCaptureController::`vftable';
  while ( 1 )
  {
    v2 = (CCaptureRenderTarget **)*((_QWORD *)this + 7);
    if ( v2 == *((CCaptureRenderTarget ***)this + 8) )
      break;
    CCaptureRenderTarget::SetController(*v2, 0LL);
  }
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 10);
  v4 = (__int64 *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 8);
    if ( v4 != v5 )
    {
      do
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v4++);
      while ( v4 != v5 );
      v4 = (__int64 *)*((_QWORD *)this + 7);
    }
    std::_Deallocate((char *)v4, (__int64)(*((_QWORD *)this + 9) - (_QWORD)v4) >> 3, 8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  CResource::~CResource(this);
}
