/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1800D7CB0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x1801F16E0 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x1801F3CE0 (-ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800D7EC0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1802189AC (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(CHwFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  CComputeScribbleRenderer *v3; // rdi
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  CD3DDeviceLevel1 *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 128LL))(v2) )
  {
    v7 = *(_QWORD *)this;
    v8 = 0LL;
    (*(void (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD, CD3DDeviceLevel1 **))(v7 + 408))(this, 0LL, &v8);
    ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v8);
  }
  v3 = (CComputeScribbleRenderer *)*((_QWORD *)this + 44);
  *((_QWORD *)this + 44) = 0LL;
  if ( v3 )
  {
    CComputeScribbleRenderer::~CComputeScribbleRenderer(v3);
    operator delete(v3, 0x40uLL);
  }
  *((_BYTE *)this + 360) = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  v8 = 0LL;
  v5 = (__int64 *)((char *)this - 216);
  (*(void (__fastcall **)(__int64 *, CD3DDeviceLevel1 **))(*v5 + 256))(v5, &v8);
  ReleaseInterface<CD3DSurface>(v5 + 25);
  v6 = v5[26];
  v5[26] = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v8 )
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(v8);
}
