/*
 * XREFs of ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0
 * Callers:
 *     ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x180061C44 (-InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x1801F31D0 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180042A20 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180046530 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18007C480 (-RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ.c)
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18007C9B0 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     ?SupportsMoveOptimization@CDWMSwapChain@@UEBA_NXZ @ 0x18007CC10 (-SupportsMoveOptimization@CDWMSwapChain@@UEBA_NXZ.c)
 *     ?GetLogicalBackBufferIndex@CDWMSwapChain@@UEBAII@Z @ 0x18007CC30 (-GetLogicalBackBufferIndex@CDWMSwapChain@@UEBAII@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D020 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x180088F48 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800C5F2C (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x1800D7708 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800D7B74 (-TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800D7EC0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D8378 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pp @ 0x18014AD40 (McTemplateU0pp.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801DE8D0 (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Present(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        char a3,
        const struct RenderTargetPresentParameters *a4)
{
  char *v4; // rsi
  char v7; // bl
  int v8; // r13d
  __int64 (__fastcall *v9)(CHwDisplayRenderTarget *, char, bool *, unsigned int *); // rax
  CHwDisplayRenderTarget *v10; // rcx
  int ShouldPresent; // eax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(CHwFullScreenRenderTarget *__hidden); // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(CHwDisplayRenderTarget *, char, bool *, unsigned int *); // rax
  int v17; // eax
  signed int v18; // ebx
  unsigned int v19; // r15d
  const struct CRegion *v20; // r12
  __int64 v21; // r14
  _DWORD *v22; // rdi
  bool (__fastcall *v23)(CDWMSwapChain *__hidden); // rax
  bool v24; // al
  __int64 (__usercall *v25)@<rax>(CDWMSwapChain *__hidden@<rcx>, const struct CRegion *@<rdx>, unsigned int@<r8d>, unsigned int@<r9d>, const struct RenderTargetPresentParameters *); // rax
  signed int v26; // eax
  bool (__fastcall *v27)(CDWMSwapChain *__hidden); // rax
  bool v28; // al
  __int64 v29; // rcx
  int v30; // eax
  bool v31; // zf
  int v32; // edi
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  int v38; // eax
  void (__fastcall *v39)(CHwFullScreenRenderTarget *__hidden); // rax
  __int64 v40; // rcx
  CD3DSurface *v41; // rcx
  void (*v42)(void); // rax
  CDWMSwapChain *v43; // rbx
  unsigned int (__fastcall *v44)(CDWMSwapChain *__hidden, unsigned int); // rax
  unsigned int LogicalBackBufferIndex; // eax
  void (__fastcall ***v46)(_QWORD); // rcx
  int v48; // eax
  bool v49; // cl
  char IsHardwareProtectionDisabled; // al
  char v51; // cl
  __int64 v52; // rcx
  int v53; // eax
  bool v54; // cl
  int v55; // eax
  int v56; // [rsp+20h] [rbp-30h]
  bool v57[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v58; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v59; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v60; // [rsp+3Ch] [rbp-14h] BYREF
  int v61; // [rsp+40h] [rbp-10h] BYREF
  __int64 v62; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  bool v65; // [rsp+98h] [rbp+48h] BYREF
  struct RenderTargetPresentParameters *v66; // [rsp+A8h] [rbp+58h]

  v66 = a4;
  v4 = (char *)this - 216;
  v7 = a2;
  v8 = 0;
  v9 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, char, bool *, unsigned int *))(*((_QWORD *)this - 27) + 280LL);
  v10 = (CHwFullScreenRenderTarget *)((char *)this - 216);
  if ( v9 == CHwDisplayRenderTarget::ShouldPresent )
    ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(v10, a2, v57, &v59);
  else
    ShouldPresent = v9(v10, a2, v57, &v59);
  if ( ShouldPresent >= 0 && v57[0] && (v59 & 2) == 0 )
  {
    v13 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)this + 256LL);
    v14 = v13 == CHwFullScreenRenderTarget::CopyFrontToBackBuffer
        ? CHwFullScreenRenderTarget::CopyFrontToBackBuffer(this)
        : v13(this);
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x8Bu);
  }
  v15 = *(_QWORD *)v4;
  v65 = 0;
  v58 = 0;
  LOBYTE(v12) = v7;
  v16 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, char, bool *, unsigned int *))(v15 + 280);
  if ( v16 == CHwDisplayRenderTarget::ShouldPresent )
    v17 = CHwDisplayRenderTarget::ShouldPresent((CHwDisplayRenderTarget *)v4, v7, &v65, &v58);
  else
    v17 = v16((CHwDisplayRenderTarget *)v4, v12, &v65, &v58);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1C0u);
LABEL_52:
    if ( v65 && (v58 & 2) == 0 )
    {
      v39 = *(void (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)v4 + 304LL);
      if ( v39 == CHwFullScreenRenderTarget::RotateFrameInvalidRegions )
        CHwFullScreenRenderTarget::RotateFrameInvalidRegions((CHwFullScreenRenderTarget *)v4);
      else
        v39((CHwFullScreenRenderTarget *)v4);
    }
    goto LABEL_56;
  }
  v19 = v58;
  if ( a3 )
  {
    v19 = v58 | 0x80;
    v58 |= 0x80u;
  }
  if ( v65 )
  {
    v20 = (CHwFullScreenRenderTarget *)((char *)this + 128);
    v21 = *((_QWORD *)v4 + 28);
    v22 = (_DWORD *)*((_QWORD *)v4 + 31);
    v60 = *((_DWORD *)v4 + 84);
    v18 = *(_DWORD *)(v21 + 888);
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC41u);
    }
    else
    {
      if ( g_fForceDeviceLost && rand() >= 32390 )
      {
        v62 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
        (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v21 + 608))(
          *(_QWORD *)(v21 + 608),
          &GUID_b898d4fd_b5b3_4ffc_8694_0259864ffcf8,
          &v62);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 264LL))(v62, 2289696800LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
      }
      v23 = *(bool (__fastcall **)(CDWMSwapChain *__hidden))(*(_QWORD *)v22 + 80LL);
      if ( v23 == CDWMSwapChain::SupportsMoveOptimization )
        v24 = CDWMSwapChain::SupportsMoveOptimization((CDWMSwapChain *)v22);
      else
        v24 = v23((CDWMSwapChain *)v22);
      if ( v24 )
      {
        FastRegion::CRegion::Copy((FastRegion::CRegion *)(v22 + 68), v20);
        if ( CSwapChainBase::TryToOrderMetaData((CSwapChainBase *)v22) )
          FastRegion::CRegion::Subtract((FastRegion::CRegion *)(v22 + 50), v20);
      }
      v25 = *(__int64 (__usercall **)@<rax>(CDWMSwapChain *__hidden@<rcx>, const struct CRegion *@<rdx>, unsigned int@<r8d>, unsigned int@<r9d>, const struct RenderTargetPresentParameters *))(*(_QWORD *)v22 + 296LL);
      v56 = (int)v66;
      if ( v25 == CDWMSwapChain::PresentInternal )
        v26 = CDWMSwapChain::PresentInternal((CDWMSwapChain *)v22, v20, v60, v19, v66);
      else
        v26 = ((__int64 (__fastcall *)(_DWORD *, const struct CRegion *, _QWORD, _QWORD))v25)(v22, v20, v60, v19);
      v18 = v26;
      **((_DWORD **)v22 + 25) = 0;
      **((_DWORD **)v22 + 34) = 0;
      v22[92] = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)(v22 + 86), 0x30u);
      v27 = *(bool (__fastcall **)(CDWMSwapChain *__hidden))(*(_QWORD *)v22 + 80LL);
      if ( v27 == CDWMSwapChain::SupportsMoveOptimization )
        v28 = CDWMSwapChain::SupportsMoveOptimization((CDWMSwapChain *)v22);
      else
        v28 = v27((CDWMSwapChain *)v22);
      if ( v28 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0pp(v29, &EVTDESC_REMOTEAPP_METADATA_STATS, v22 + 86, (unsigned int)v22[92]);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x91,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\swapchainbase.cpp",
          (const char *)(unsigned int)v18,
          v56);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC4Fu);
      }
      else
      {
        *(_BYTE *)(v21 + 1052) = 0;
      }
    }
    if ( !*(_DWORD *)(v21 + 888) && (v18 == -2005532292 || v18 == -2147024882 || v18 == -2005270523) )
    {
      if ( CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
             (CD3DDeviceManager *)&g_D3DDeviceManager,
             *(struct _LUID *)(v21 + 728)) )
      {
        if ( v18 == -2005270523 )
        {
          v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 648) + 312LL))(*(_QWORD *)(v21 + 648));
          *(_DWORD *)(v21 + 888) = -2003304307;
          v49 = v48 == -2005270480;
        }
        else
        {
          v49 = 1;
        }
        if ( v49 )
        {
          CD3DDeviceManager::IsHardwareProtectionDisabled();
          CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
          IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
          if ( v51 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 1LL);
        }
      }
    }
    v30 = *(_DWORD *)(v21 + 888);
    if ( v30 )
    {
      v18 = *(_DWORD *)(v21 + 888);
    }
    else
    {
      v31 = (unsigned __int8)TranslateDXGIorD3DErrorInContext(v18, 1, &v60) == 0;
      v30 = 0;
      if ( !v31 )
        v18 = v60;
      if ( v18 == -2003304307 )
      {
        *(_DWORD *)(v21 + 888) = -2003304307;
        v30 = -2003304307;
      }
    }
    if ( v30 == -2003304307
      && !*(_BYTE *)(v21 + 1048)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 69) + 112LL))(*((_QWORD *)g_pComposition
                                                                                                  + 69)) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v21 + 480), 1u);
      CD3DDeviceLevel1::ReleaseResourcesForDisplayChange((CD3DDeviceLevel1 *)v21);
      v52 = *(_QWORD *)(v21 + 488);
      *(_BYTE *)(v21 + 1048) = 1;
      if ( v52 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 8LL))(v52, v21 + 472);
      CD2DContext::DestroyDeviceResources((CD2DContext *)v21);
      CD3DResourceManager::DestroyAllResources((CD3DResourceManager *)(v21 + 896));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 656) + 888LL))(*(_QWORD *)(v21 + 656));
      CMILPoolResource::Release((CMILPoolResource *)(v21 + 472));
    }
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x398u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1DAu);
    }
    else if ( (v58 & 1) == 0 )
    {
      v32 = 0;
      v33 = *((_QWORD *)this + 1);
      v34 = *((_QWORD *)g_pComposition + 48);
      if ( v34 != *(_QWORD *)(v33 + 1040) )
      {
        v35 = *(_QWORD *)(v33 + 184);
        v36 = *((_QWORD *)g_pComposition + 48);
        v37 = *(_QWORD *)(v33 + 624);
        *(_BYTE *)(v33 + 1052) = 0;
        v38 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v35 + 152LL))(v35, v37, v36);
        v32 = v38;
        if ( v38 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xEBBu);
        *(_QWORD *)(v33 + 1040) = v34;
      }
      if ( !*(_DWORD *)(v33 + 888) )
      {
        if ( v32 != -2005532292 && v32 != -2147024882 && v32 != -2005270523
          || !CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                *(struct _LUID *)(v33 + 728)) )
        {
          goto LABEL_116;
        }
        if ( v32 == -2005270523 )
        {
          v53 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 648) + 312LL))(*(_QWORD *)(v33 + 648));
          *(_DWORD *)(v33 + 888) = -2003304307;
          v54 = v53 == -2005270480;
          v55 = -2003304307;
        }
        else
        {
          v54 = 1;
          v55 = 0;
        }
        if ( v54 )
        {
          CD3DDeviceManager::TempDisableHardwareProtection();
          v55 = *(_DWORD *)(v33 + 888);
        }
        if ( !v55 )
        {
LABEL_116:
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v32, 0, &v61) )
            v32 = v61;
          if ( v32 == -2003304307 )
            *(_DWORD *)(v33 + 888) = -2003304307;
        }
      }
    }
    goto LABEL_52;
  }
LABEL_56:
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x9Fu);
  if ( !v8 || v8 >= 0 && v18 < 0 )
    v8 = v18;
  v40 = *((_QWORD *)v4 + 31);
  if ( v40 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40) )
  {
    v41 = (CD3DSurface *)*((_QWORD *)v4 + 25);
    if ( v41 )
    {
      v42 = *(void (**)(void))(*(_QWORD *)v41 + 8LL);
      if ( (char *)v42 == (char *)CD3DSurface::Release )
        CD3DSurface::Release(v41);
      else
        v42();
      *((_QWORD *)v4 + 25) = 0LL;
    }
    v43 = (CDWMSwapChain *)*((_QWORD *)v4 + 31);
    v44 = *(unsigned int (__fastcall **)(CDWMSwapChain *__hidden, unsigned int))(*(_QWORD *)v43 + 336LL);
    if ( v44 == CDWMSwapChain::GetLogicalBackBufferIndex )
      LogicalBackBufferIndex = CDWMSwapChain::GetLogicalBackBufferIndex(v43, 0);
    else
      LogicalBackBufferIndex = v44(v43, 0);
    v46 = *(void (__fastcall ****)(_QWORD))(*((_QWORD *)v43 + 48) + 8LL * LogicalBackBufferIndex);
    *((_QWORD *)v4 + 25) = v46;
    (**v46)(v46);
  }
  return (unsigned int)v8;
}
