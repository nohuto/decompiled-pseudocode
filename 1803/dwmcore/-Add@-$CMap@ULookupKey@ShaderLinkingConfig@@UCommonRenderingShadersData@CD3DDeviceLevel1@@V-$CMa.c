/*
 * XREFs of ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDeviceLevel1@@@Z @ 0x1800D5E84
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x180074CF0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800D5F20 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ??0CommonRenderingShadersData@CD3DDeviceLevel1@@QEAA@AEBU01@@Z @ 0x1800D5F9C (--0CommonRenderingShadersData@CD3DDeviceLevel1@@QEAA@AEBU01@@Z.c)
 */

__int64 __fastcall CMap<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData>>::Add(
        void **a1,
        _OWORD *a2,
        const struct CD3DDeviceLevel1::CommonRenderingShadersData *a3)
{
  char *v6; // rax
  char *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  char *v10; // r8
  __int64 v11; // rdx
  char *v12; // r8
  CD3DDeviceLevel1::CommonRenderingShadersData *v13; // rcx

  v6 = (char *)ReallocHeap(*a1, 16LL * (*((_DWORD *)a1 + 4) + 1));
  if ( !v6 )
    return 0LL;
  v7 = (char *)a1[1];
  *a1 = v6;
  v8 = (char *)ReallocHeap(v7, 16LL * (*((_DWORD *)a1 + 4) + 1));
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = (char *)*a1;
  v11 = 16LL * *((int *)a1 + 4);
  a1[1] = v8;
  v12 = &v10[v11];
  if ( v12 )
  {
    *(_OWORD *)v12 = *a2;
    v9 = (char *)a1[1];
  }
  v13 = (CD3DDeviceLevel1::CommonRenderingShadersData *)&v9[v11];
  if ( v13 )
    CD3DDeviceLevel1::CommonRenderingShadersData::CommonRenderingShadersData(v13, a3);
  ++*((_DWORD *)a1 + 4);
  return 1LL;
}
