/*
 * XREFs of ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDeviceLevel1@@@Z @ 0x1800C4608
 * Callers:
 *     ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0 (-GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800C4738 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ??0CommonRenderingShadersData@CD3DDeviceLevel1@@QEAA@AEBU01@@Z @ 0x1800C4790 (--0CommonRenderingShadersData@CD3DDeviceLevel1@@QEAA@AEBU01@@Z.c)
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
  __int64 v10; // rdx
  char *v11; // rcx
  CD3DDeviceLevel1::CommonRenderingShadersData *v12; // rcx

  v6 = (char *)ReallocHeap(*a1, 16LL * (*((_DWORD *)a1 + 4) + 1));
  if ( !v6 )
    return 0LL;
  v7 = (char *)a1[1];
  *a1 = v6;
  v8 = (char *)ReallocHeap(v7, 16LL * (*((_DWORD *)a1 + 4) + 1));
  if ( !v8 )
    return 0LL;
  v9 = (char *)*a1;
  v10 = 16LL * *((int *)a1 + 4);
  a1[1] = v8;
  v11 = &v9[v10];
  if ( v11 )
    *(_OWORD *)v11 = *a2;
  v12 = (CD3DDeviceLevel1::CommonRenderingShadersData *)((char *)a1[1] + v10);
  if ( v12 )
    CD3DDeviceLevel1::CommonRenderingShadersData::CommonRenderingShadersData(v12, a3);
  ++*((_DWORD *)a1 + 4);
  return 1LL;
}
