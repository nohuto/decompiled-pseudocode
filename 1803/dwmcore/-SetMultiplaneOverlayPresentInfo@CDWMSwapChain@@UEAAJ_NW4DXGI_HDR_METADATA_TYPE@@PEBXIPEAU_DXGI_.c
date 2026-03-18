/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18007CCD0
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@CHwFullScreenRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x18007C670 (-SetMultiplaneOverlayPresentInfo@CHwFullScreenRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEB.c)
 * Callees:
 *     ?SetHDRMetaData@CDWMSwapChain@@UEAAXW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18007CF30 (-SetHDRMetaData@CDWMSwapChain@@UEAAXW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetMultiplaneOverlayPresentInfo(
        CDWMSwapChain *this,
        char a2,
        enum DXGI_HDR_METADATA_TYPE a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  void (__fastcall *v10)(CDWMSwapChain *__hidden, enum DXGI_HDR_METADATA_TYPE, const void *); // rax
  unsigned int i; // edi
  __int64 v12; // rcx
  void *v13; // r8
  void (__fastcall *v14)(CDWMSwapChain *__hidden, enum DXGI_HDR_METADATA_TYPE, const void *); // rax
  SIZE_T v15; // rax
  LPVOID v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v10 = *(void (__fastcall **)(CDWMSwapChain *__hidden, enum DXGI_HDR_METADATA_TYPE, const void *))(*(_QWORD *)this
                                                                                                  + 112LL);
  if ( v10 == CDWMSwapChain::SetHDRMetaData )
    CDWMSwapChain::SetHDRMetaData(this, DXGI_HDR_METADATA_TYPE_NONE, 0LL);
  else
    v10(this, DXGI_HDR_METADATA_TYPE_NONE, 0LL);
  for ( i = 0; i < *((_DWORD *)this + 135); ++i )
  {
    v12 = *(_QWORD *)(136LL * i + *((_QWORD *)this + 68) + 8);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (void *)*((_QWORD *)this + 68);
  if ( v13 )
  {
    HeapFree(WPF::g_processHeap, 0, v13);
    *((_QWORD *)this + 68) = 0LL;
  }
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 135) = 0;
  *((_BYTE *)this + 576) = 0;
  if ( a2 )
  {
    v14 = *(void (__fastcall **)(CDWMSwapChain *__hidden, enum DXGI_HDR_METADATA_TYPE, const void *))(*(_QWORD *)this + 112LL);
    if ( v14 == CDWMSwapChain::SetHDRMetaData )
      CDWMSwapChain::SetHDRMetaData(this, a3, a4);
    else
      v14(this, a3, a4);
    v15 = 136LL * a5;
    if ( !is_mul_ok(a5, 0x88uLL) )
      v15 = -1LL;
    if ( !v15 )
      v15 = 1LL;
    v16 = HeapAlloc(WPF::g_processHeap, 0, v15);
    if ( !v16 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v17 = 0;
    *((_QWORD *)this + 68) = v16;
    for ( *((_DWORD *)this + 135) = a5; v17 < *((_DWORD *)this + 135); ++v17 )
    {
      v18 = 136LL * v17;
      v19 = v18 + *((_QWORD *)this + 68);
      *(_OWORD *)v19 = *(_OWORD *)((char *)a6 + v18);
      *(_OWORD *)(v19 + 16) = *(_OWORD *)((char *)a6 + v18 + 16);
      *(_OWORD *)(v19 + 32) = *(_OWORD *)((char *)a6 + v18 + 32);
      *(_OWORD *)(v19 + 48) = *(_OWORD *)((char *)a6 + v18 + 48);
      *(_OWORD *)(v19 + 64) = *(_OWORD *)((char *)a6 + v18 + 64);
      *(_OWORD *)(v19 + 80) = *(_OWORD *)((char *)a6 + v18 + 80);
      *(_OWORD *)(v19 + 96) = *(_OWORD *)((char *)a6 + v18 + 96);
      *(_OWORD *)(v19 + 112) = *(_OWORD *)((char *)a6 + v18 + 112);
      *(_QWORD *)(v19 + 128) = *(_QWORD *)((char *)a6 + v18 + 128);
      v20 = *(_QWORD *)(v18 + *((_QWORD *)this + 68) + 8);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    }
    if ( *((_DWORD *)this + 145) )
      *((_BYTE *)this + 576) = 1;
  }
  return 0LL;
}
