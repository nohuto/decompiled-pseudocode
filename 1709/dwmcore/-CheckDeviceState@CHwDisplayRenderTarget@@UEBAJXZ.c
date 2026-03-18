/*
 * XREFs of ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18002C000
 * Callers:
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180018130 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x18001A438 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002E6B0 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180045648 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180081198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801A5DB0 (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1801A83C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CheckDeviceState(CHwDisplayRenderTarget *this)
{
  CHwDisplayRenderTarget *v2; // rcx
  __int64 (*v3)(void); // rax
  char IsValid; // al
  __int64 v5; // rdi
  int v6; // ebx
  CDWMSwapChain *v7; // rcx
  __int64 (__usercall *v8)@<rax>(CDWMSwapChain *__hidden@<rcx>, const struct CRegion *@<rdx>, unsigned int@<r8d>, unsigned int@<r9d>, struct RenderTargetPresentParameters *); // rax
  int v9; // eax
  __int64 v10; // rcx
  int v12; // eax
  bool v13; // cl
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = (CHwDisplayRenderTarget *)((char *)this - 192);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 32LL);
  if ( (char *)v3 == (char *)CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid(v2);
  else
    IsValid = v3();
  if ( IsValid )
  {
    v5 = *((_QWORD *)this + 1);
    v6 = *(_DWORD *)(v5 + 888);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xE83u);
    }
    else
    {
      v7 = (CDWMSwapChain *)*((_QWORD *)this + 5);
      v8 = *(__int64 (__usercall **)@<rax>(CDWMSwapChain *__hidden@<rcx>, const struct CRegion *@<rdx>, unsigned int@<r8d>, unsigned int@<r9d>, struct RenderTargetPresentParameters *))(*(_QWORD *)v7 + 272LL);
      if ( v8 == CDWMSwapChain::PresentInternal )
        v9 = CDWMSwapChain::PresentInternal(v7, 0LL, 0, 1u, 0LL);
      else
        v9 = ((__int64 (__fastcall *)(CDWMSwapChain *, _QWORD, _QWORD, __int64))v8)(v7, 0LL, 0LL, 1LL);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xE85u);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v10, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, (unsigned int)v6);
    if ( ((v6 - 142213121) & 0xFFFFFFF7) != 0 )
    {
      if ( !*(_DWORD *)(v5 + 888) && (v6 == -2005532292 || v6 == -2147024882 || v6 == -2005270523) )
      {
        if ( (unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                             (CD3DDeviceManager *)&g_D3DDeviceManager,
                             *(struct _LUID *)(v5 + 728)) )
        {
          if ( v6 == -2005270523 )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 648) + 312LL))(*(_QWORD *)(v5 + 648));
            *(_DWORD *)(v5 + 888) = -2003304307;
            v13 = v12 == -2005270480;
          }
          else
          {
            v13 = 1;
          }
          if ( v13 )
            CD3DDeviceManager::TempDisableHardwareProtection();
        }
      }
      if ( *(_DWORD *)(v5 + 888) )
      {
        v6 = *(_DWORD *)(v5 + 888);
      }
      else
      {
        if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v6, 1, &v15) )
          v6 = v15;
        if ( v6 == -2003304307 )
          *(_DWORD *)(v5 + 888) = -2003304307;
      }
    }
    if ( *(_DWORD *)(v5 + 888) == -2003304307
      && !*(_BYTE *)(v5 + 1040)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 66) + 112LL))(*((_QWORD *)g_pComposition
                                                                                                  + 66)) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v5 + 480), 1u);
      CD3DDeviceLevel1::ReleaseResourcesForDisplayChange((CD3DDeviceLevel1 *)v5);
      v14 = *(_QWORD *)(v5 + 488);
      *(_BYTE *)(v5 + 1040) = 1;
      if ( v14 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, v5 + 472);
      CD2DContext::DestroyDeviceResources((CD2DContext *)v5);
      CD3DResourceManager::DestroyAllResources((CD3DResourceManager *)(v5 + 896));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 656) + 888LL))(*(_QWORD *)(v5 + 656));
      CMILPoolResource::Release((CMILPoolResource *)(v5 + 472));
    }
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v6, 0x1F9u);
  }
  else
  {
    return (unsigned int)-2003304442;
  }
  return (unsigned int)v6;
}
