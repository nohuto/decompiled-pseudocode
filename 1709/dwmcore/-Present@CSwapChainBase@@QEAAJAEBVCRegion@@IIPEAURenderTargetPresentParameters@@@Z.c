/*
 * XREFs of ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002F980
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?SupportsMoveOptimization@CDWMSwapChain@@UEBA_NXZ @ 0x18002E520 (-SupportsMoveOptimization@CDWMSwapChain@@UEBA_NXZ.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002E6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893D0 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180089710 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xx @ 0x180126DF8 (McTemplateU0xx.c)
 *     ?PostRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9094 (-PostRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ.c)
 *     ?PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9230 (-PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ.c)
 *     ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1801B331C (-TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ.c)
 */

__int64 __fastcall CSwapChainBase::Present(
        CSwapChainBase *this,
        const struct CRegion *a2,
        unsigned int a3,
        unsigned int a4,
        struct RenderTargetPresentParameters *a5)
{
  CD3DPhysicalSwapChainBuffer *v9; // rcx
  bool (__fastcall *v10)(CDWMSwapChain *); // rax
  bool v11; // al
  __int64 (__fastcall *v12)(CDWMSwapChain *, FastRegion::Internal::CRgnData **, unsigned int, unsigned int, struct RenderTargetPresentParameters *); // rax
  unsigned int v13; // eax
  unsigned int v14; // edi
  bool (__fastcall *v15)(CDWMSwapChain *); // rax
  bool v16; // al
  CD3DPhysicalSwapChainBuffer *v17; // rcx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 51)
    && (*(int (__fastcall **)(CSwapChainBase *, unsigned int *))(*(_QWORD *)this + 296LL))(this, &v21) >= 0 )
  {
    v9 = *(CD3DPhysicalSwapChainBuffer **)(*((_QWORD *)this + 51) + 8LL * (v21 % *((_DWORD *)this + 40)));
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 && (v19 = CD3DPhysicalSwapChainBuffer::PostRender(v9), v14 = v19, v19 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x8Cu);
  }
  else
  {
    v10 = *(bool (__fastcall **)(CDWMSwapChain *))(*(_QWORD *)this + 72LL);
    if ( v10 == CDWMSwapChain::SupportsMoveOptimization )
      v11 = CDWMSwapChain::SupportsMoveOptimization(this);
    else
      v11 = v10(this);
    if ( v11 )
    {
      FastRegion::CRegion::Copy((CSwapChainBase *)((char *)this + 272), a2);
      if ( CSwapChainBase::TryToOrderMetaData(this) )
        FastRegion::CRegion::Subtract((CSwapChainBase *)((char *)this + 200), a2);
    }
    v12 = *(__int64 (__fastcall **)(CDWMSwapChain *, FastRegion::Internal::CRgnData **, unsigned int, unsigned int, struct RenderTargetPresentParameters *))(*(_QWORD *)this + 272LL);
    if ( v12 == CDWMSwapChain::PresentInternal )
      v13 = CDWMSwapChain::PresentInternal(this, (FastRegion::Internal::CRgnData **)a2, a3, a4, a5);
    else
      v13 = v12(this, (FastRegion::Internal::CRgnData **)a2, a3, a4, a5);
    v14 = v13;
    **((_DWORD **)this + 25) = 0;
    **((_DWORD **)this + 34) = 0;
    *((_DWORD *)this + 92) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 344, 48LL);
    v15 = *(bool (__fastcall **)(CDWMSwapChain *))(*(_QWORD *)this + 72LL);
    if ( v15 == CDWMSwapChain::SupportsMoveOptimization )
      v16 = CDWMSwapChain::SupportsMoveOptimization(this);
    else
      v16 = v15(this);
    if ( v16 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xx(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_REMOTEAPP_METADATA_STATS,
        (char *)this + 344,
        *((unsigned int *)this + 92));
    if ( *((_QWORD *)this + 51)
      && (*(int (__fastcall **)(CSwapChainBase *, unsigned int *))(*(_QWORD *)this + 296LL))(this, &v21) >= 0 )
    {
      v17 = *(CD3DPhysicalSwapChainBuffer **)(*((_QWORD *)this + 51) + 8LL * (v21 % *((_DWORD *)this + 40)));
    }
    else
    {
      v17 = 0LL;
    }
    if ( v17 )
    {
      v20 = CD3DPhysicalSwapChainBuffer::PreRender(v17);
      v14 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xB6u);
    }
  }
  return v14;
}
