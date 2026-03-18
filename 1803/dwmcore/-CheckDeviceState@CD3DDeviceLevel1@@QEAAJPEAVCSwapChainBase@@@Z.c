/*
 * XREFs of ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180046AC0 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D020 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x180088F48 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x1800D7708 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800D7EC0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D8378 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801DE8D0 (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckDeviceState(struct _LUID *this, struct CSwapChainBase *a2)
{
  int LowPart; // ebx
  __int64 (__usercall *v4)@<rax>(CDWMSwapChain *__hidden@<rcx>, const struct CRegion *@<rdx>, unsigned int@<r8d>, unsigned int@<r9d>, const struct RenderTargetPresentParameters *); // rax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  bool v9; // zf
  char v10; // cl
  struct _LUID v11; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF

  LowPart = this[111].LowPart;
  if ( LowPart < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LowPart, 0xF1Bu);
  }
  else
  {
    v4 = *(__int64 (__usercall **)@<rax>(CDWMSwapChain *__hidden@<rcx>, const struct CRegion *@<rdx>, unsigned int@<r8d>, unsigned int@<r9d>, const struct RenderTargetPresentParameters *))(*(_QWORD *)a2 + 296LL);
    if ( v4 == CDWMSwapChain::PresentInternal )
      v5 = CDWMSwapChain::PresentInternal(a2, 0LL, 0, 1u, 0LL);
    else
      v5 = ((__int64 (__fastcall *)(struct CSwapChainBase *, _QWORD, _QWORD, __int64))v4)(a2, 0LL, 0LL, 1LL);
    LowPart = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xF1Du);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xq(v6, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, (unsigned int)LowPart);
  if ( ((LowPart - 142213121) & 0xFFFFFFF7) != 0 )
  {
    v7 = this[111].LowPart;
    if ( v7 )
      goto LABEL_20;
    if ( LowPart != -2005532292 && LowPart != -2147024882 && LowPart != -2005270523
      || !CD3DDeviceManager::GetAdapterHwProtectedEntityCount((CD3DDeviceManager *)&g_D3DDeviceManager, this[91]) )
    {
      goto LABEL_37;
    }
    if ( LowPart == -2005270523 )
    {
      v9 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)&this[81] + 312LL))(*(_QWORD *)&this[81]) == -2005270480;
      this[111].LowPart = -2003304307;
      v7 = -2003304307;
      v10 = v9;
    }
    else
    {
      v10 = 1;
      v7 = 0;
    }
    if ( v10 )
    {
      CD3DDeviceManager::TempDisableHardwareProtection();
      v7 = this[111].LowPart;
    }
    if ( v7 )
    {
LABEL_20:
      LowPart = v7;
    }
    else
    {
LABEL_37:
      if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(LowPart, 1, &v12) )
        LowPart = v12;
      if ( LowPart == -2003304307 )
        this[111].LowPart = -2003304307;
    }
  }
  if ( this[111].LowPart == -2003304307
    && !LOBYTE(this[131].LowPart)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 69) + 112LL))(*((_QWORD *)g_pComposition
                                                                                                + 69)) )
  {
    _InterlockedAdd((volatile signed __int32 *)&this[60], 1u);
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange((CD3DDeviceLevel1 *)this);
    v11 = this[61];
    LOBYTE(this[131].LowPart) = 1;
    if ( v11 )
      (*(void (__fastcall **)(struct _LUID, struct _LUID *))(**(_QWORD **)&v11 + 8LL))(v11, this + 59);
    CD2DContext::DestroyDeviceResources((CD2DContext *)this);
    CD3DResourceManager::DestroyAllResources((CD3DResourceManager *)&this[112]);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&this[82] + 888LL))(*(_QWORD *)&this[82]);
    CMILPoolResource::Release((CMILPoolResource *)&this[59]);
  }
  return (unsigned int)LowPart;
}
