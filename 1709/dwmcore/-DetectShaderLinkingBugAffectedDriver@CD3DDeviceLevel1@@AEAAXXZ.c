/*
 * XREFs of ?DetectShaderLinkingBugAffectedDriver@CD3DDeviceLevel1@@AEAAXXZ @ 0x180020C90
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180020D0C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z @ 0x1800BD8A0 (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBDPEAPEAUGpuId@1@PEAI@Z.c)
 */

void __fastcall CD3DDeviceLevel1::DetectShaderLinkingBugAffectedDriver(CD3DDeviceLevel1 *this)
{
  __int64 v1; // rax
  int v3; // esi
  int v4; // edi
  struct CCommonRegistryData::GpuId *v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  _WORD *v8; // r8
  char v9; // dl
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF
  struct CCommonRegistryData::GpuId *v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 89);
  v3 = *(_DWORD *)(v1 + 300);
  v4 = *(_DWORD *)(v1 + 296);
  v5 = CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds;
  if ( CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds )
  {
    v6 = CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds;
  }
  else
  {
    if ( CCommonRegistryData::ParseGpuIdListKey("ShaderLinkingGPUBlacklist", &v11, &v10) )
    {
      v5 = v11;
      v6 = v10;
    }
    else
    {
      v5 = (struct CCommonRegistryData::GpuId *)&unk_18021B414;
      v6 = 0;
    }
    CCommonRegistryData::m_rgwShaderLinkingBlacklistedGpuIds = v5;
    CCommonRegistryData::m_cShaderLinkingBlacklistedGpuIds = v6;
  }
  v7 = 0;
  if ( v6 )
  {
    v8 = (_WORD *)((char *)v5 + 2);
    v9 = 1;
    while ( v4 != (unsigned __int16)*(v8 - 1) || ((unsigned __int16)v3 & v8[1]) != *v8 )
    {
      ++v7;
      v8 += 3;
      if ( v7 >= v6 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v9 = 0;
  }
  *((_BYTE *)this + 644) = v9;
}
