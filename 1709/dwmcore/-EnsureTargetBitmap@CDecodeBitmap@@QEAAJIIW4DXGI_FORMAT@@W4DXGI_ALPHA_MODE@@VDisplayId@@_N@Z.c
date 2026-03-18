/*
 * XREFs of ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1801D4320
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D4154 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF40 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008B158 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18008B778 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x1800C0CCC (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDecodeBitmap::EnsureTargetBitmap(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  unsigned int v7; // edi
  __int64 v9; // rcx
  signed int v13; // eax
  signed int v14; // eax
  signed int v15; // eax
  struct _LUID v17; // [rsp+40h] [rbp-61h]
  struct IRenderTargetBitmap *v18; // [rsp+70h] [rbp-31h] BYREF
  __int64 v19; // [rsp+78h] [rbp-29h]
  const char *v20; // [rsp+80h] [rbp-21h] BYREF
  int v21; // [rsp+88h] [rbp-19h]
  _BYTE v22[16]; // [rsp+90h] [rbp-11h] BYREF

  v7 = 0;
  v18 = 0LL;
  v9 = *(_QWORD *)(a1 + 160);
  if ( v9
    && *(_DWORD *)(a1 + 192) == a2
    && *(_DWORD *)(a1 + 196) == a3
    && *(_DWORD *)(a1 + 200) == a4
    && *(_BYTE *)(a1 + 204) == a7 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 136LL))(v9, 3LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 208LL))(*(_QWORD *)(a1 + 160), a6);
  }
  else
  {
    v19 = 1LL;
    v13 = PixelFormatInfoFromDXGIFormatAndAlphaMode(a4, DXGI_ALPHA_MODE_IGNORE, (struct PixelFormatInfo *)v22);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x58u);
    }
    else
    {
      CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)a1);
      *(_DWORD *)(a1 + 192) = 0;
      *(_DWORD *)(a1 + 196) = 0;
      v20 = "DWM Rendertarget (DecodeBitmap)";
      *(_BYTE *)(a1 + 205) = 0;
      v17 = *(struct _LUID *)(a1 + 184);
      v21 = 31;
      v14 = CD3DDeviceManager::CreateRenderTargetBitmap(
              (__int64)&qword_18026EEE8,
              (__int64)&v20,
              a2,
              a3,
              v19,
              0,
              (__int64)v22,
              0,
              v17,
              a6,
              a7,
              0,
              1,
              &v18);
      v7 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x70u);
      }
      else
      {
        v15 = CRenderTargetBitmap::Initialize(
                (CRenderTargetBitmap *)a1,
                (__int64 (__fastcall ***)(struct IRenderTargetBitmap *, GUID *, CHwTextureRenderTarget **))v18);
        v7 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x74u);
        }
        else
        {
          *(_DWORD *)(a1 + 192) = a2;
          *(_DWORD *)(a1 + 196) = a3;
          *(_DWORD *)(a1 + 200) = a4;
          *(_BYTE *)(a1 + 204) = a7;
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v18);
  return v7;
}
