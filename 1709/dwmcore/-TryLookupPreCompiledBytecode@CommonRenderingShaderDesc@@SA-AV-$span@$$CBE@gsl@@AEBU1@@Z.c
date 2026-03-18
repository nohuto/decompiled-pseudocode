/*
 * XREFs of ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE@gsl@@AEBU1@@Z @ 0x1801D57E0
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(_QWORD *a1, __int64 a2)
{
  int v2; // edx
  int v3; // edx

  if ( *(_DWORD *)(a2 + 16) > 1u || *(_DWORD *)(a2 + 32) > 1u || *(_DWORD *)(a2 + 40) != -1 || *(_BYTE *)(a2 + 44) )
    goto LABEL_11;
  v2 = *(_DWORD *)a2 - 1;
  if ( !v2 )
  {
    a1[1] = 800LL;
    *a1 = &unk_18021CE90;
    return a1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    a1[1] = 824LL;
    *a1 = &unk_18021D510;
    return a1;
  }
  if ( v3 != 3 )
  {
LABEL_11:
    a1[1] = 0LL;
    *a1 = 0LL;
    return a1;
  }
  a1[1] = 856LL;
  *a1 = &unk_18021D1B0;
  return a1;
}
