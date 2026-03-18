/*
 * XREFs of ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007C740
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18007C9B0 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x1801F0EF0 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180042A20 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x1800466C0 (-GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x18007B958 (-CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18007C600 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18007CBA0 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18007FE88 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(
        CSwapChainBase **a1,
        unsigned int a2,
        char a3)
{
  int v3; // eax
  bool (__fastcall *v7)(CHwFullScreenRenderTarget *); // rax
  bool v8; // al
  CSwapChainBase *v9; // rax
  unsigned int v10; // edi
  CD3DSurface *v12; // rcx
  CSwapChainBase **v13; // rcx
  __int64 (__fastcall *v14)(CSwapChainBase **, struct CD3DSurface **); // rax
  int LogicalBackBuffer; // eax
  CD3DSurface *v16; // rcx
  __int64 (__fastcall *v17)(CSwapChainBase **, _QWORD, _QWORD, CD3DSurface **); // rax
  int FrontBufferSurface; // eax
  unsigned int RectangleCount; // edi
  unsigned int v20; // esi
  unsigned int v21; // r14d
  FastRegion::Internal::CRgnData **v22; // r10
  unsigned int v23; // eax
  unsigned int v24; // r15d
  __int64 (__fastcall *v25)(CD3DSurface *); // rax
  __int64 (__fastcall *v26)(CD3DSurface *); // rax
  __int64 v27; // rdx
  int v28; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  CD3DSurface *v30; // [rsp+70h] [rbp+40h] BYREF
  CD3DSurface *v31; // [rsp+88h] [rbp+58h] BYREF

  v3 = *((_DWORD *)a1 + 85);
  v31 = 0LL;
  v30 = 0LL;
  if ( (v3 & 0x408) == 0x408 )
  {
    v7 = (bool (__fastcall *)(CHwFullScreenRenderTarget *))*((_QWORD *)*a1 + 39);
    v8 = v7 == CHwFullScreenRenderTarget::IsInDirectFlip
       ? CHwFullScreenRenderTarget::IsInDirectFlip((CHwFullScreenRenderTarget *)a1)
       : v7((CHwFullScreenRenderTarget *)a1);
    if ( !v8 && *((_DWORD *)a1 + 74) > 1u && !*((_BYTE *)a1 + 416) && (*(_DWORD *)a1[53] || *(_DWORD *)a1[62]) )
    {
      v12 = v31;
      v31 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(CD3DSurface *))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = a1 + 27;
      v14 = (__int64 (__fastcall *)(CSwapChainBase **, struct CD3DSurface **))*((_QWORD *)a1[27] + 67);
      if ( v14 == CHwDisplayRenderTarget::GetLogicalBackBuffer )
        LogicalBackBuffer = CHwDisplayRenderTarget::GetLogicalBackBuffer(v13, &v31);
      else
        LogicalBackBuffer = v14(v13, &v31);
      v10 = LogicalBackBuffer;
      if ( LogicalBackBuffer < 0 )
      {
        v27 = 606LL;
      }
      else
      {
        v16 = v30;
        v30 = 0LL;
        if ( v16 )
          (*(void (__fastcall **)(CD3DSurface *))(*(_QWORD *)v16 + 8LL))(v16);
        v17 = (__int64 (__fastcall *)(CSwapChainBase **, _QWORD, _QWORD, CD3DSurface **))*((_QWORD *)*a1 + 34);
        if ( (char *)v17 == (char *)CHwFullScreenRenderTarget::GetFrontBufferSurface )
          FrontBufferSurface = CHwFullScreenRenderTarget::GetFrontBufferSurface(a1, a2, 0LL, &v30);
        else
          FrontBufferSurface = v17(a1, a2, 0LL, &v30);
        v10 = FrontBufferSurface;
        if ( FrontBufferSurface >= 0 )
        {
          if ( g_LockAndReadCopyOfSwapChainBuffers )
            DebugInspectTexture(*((struct ID3D11Texture2D **)v30 + 16), 0);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start);
          RectangleCount = 0;
          v20 = 0;
          if ( *(_DWORD *)a1[53] )
          {
            RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(a1 + 53));
            v20 = CHwFullScreenRenderTarget::CopySurfaceRegionAndCountPixels(
                    (CHwFullScreenRenderTarget *)a1,
                    v30,
                    a1 + 53,
                    v31);
          }
          if ( *((_DWORD *)a1 + 74) == 3 && *(_DWORD *)a1[62] )
          {
            v21 = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(a1 + 53));
            v23 = CHwFullScreenRenderTarget::CopySurfaceRegionAndCountPixels(
                    (CHwFullScreenRenderTarget *)a1,
                    v30,
                    v22,
                    v31);
            v24 = v23;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              McTemplateU0qq(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFERDELTAEVENT,
                v21,
                v23);
            RectangleCount += v21;
            v20 += v24;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0qq(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
              RectangleCount,
              v20);
          if ( g_LockAndReadCopyOfSwapChainBuffers )
            DebugInspectTexture(*((struct ID3D11Texture2D **)v31 + 16), 0);
          goto LABEL_9;
        }
        v27 = 609LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
        (const char *)v10,
        v28);
      goto LABEL_14;
    }
  }
LABEL_9:
  if ( a3 )
  {
    if ( *((_DWORD *)a1 + 74) == 3 )
      v9 = a1[62];
    else
      v9 = a1[53];
    *(_DWORD *)v9 = 0;
  }
  v10 = 0;
LABEL_14:
  if ( v30 )
  {
    v25 = *(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)v30 + 8LL);
    if ( v25 == CD3DSurface::Release )
      CD3DSurface::Release(v30);
    else
      v25(v30);
  }
  if ( v31 )
  {
    v26 = *(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)v31 + 8LL);
    if ( v26 == CD3DSurface::Release )
      CD3DSurface::Release(v31);
    else
      v26(v31);
  }
  return v10;
}
