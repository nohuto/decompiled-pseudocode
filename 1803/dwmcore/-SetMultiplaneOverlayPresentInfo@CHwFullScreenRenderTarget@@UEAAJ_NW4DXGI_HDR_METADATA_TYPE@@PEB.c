/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CHwFullScreenRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x18007C670
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18007CCD0 (-SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetMultiplaneOverlayPresentInfo(
        CHwFullScreenRenderTarget *this,
        bool a2,
        enum DXGI_HDR_METADATA_TYPE a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  CHwDisplayRenderTarget *v8; // rcx
  unsigned int v9; // ebx
  __int64 (*v12)(void); // rax
  char IsValid; // al
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 (__usercall *v16)@<rax>(CDWMSwapChain *__hidden@<rcx>, bool@<dl>, enum DXGI_HDR_METADATA_TYPE@<r8d>, const void *@<r9>, unsigned int, struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *); // rax
  int v17; // eax

  v8 = (CHwFullScreenRenderTarget *)((char *)this - 216);
  v9 = 0;
  v12 = *(__int64 (**)(void))(*(_QWORD *)v8 + 32LL);
  if ( (char *)v12 == (char *)CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid(v8);
  else
    IsValid = v12();
  if ( IsValid )
  {
    v15 = *((_QWORD *)this + 4);
    LOBYTE(v14) = a2;
    v16 = *(__int64 (__usercall **)@<rax>(CDWMSwapChain *__hidden@<rcx>, bool@<dl>, enum DXGI_HDR_METADATA_TYPE@<r8d>, const void *@<r9>, unsigned int, struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *))(*(_QWORD *)v15 + 208LL);
    if ( v16 == CDWMSwapChain::SetMultiplaneOverlayPresentInfo )
      v17 = CDWMSwapChain::SetMultiplaneOverlayPresentInfo(*((CDWMSwapChain **)this + 4), a2, a3, a4, a5, a6);
    else
      v17 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, const void *, unsigned int, struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *))v16)(
              v15,
              v14,
              (unsigned int)a3,
              a4,
              a5,
              a6);
    v9 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1C7u);
  }
  return v9;
}
