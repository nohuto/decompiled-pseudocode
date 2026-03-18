/*
 * XREFs of ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$ArrayRef@$$CBE@@AEBU1@@Z @ 0x1801BBA0C
 * Callers:
 *     ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0 (-GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(__int64 a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // edx
  void *v4; // rax

  if ( a2[1] || a2[2] || a2[3] != -1 )
    goto LABEL_11;
  v2 = *a2 - 1;
  if ( !v2 )
  {
    *(_DWORD *)(a1 + 8) = 800;
    v4 = &unk_18020D050;
    goto LABEL_8;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    *(_DWORD *)(a1 + 8) = 824;
    v4 = &unk_18020BD80;
    goto LABEL_8;
  }
  if ( v3 != 3 )
  {
LABEL_11:
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    return a1;
  }
  *(_DWORD *)(a1 + 8) = 856;
  v4 = &unk_18020CCF0;
LABEL_8:
  *(_QWORD *)a1 = v4;
  return a1;
}
