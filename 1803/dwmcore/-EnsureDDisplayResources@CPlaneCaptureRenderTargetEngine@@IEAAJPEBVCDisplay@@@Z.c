/*
 * XREFs of ?EnsureDDisplayResources@CPlaneCaptureRenderTargetEngine@@IEAAJPEBVCDisplay@@@Z @ 0x18015BBE8
 * Callers:
 *     ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015B6E8 (-CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureDDisplayResources@CDisplay@@QEBAJXZ @ 0x1801C7F50 (-EnsureDDisplayResources@CDisplay@@QEBAJXZ.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::EnsureDDisplayResources(
        CPlaneCaptureRenderTargetEngine *this,
        const struct CDisplay *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 60) )
  {
    v4 = CDisplay::EnsureDDisplayResources(a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x137,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\planecapturerendertarget.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    v7 = *((_QWORD *)a2 + 7);
    v8 = *((_QWORD *)this + 59);
    if ( v8 != v7 )
    {
      if ( v7 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)a2 + 7));
        v8 = *((_QWORD *)this + 59);
      }
      *((_QWORD *)this + 59) = v7;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *((_QWORD *)a2 + 6);
    v10 = *((_QWORD *)this + 60);
    if ( v10 != v9 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)a2 + 6));
        v10 = *((_QWORD *)this + 60);
      }
      *((_QWORD *)this + 60) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return 0LL;
}
