/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800D2530
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1800CDFC0 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetMultiplaneOverlayPresentInfo(
        CDWMSwapChain *this,
        char a2,
        enum DXGI_HDR_METADATA_TYPE a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  unsigned int v10; // esi
  LPVOID v11; // rax
  unsigned int i; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx

  v10 = 0;
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  if ( a2 )
  {
    *((_QWORD *)this + 54) = a4;
    *((_DWORD *)this + 107) = a3;
    v11 = operator new(saturated_mul(a5, 0x80uLL));
    *((_QWORD *)this + 56) = v11;
    if ( v11 )
    {
      *((_DWORD *)this + 110) = a5;
      for ( i = 0; i < *((_DWORD *)this + 110); ++i )
      {
        v14 = *((_QWORD *)this + 56);
        v15 = (unsigned __int64)i << 7;
        *(_OWORD *)(v14 + v15) = *(_OWORD *)((char *)a6 + v15);
        *(_OWORD *)(v14 + v15 + 16) = *(_OWORD *)((char *)a6 + v15 + 16);
        *(_OWORD *)(v14 + v15 + 32) = *(_OWORD *)((char *)a6 + v15 + 32);
        *(_OWORD *)(v14 + v15 + 48) = *(_OWORD *)((char *)a6 + v15 + 48);
        *(_OWORD *)(v14 + v15 + 64) = *(_OWORD *)((char *)a6 + v15 + 64);
        *(_OWORD *)(v14 + v15 + 80) = *(_OWORD *)((char *)a6 + v15 + 80);
        *(_OWORD *)(v14 + v15 + 96) = *(_OWORD *)((char *)a6 + v15 + 96);
        *(_OWORD *)(v14 + v15 + 112) = *(_OWORD *)((char *)a6 + v15 + 112);
        v16 = *(_QWORD *)(*((_QWORD *)this + 56) + v15 + 8);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
      *((_BYTE *)this + 462) = 1;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x53Cu);
    }
  }
  return v10;
}
