/*
 * XREFs of ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x18004595C
 * Callers:
 *     ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x180045828 (-IsRenderTarget@CD3DTexture@@AEBA_NXZ.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18019EB94 (-Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801B6C90 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetDXGIResource(CD3DTexture *this, struct IDXGIResource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  *a2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 24LL))(this) )
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 16))(
           *((_QWORD *)this + 16),
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           a2);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1D2u);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x1CDu);
  }
  return v5;
}
