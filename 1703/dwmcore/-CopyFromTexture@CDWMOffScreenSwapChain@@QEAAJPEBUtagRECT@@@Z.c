/*
 * XREFs of ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800CEC60
 * Callers:
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800CE8F4 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x1800778A8 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800778C0 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800793BC (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@0@Z @ 0x1800CDE40 (-CopyResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@0@Z.c)
 *     ?CopyFromSurfaceToMem@@YAXPEAEIIPEBUtagRECT@@II0@Z @ 0x1800CF004 (-CopyFromSurfaceToMem@@YAXPEAEIIPEBUtagRECT@@II0@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::CopyFromTexture(CDWMOffScreenSwapChain *this, const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  struct ID3D11Texture2D **v5; // rsi
  CD3DDeviceLevel1 *v6; // rcx
  __int128 v7; // xmm1
  int Texture; // eax
  int v9; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v12; // [rsp+20h] [rbp-49h]
  __int128 v13; // [rsp+40h] [rbp-29h]
  D3D11_MAPPED_SUBRESOURCE v14; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v15[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  __int128 v18; // [rsp+90h] [rbp+27h]

  v2 = 0;
  if ( *((_QWORD *)this + 49) )
  {
    v5 = (struct ID3D11Texture2D **)((char *)this + 400);
    if ( *((_QWORD *)this + 50) )
      goto LABEL_4;
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 37) + 80LL))(
      *((_QWORD *)this + 37),
      (char *)this + 408);
    *((_DWORD *)this + 110) = 0;
    *((_DWORD *)this + 112) = 0;
    v6 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 38);
    *((_DWORD *)this + 109) = 3;
    *((_DWORD *)this + 111) = 0x20000;
    v7 = *(_OWORD *)((char *)this + 424);
    *(_QWORD *)&v13 = "DWM Offscreen SwapChain Readback";
    DWORD2(v13) = 32;
    v17 = *((_DWORD *)this + 112);
    v15[1] = v7;
    v18 = v13;
    v15[0] = *(_OWORD *)((char *)this + 408);
    v16 = *((_QWORD *)this + 55);
    Texture = CD3DDeviceLevel1::CreateTexture(v6, (const struct DWM_TEXTURE2D_DESC *)v15, 0LL, v5);
    v2 = Texture;
    if ( Texture >= 0 )
    {
LABEL_4:
      CD3DDeviceLevel1::CopyResource(
        *((CD3DDeviceLevel1 **)this + 38),
        (struct ID3D11Resource *)*v5,
        *((struct ID3D11Resource **)this + 37));
      v9 = CD3DDeviceLevel1::Map(*((CD3DDeviceLevel1 **)this + 38), (struct ID3D11Resource *)*v5, 0LL, 1LL, v12, &v14);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1A4u);
      }
      else
      {
        PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 106));
        CopyFromSurfaceToMem(
          (unsigned __int8 *)v14.pData,
          PixelFormatSize >> 3,
          v14.RowPitch,
          a2,
          *((_DWORD *)this + 78),
          *((_DWORD *)this + 79),
          *((unsigned __int8 **)this + 49));
        CD3DDeviceLevel1::Unmap(*((CD3DDeviceLevel1 **)this + 38), (struct ID3D11Resource *)*v5);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0x197u);
    }
  }
  return v2;
}
