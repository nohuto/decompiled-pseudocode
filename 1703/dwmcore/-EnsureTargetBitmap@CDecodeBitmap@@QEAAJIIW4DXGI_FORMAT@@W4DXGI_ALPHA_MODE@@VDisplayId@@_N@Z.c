/*
 * XREFs of ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1801B75D8
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B73E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180023B5C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x180047224 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z @ 0x180047400 (-SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800474A8 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDecodeBitmap::EnsureTargetBitmap(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  unsigned int v7; // edi
  __int64 v9; // rcx
  int v13; // eax
  int RenderTargetBitmap; // eax
  int v15; // eax
  struct _LUID v17; // [rsp+48h] [rbp-69h]
  struct IRenderTargetBitmap *v18; // [rsp+80h] [rbp-31h] BYREF
  __int64 v19; // [rsp+88h] [rbp-29h]
  int v20[2]; // [rsp+90h] [rbp-21h] BYREF
  int v21; // [rsp+98h] [rbp-19h]
  __int64 v22[2]; // [rsp+A0h] [rbp-11h] BYREF

  v7 = 0;
  v18 = 0LL;
  v9 = *(_QWORD *)(a1 + 128);
  if ( v9
    && *(_DWORD *)(a1 + 216) == a2
    && *(_DWORD *)(a1 + 220) == a3
    && *(_DWORD *)(a1 + 224) == a4
    && *(_BYTE *)(a1 + 228) == a7 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 152LL))(v9, 3LL);
    CRenderTargetBitmap::SetDisplayId(a1);
  }
  else
  {
    v19 = 1LL;
    v13 = PixelFormatInfoFromDXGIFormatAndAlphaMode(a4, DXGI_ALPHA_MODE_IGNORE, (struct PixelFormatInfo *)v22);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x6Au);
    }
    else
    {
      CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)a1);
      *(_DWORD *)(a1 + 216) = 0;
      *(_DWORD *)(a1 + 220) = 0;
      *(_QWORD *)v20 = "DWM Rendertarget (DecodeBitmap)";
      *(_BYTE *)(a1 + 229) = 0;
      v17 = *(struct _LUID *)(a1 + 208);
      v21 = 31;
      RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                             (__int64)&qword_18023E818,
                             (__int64)v20,
                             a2,
                             a3,
                             v19,
                             0,
                             (struct PixelFormatInfo *)v22,
                             0,
                             (struct _GUID *)(a1 + 32),
                             v17,
                             a6,
                             a7,
                             0,
                             1,
                             (void **)&v18);
      v7 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x83u);
      }
      else
      {
        v15 = CRenderTargetBitmap::Initialize(
                (CRenderTargetBitmap *)a1,
                (__int64 (__fastcall ***)(struct IRenderTargetBitmap *, GUID *, CHwTextureRenderTarget **))v18);
        v7 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x87u);
        }
        else
        {
          *(_DWORD *)(a1 + 216) = a2;
          *(_DWORD *)(a1 + 220) = a3;
          *(_DWORD *)(a1 + 224) = a4;
          *(_BYTE *)(a1 + 228) = a7;
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v18);
  return v7;
}
