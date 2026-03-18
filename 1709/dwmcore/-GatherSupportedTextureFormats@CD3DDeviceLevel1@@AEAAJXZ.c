/*
 * XREFs of ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ @ 0x180020AAC
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180020D0C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NW4DXGI_FORMAT@@@Z @ 0x180020964 (-CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GatherSupportedTextureFormats(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  char v4; // si
  int v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, 61LL) )
    *((_DWORD *)this + 201) = 61;
  *((_DWORD *)this + 202) = CD3DDeviceLevel1::CheckTextureFormatSupported(this, 65LL) != 0 ? 65 : 87;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, 28LL) )
  {
    v7 = 804;
    goto LABEL_29;
  }
  *((_DWORD *)this + 203) = 28;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, 87LL) )
  {
    v7 = 814;
    goto LABEL_29;
  }
  *((_DWORD *)this + 205) = 87;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, 88LL) )
  {
    v7 = 833;
LABEL_29:
    v1 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292288, v7);
    return v1;
  }
  v3 = *((_QWORD *)this + 81);
  *((_DWORD *)this + 206) = 88;
  if ( (*(int (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v3 + 264LL))(v3, 7LL, &v8, 4LL) < 0
    || (v4 = 1, !v8) )
  {
    v4 = 0;
  }
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, 2LL) && v4 )
    *((_DWORD *)this + 210) = 2;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, 10LL) && v4 )
  {
    *((_DWORD *)this + 208) = 10;
    if ( !*((_DWORD *)this + 210) )
      *((_DWORD *)this + 210) = 10;
  }
  else
  {
    v6 = *((_DWORD *)this + 210);
    if ( v6 )
    {
      *((_DWORD *)this + 208) = v6;
    }
    else
    {
      *((_DWORD *)this + 210) = 87;
      *((_DWORD *)this + 208) = 87;
    }
  }
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, 11LL) )
    *((_DWORD *)this + 209) = 11;
  else
    *((_DWORD *)this + 209) = *((_DWORD *)this + 210);
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, 24LL) )
    *((_DWORD *)this + 207) = 24;
  else
    *((_DWORD *)this + 207) = *((_DWORD *)this + 208);
  return v1;
}
