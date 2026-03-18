/*
 * XREFs of ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1801B10F0
 * Callers:
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1801B1BEC (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180020718 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180020730 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180021D30 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CopyFromSurfaceToMem@@YAXPEAEIIAEBUtagRECT@@II0@Z @ 0x1801B1064 (-CopyFromSurfaceToMem@@YAXPEAEIIAEBUtagRECT@@II0@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::CopyFromTexture(CDWMOffScreenSwapChain *this, const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  struct ID3D11Texture2D **v5; // rsi
  CD3DDeviceLevel1 *v6; // rcx
  __int128 v7; // xmm1
  signed int Texture; // eax
  signed int v9; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v12; // [rsp+20h] [rbp-49h]
  __int128 v13; // [rsp+40h] [rbp-29h]
  struct D3D11_MAPPED_SUBRESOURCE v14; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v15[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  __int128 v18; // [rsp+90h] [rbp+27h]

  v2 = 0;
  if ( *((_QWORD *)this + 55) )
  {
    v5 = (struct ID3D11Texture2D **)((char *)this + 448);
    if ( *((_QWORD *)this + 56) )
      goto LABEL_5;
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 52) + 80LL))(
      *((_QWORD *)this + 52),
      (char *)this + 456);
    *((_DWORD *)this + 122) = 0;
    *((_DWORD *)this + 124) = 0;
    v6 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 53);
    *((_DWORD *)this + 121) = 3;
    *((_DWORD *)this + 123) = 0x20000;
    v7 = *(_OWORD *)((char *)this + 472);
    *(_QWORD *)&v13 = "DWM Offscreen SwapChain Readback";
    DWORD2(v13) = 32;
    v17 = *((_DWORD *)this + 124);
    v15[1] = v7;
    v18 = v13;
    v15[0] = *(_OWORD *)((char *)this + 456);
    v16 = *((_QWORD *)this + 61);
    Texture = CD3DDeviceLevel1::CreateTexture(v6, (const struct DWM_TEXTURE2D_DESC *)v15, 0LL, v5);
    v2 = Texture;
    if ( Texture >= 0 )
    {
LABEL_5:
      (*(void (__fastcall **)(_QWORD, struct ID3D11Texture2D *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 53) + 656LL)
                                                                       + 376LL))(
        *(_QWORD *)(*((_QWORD *)this + 53) + 656LL),
        *v5,
        *((_QWORD *)this + 52));
      v9 = CD3DDeviceLevel1::Map(*((CD3DDeviceLevel1 **)this + 53), (struct ID3D11Resource *)*v5, 0LL, 1LL, v12, &v14);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x195u);
      }
      else
      {
        PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 118));
        CopyFromSurfaceToMem(
          (unsigned __int8 *)v14.pData,
          PixelFormatSize >> 3,
          v14.RowPitch,
          a2,
          *((_DWORD *)this + 30),
          *((_DWORD *)this + 31),
          *((unsigned __int8 **)this + 55));
        CD3DDeviceLevel1::Unmap(*((CD3DDeviceLevel1 **)this + 53), (struct ID3D11Resource *)*v5);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Texture, 0x18Bu);
    }
  }
  return v2;
}
