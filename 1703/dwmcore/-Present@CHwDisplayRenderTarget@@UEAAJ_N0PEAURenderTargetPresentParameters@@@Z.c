/*
 * XREFs of ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180070180 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18003A090 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003F614 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18003F7F8 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x1800428D0 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180046638 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18004D1A8 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x180070010 (-ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800AE630 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800CDE60 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Present(
        CHwDisplayRenderTarget *this,
        __int64 a2,
        char a3,
        struct RenderTargetPresentParameters *a4)
{
  char *v4; // rsi
  HRGN v5; // r12
  __int64 v6; // rax
  __int64 (__fastcall *v10)(CHwDisplayRenderTarget *, char, bool *, unsigned int *); // rax
  CHwDisplayRenderTarget *v11; // rcx
  int ShouldPresent; // eax
  int v13; // edi
  HRGN v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  void (__fastcall *v17)(CHwFullScreenRenderTarget *__hidden); // rax
  int v19; // eax
  bool v20; // cl
  char IsHardwareProtectionDisabled; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // edx
  int BackBuffer; // eax
  int v26; // ebx
  bool v27[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-2Ch] BYREF
  int v29; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-20h] BYREF

  v4 = (char *)this - 176;
  v5 = 0LL;
  v6 = *((_QWORD *)this - 22);
  v27[0] = 0;
  v28 = 0;
  v10 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, char, bool *, unsigned int *))(v6 + 232);
  v11 = (CHwDisplayRenderTarget *)((char *)this - 176);
  if ( v10 == CHwDisplayRenderTarget::ShouldPresent )
    ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(v11, a2, v27, &v28);
  else
    ShouldPresent = v10(v11, a2, v27, &v28);
  v13 = ShouldPresent;
  if ( ShouldPresent < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShouldPresent, 0x26Eu);
LABEL_25:
    if ( v27[0] && (v28 & 2) == 0 )
    {
      v17 = *(void (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)v4 + 248LL);
      if ( v17 == CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion )
        CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion((CHwFullScreenRenderTarget *)v4);
      else
        v17((CHwFullScreenRenderTarget *)v4);
    }
    goto LABEL_29;
  }
  if ( a3 )
    v28 |= 0x80u;
  if ( v27[0] )
  {
    v14 = (HRGN)*((_QWORD *)v4 + 39);
    if ( v14 && GetRgnBox(v14, &rc) != 1 )
      v5 = (HRGN)*((_QWORD *)this + 17);
    v15 = *((_QWORD *)v4 + 23);
    v13 = *(_DWORD *)(v15 + 872);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xAE4u);
    }
    else
    {
      v16 = CSwapChainBase::Present(*((CSwapChainBase **)v4 + 27), v5, *((_DWORD *)v4 + 76), v28, a4);
      v13 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xAEBu);
      else
        *(_BYTE *)(v15 + 1125) = 0;
    }
    if ( !*(_DWORD *)(v15 + 872) && (v13 == -2005532292 || v13 == -2147024882 || v13 == -2005270523) )
    {
      if ( CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
             (CD3DDeviceManager *)&g_D3DDeviceManager,
             *(struct _LUID *)(v15 + 712)) )
      {
        if ( v13 == -2005270523 )
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 640) + 312LL))(*(_QWORD *)(v15 + 640));
          *(_DWORD *)(v15 + 872) = -2003304307;
          v20 = v19 == -2005270480;
        }
        else
        {
          v20 = 1;
        }
        if ( v20 )
        {
          CD3DDeviceManager::IsHardwareProtectionDisabled();
          CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
          IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
          if ( (_BYTE)v22 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_q(v22, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 1LL);
        }
      }
    }
    if ( *(_DWORD *)(v15 + 872) )
    {
      v13 = *(_DWORD *)(v15 + 872);
    }
    else
    {
      if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v13, 1LL, &v29) )
        v13 = v29;
      if ( v13 == -2003304307 )
        *(_DWORD *)(v15 + 872) = -2003304307;
    }
    if ( *(_DWORD *)(v15 + 872) == -2003304307
      && !*(_BYTE *)(v15 + 1121)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 70) + 120LL))(*((_QWORD *)g_pComposition
                                                                                                  + 70)) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v15 + 496), 1u);
      CD3DDeviceLevel1::ReleaseResourcesForDisplayChange((CD3DDeviceLevel1 *)v15);
      v23 = *(_QWORD *)(v15 + 504);
      *(_BYTE *)(v15 + 1121) = 1;
      if ( v23 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 8LL))(v23, v15 + 488);
      CD2DContext::DestroyDeviceResources((CD2DContext *)v15);
      CD3DResourceManager::DestroyAllResources((CD3DResourceManager *)(v15 + 928));
      CMILPoolResource::Release((CMILPoolResource *)(v15 + 488));
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x55Du);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x291u);
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 216LL))(*((_QWORD *)this + 5)) )
    {
      ReleaseInterface<CD3DVidMemOnlyTexture>((char *)this - 8);
      BackBuffer = CSwapChainBase::GetBackBuffer(*((CSwapChainBase **)this + 5), v24, (struct CD3DSurface **)this - 1);
      v26 = BackBuffer;
      if ( BackBuffer < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x2A0u);
      if ( !v13 || v26 < 0 )
        v13 = v26;
    }
    goto LABEL_25;
  }
LABEL_29:
  if ( v13 == 142213130 )
  {
    *((_BYTE *)this + 16) = 1;
  }
  else if ( v13 >= 0 )
  {
    *((_BYTE *)this + 16) = 0;
  }
  return (unsigned int)v13;
}
