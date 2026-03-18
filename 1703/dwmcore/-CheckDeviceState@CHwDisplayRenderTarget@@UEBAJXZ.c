/*
 * XREFs of ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18003A580
 * Callers:
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18006CA20 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180039C30 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003E0C0 (-PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x1800428D0 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180046638 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18004D1A8 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800AE630 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800CDE60 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CheckDeviceState(CHwDisplayRenderTarget *this)
{
  CHwDisplayRenderTarget *v2; // rcx
  __int64 (*v3)(void); // rax
  char IsValid; // al
  CDWMSwapChain *v5; // rcx
  __int64 v6; // rdi
  int v7; // ebx
  __int64 (__fastcall *v8)(CDWMSwapChain *__hidden, HRGN, unsigned int, unsigned int, struct RenderTargetPresentParameters *); // rax
  int v9; // eax
  __int64 v10; // rcx
  int v12; // eax
  bool v13; // cl
  char IsHardwareProtectionDisabled; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CHwDisplayRenderTarget *)((char *)this - 176);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 48LL);
  if ( (char *)v3 == (char *)CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid(v2);
  else
    IsValid = v3();
  if ( IsValid )
  {
    v5 = (CDWMSwapChain *)*((_QWORD *)this + 5);
    v6 = *((_QWORD *)this + 1);
    v7 = *(_DWORD *)(v6 + 872);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xDE5u);
    }
    else
    {
      v8 = *(__int64 (__fastcall **)(CDWMSwapChain *__hidden, HRGN, unsigned int, unsigned int, struct RenderTargetPresentParameters *))(*(_QWORD *)v5 + 264LL);
      if ( v8 == CDWMSwapChain::PresentInternal )
        v9 = CDWMSwapChain::PresentInternal(v5, 0LL, 0, 1u, 0LL);
      else
        v9 = ((__int64 (__fastcall *)(CDWMSwapChain *, _QWORD, _QWORD, __int64))v8)(v5, 0LL, 0LL, 1LL);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xDE7u);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xd(v10, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, (unsigned int)v7);
    if ( ((v7 - 142213121) & 0xFFFFFFF7) != 0 )
    {
      if ( !*(_DWORD *)(v6 + 872) && (v7 == -2005532292 || v7 == -2147024882 || v7 == -2005270523) )
      {
        if ( CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
               (CD3DDeviceManager *)&g_D3DDeviceManager,
               *(struct _LUID *)(v6 + 712)) )
        {
          if ( v7 == -2005270523 )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 640) + 312LL))(*(_QWORD *)(v6 + 640));
            *(_DWORD *)(v6 + 872) = -2003304307;
            v13 = v12 == -2005270480;
          }
          else
          {
            v13 = 1;
          }
          if ( v13 )
          {
            CD3DDeviceManager::IsHardwareProtectionDisabled();
            CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
            IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
            if ( (_BYTE)v15 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              Template_q(v15, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 1LL);
          }
        }
      }
      if ( *(_DWORD *)(v6 + 872) )
      {
        v7 = *(_DWORD *)(v6 + 872);
      }
      else
      {
        if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v7, 1LL, &v17) )
          v7 = v17;
        if ( v7 == -2003304307 )
          *(_DWORD *)(v6 + 872) = -2003304307;
      }
    }
    if ( *(_DWORD *)(v6 + 872) == -2003304307
      && !*(_BYTE *)(v6 + 1121)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 70) + 120LL))(*((_QWORD *)g_pComposition
                                                                                                  + 70)) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 496), 1u);
      CD3DDeviceLevel1::ReleaseResourcesForDisplayChange((CD3DDeviceLevel1 *)v6);
      v16 = *(_QWORD *)(v6 + 504);
      *(_BYTE *)(v6 + 1121) = 1;
      if ( v16 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 8LL))(v16, v6 + 488);
      CD2DContext::DestroyDeviceResources((CD2DContext *)v6);
      CD3DResourceManager::DestroyAllResources((CD3DResourceManager *)(v6 + 928));
      CMILPoolResource::Release((CMILPoolResource *)(v6 + 488));
    }
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v7, 0x2D4u);
  }
  else
  {
    return (unsigned int)-2003304442;
  }
  return (unsigned int)v7;
}
