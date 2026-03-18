/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801B09D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1801B0760 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetMultiplaneOverlayPresentInfo(
        CDWMSwapChain *this,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  unsigned int v10; // edi
  LPVOID v11; // rax
  unsigned int i; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx

  v10 = 0;
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  if ( a2 )
  {
    (*(void (__fastcall **)(CDWMSwapChain *, _QWORD, const void *))(*(_QWORD *)this + 104LL))(this, a3, a4);
    v11 = operator new(saturated_mul(a5, 0x88uLL));
    *((_QWORD *)this + 67) = v11;
    if ( v11 )
    {
      *((_DWORD *)this + 133) = a5;
      for ( i = 0; i < *((_DWORD *)this + 133); ++i )
      {
        v13 = 136LL * i;
        v14 = v13 + *((_QWORD *)this + 67);
        *(_OWORD *)v14 = *(_OWORD *)((char *)a6 + v13);
        *(_OWORD *)(v14 + 16) = *(_OWORD *)((char *)a6 + v13 + 16);
        *(_OWORD *)(v14 + 32) = *(_OWORD *)((char *)a6 + v13 + 32);
        *(_OWORD *)(v14 + 48) = *(_OWORD *)((char *)a6 + v13 + 48);
        *(_OWORD *)(v14 + 64) = *(_OWORD *)((char *)a6 + v13 + 64);
        *(_OWORD *)(v14 + 80) = *(_OWORD *)((char *)a6 + v13 + 80);
        *(_OWORD *)(v14 + 96) = *(_OWORD *)((char *)a6 + v13 + 96);
        *(_OWORD *)(v14 + 112) = *(_OWORD *)((char *)a6 + v13 + 112);
        *(_QWORD *)(v14 + 128) = *(_QWORD *)((char *)a6 + v13 + 128);
        v15 = *(_QWORD *)(*((_QWORD *)this + 67) + v13 + 8);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
      *((_BYTE *)this + 584) = 1;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x463u);
    }
  }
  return v10;
}
