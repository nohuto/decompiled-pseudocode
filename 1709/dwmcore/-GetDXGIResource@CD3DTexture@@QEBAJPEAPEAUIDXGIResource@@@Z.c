/*
 * XREFs of ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x180081D04
 * Callers:
 *     ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x180081F8C (-IsRenderTarget@CD3DTexture@@AEBA_NXZ.c)
 *     ?GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x180139A18 (-GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1801B42D4 (-Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801D3940 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetDXGIResource(CD3DTexture *this, struct IDXGIResource **a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx

  *a2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 32LL))(this) )
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 15))(
           *((_QWORD *)this + 15),
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           a2);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x1BCu);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x1B7u);
  }
  return v5;
}
