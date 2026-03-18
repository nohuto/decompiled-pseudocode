/*
 * XREFs of ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075918
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180075F10 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NW4DXGI_FORMAT@@@Z @ 0x180075A94 (-CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GatherSupportedTextureFormats(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  char v4; // si
  int v5; // esi
  int v6; // esi
  int v8; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R8_UNORM) )
    *((_DWORD *)this + 201) = 61;
  *((_DWORD *)this + 202) = CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_A8_UNORM) ? 65 : 87;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R8G8B8A8_UNORM) )
  {
    v9 = 824;
    goto LABEL_28;
  }
  *((_DWORD *)this + 203) = 28;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8A8_UNORM) )
  {
    v9 = 834;
    goto LABEL_28;
  }
  *((_DWORD *)this + 205) = 87;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8X8_UNORM) )
  {
    v9 = 853;
LABEL_28:
    v1 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292288, v9);
    return v1;
  }
  v3 = *((_QWORD *)this + 81);
  *((_DWORD *)this + 206) = 88;
  if ( (*(int (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v3 + 264LL))(v3, 7LL, &v10, 4LL) < 0
    || (v4 = 1, !v10) )
  {
    v4 = 0;
  }
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R32G32B32A32_FLOAT) && v4 )
    *((_DWORD *)this + 210) = 2;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_FLOAT) && v4 )
  {
    *((_DWORD *)this + 208) = 10;
    if ( !*((_DWORD *)this + 210) )
      *((_DWORD *)this + 210) = 10;
  }
  else
  {
    v8 = *((_DWORD *)this + 210);
    if ( v8 )
    {
      *((_DWORD *)this + 208) = v8;
    }
    else
    {
      *((_DWORD *)this + 210) = 87;
      *((_DWORD *)this + 208) = 87;
    }
  }
  v5 = 11;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_UNORM) )
    v5 = *((_DWORD *)this + 210);
  *((_DWORD *)this + 209) = v5;
  v6 = 24;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(this, DXGI_FORMAT_R10G10B10A2_UNORM) )
    v6 = *((_DWORD *)this + 208);
  *((_DWORD *)this + 207) = v6;
  return v1;
}
