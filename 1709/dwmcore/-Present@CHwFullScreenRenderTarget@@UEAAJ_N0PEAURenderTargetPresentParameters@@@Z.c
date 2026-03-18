/*
 * XREFs of ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800185B0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1801B9960 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x18001A438 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18002B960 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18002F090 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18002F520 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002F980 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180045648 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180081198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800BC208 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1801A83C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Present(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        char a3,
        struct RenderTargetPresentParameters *a4)
{
  char *v4; // rsi
  char v7; // bl
  int v8; // r14d
  __int64 (__fastcall *v9)(CHwDisplayRenderTarget *, char, bool *, unsigned int *); // rax
  CHwDisplayRenderTarget *v10; // rcx
  int ShouldPresent; // eax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(CHwFullScreenRenderTarget *__hidden); // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(CHwDisplayRenderTarget *, char, bool *, unsigned int *); // rax
  int v17; // eax
  int v18; // ebx
  unsigned int v19; // r15d
  __int64 v20; // rdi
  unsigned int v21; // r13d
  int v22; // eax
  void (__fastcall *v23)(CHwFullScreenRenderTarget *__hidden); // rax
  int v25; // eax
  bool v26; // cl
  bool v27; // r8
  char IsHardwareProtectionDisabled; // al
  __int64 v29; // r8
  char v30; // cl
  __int64 v31; // rcx
  unsigned int v32; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-1Ch] BYREF
  CSwapChainBase *v34; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v35[2]; // [rsp+40h] [rbp-10h] BYREF
  bool v36; // [rsp+90h] [rbp+40h] BYREF
  bool v37; // [rsp+98h] [rbp+48h] BYREF
  struct RenderTargetPresentParameters *v38; // [rsp+A8h] [rbp+58h]

  v38 = a4;
  v4 = (char *)this - 192;
  v7 = a2;
  v8 = 0;
  v9 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, char, bool *, unsigned int *))(*((_QWORD *)this - 24) + 240LL);
  v10 = (CHwFullScreenRenderTarget *)((char *)this - 192);
  if ( v9 == CHwDisplayRenderTarget::ShouldPresent )
    ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(v10, a2, &v36, &v33);
  else
    ShouldPresent = v9(v10, a2, &v36, &v33);
  if ( ShouldPresent >= 0 && v36 && (v33 & 2) == 0 )
  {
    v13 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)this + 208LL);
    v14 = v13 == CHwFullScreenRenderTarget::CopyFrontToBackBuffer
        ? CHwFullScreenRenderTarget::CopyFrontToBackBuffer(this)
        : v13(this);
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x7Bu);
  }
  v15 = *(_QWORD *)v4;
  v37 = 0;
  v32 = 0;
  LOBYTE(v12) = v7;
  v16 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, char, bool *, unsigned int *))(v15 + 240);
  if ( v16 == CHwDisplayRenderTarget::ShouldPresent )
    v17 = CHwDisplayRenderTarget::ShouldPresent((CHwDisplayRenderTarget *)v4, v7, &v37, &v32);
  else
    v17 = v16((CHwDisplayRenderTarget *)v4, v12, &v37, &v32);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1B4u);
LABEL_32:
    if ( v37 && (v32 & 2) == 0 )
    {
      v23 = *(void (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)v4 + 264LL);
      if ( v23 == CHwFullScreenRenderTarget::RotateFrameInvalidRegions )
        CHwFullScreenRenderTarget::RotateFrameInvalidRegions((CHwFullScreenRenderTarget *)v4);
      else
        v23((CHwFullScreenRenderTarget *)v4);
    }
    goto LABEL_36;
  }
  v19 = v32;
  if ( a3 )
  {
    v19 = v32 | 0x80;
    v32 |= 0x80u;
  }
  if ( v37 )
  {
    v20 = *((_QWORD *)v4 + 25);
    v21 = *((_DWORD *)v4 + 80);
    v34 = (CSwapChainBase *)*((_QWORD *)v4 + 29);
    v18 = *(_DWORD *)(v20 + 888);
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xBC5u);
    }
    else
    {
      if ( g_fForceDeviceLost && rand() >= 32390 )
      {
        v35[0] = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v35);
        (***(void (__fastcall ****)(_QWORD, GUID *, _QWORD *))(v20 + 608))(
          *(_QWORD *)(v20 + 608),
          &GUID_b898d4fd_b5b3_4ffc_8694_0259864ffcf8,
          v35);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v35[0] + 264LL))(v35[0], 2289696800LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v35);
      }
      v22 = CSwapChainBase::Present(v34, (CHwFullScreenRenderTarget *)((char *)this + 136), v21, v19, v38);
      v18 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xBD3u);
      else
        *(_BYTE *)(v20 + 1044) = 0;
    }
    if ( !*(_DWORD *)(v20 + 888) && (v18 == -2005532292 || v18 == -2147024882 || v18 == -2005270523) )
    {
      if ( (unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                           (CD3DDeviceManager *)&g_D3DDeviceManager,
                           *(struct _LUID *)(v20 + 728)) )
      {
        if ( v18 == -2005270523 )
        {
          v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 648) + 312LL))(*(_QWORD *)(v20 + 648));
          *(_DWORD *)(v20 + 888) = -2003304307;
          v26 = v25 == -2005270480;
        }
        else
        {
          v26 = 1;
        }
        if ( v26 )
        {
          CD3DDeviceManager::IsHardwareProtectionDisabled();
          CD3DDeviceManager::s_bHwProtectionTempDisabled = v27;
          IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
          if ( v30 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v29);
        }
      }
    }
    if ( *(_DWORD *)(v20 + 888) )
    {
      v18 = *(_DWORD *)(v20 + 888);
    }
    else
    {
      if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v18, 1, &v34) )
        v18 = (int)v34;
      if ( v18 == -2003304307 )
        *(_DWORD *)(v20 + 888) = -2003304307;
    }
    if ( *(_DWORD *)(v20 + 888) == -2003304307
      && !*(_BYTE *)(v20 + 1040)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 66) + 112LL))(*((_QWORD *)g_pComposition
                                                                                                  + 66)) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v20 + 480), 1u);
      CD3DDeviceLevel1::ReleaseResourcesForDisplayChange((CD3DDeviceLevel1 *)v20);
      v31 = *(_QWORD *)(v20 + 488);
      *(_BYTE *)(v20 + 1040) = 1;
      if ( v31 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 8LL))(v31, v20 + 472);
      CD2DContext::DestroyDeviceResources((CD2DContext *)v20);
      CD3DResourceManager::DestroyAllResources((CD3DResourceManager *)(v20 + 896));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 656) + 888LL))(*(_QWORD *)(v20 + 656));
      CMILPoolResource::Release((CMILPoolResource *)(v20 + 472));
    }
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3A2u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1CDu);
    }
    goto LABEL_32;
  }
LABEL_36:
  if ( v18 == 142213130 )
  {
    *((_BYTE *)this + 16) = 1;
  }
  else if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x8Fu);
  }
  else
  {
    *((_BYTE *)this + 16) = 0;
  }
  if ( !v8 || v8 >= 0 && v18 < 0 )
    return (unsigned int)v18;
  return (unsigned int)v8;
}
