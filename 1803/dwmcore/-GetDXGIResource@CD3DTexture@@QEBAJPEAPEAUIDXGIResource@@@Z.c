/*
 * XREFs of ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x1801E428C
 * Callers:
 *     ?GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18015BDE4 (-GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@.c)
 *     ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x1801E4308 (-IsRenderTarget@CD3DTexture@@AEBA_NXZ.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1801EDFB0 (-Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180215890 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetDXGIResource(CD3DTexture *this, struct IDXGIResource **a2)
{
  unsigned int v4; // ebx
  int v5; // eax

  *a2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 32LL))(this) )
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 15))(
           *((_QWORD *)this + 15),
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           a2);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1BCu);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x1B7u);
  }
  return v4;
}
