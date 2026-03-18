/*
 * XREFs of ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE@gsl@@I@Z @ 0x1801AB988
 * Callers:
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18014D378 (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18014D68C (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillXBRBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18014D77C (-FillXBRBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x1801ABA58 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18007ECD0 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE@gsl@@@Z @ 0x1801B422C (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE@gsl@@@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::SetScratchConstantBuffer(__int64 a1, __int128 *a2, enum D3D11_USAGE a3)
{
  UINT v3; // ebp
  struct CD3DConstantBuffer **v4; // rbx
  CMILPoolResource *v7; // rcx
  signed int v9; // eax
  unsigned int v10; // ebx
  CMILPoolResource *v11; // rcx
  signed int v12; // eax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a2 + 2);
  v4 = (struct CD3DConstantBuffer **)(a1 + 56);
  v7 = *(CMILPoolResource **)(a1 + 56);
  if ( !v7 )
  {
LABEL_6:
    v11 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      CMILPoolResource::Release(v11);
    }
    v12 = CD3DConstantBuffer::Create(*(struct CD3DDeviceLevel1 **)(a1 + 72), v3, a3, *(const void **)a2, v4);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x195u);
      return v10;
    }
    goto LABEL_9;
  }
  if ( *((_DWORD *)v7 + 32) < v3 )
  {
    *v4 = 0LL;
    CMILPoolResource::Release(v7);
    goto LABEL_6;
  }
  v14 = *a2;
  v9 = CD3DConstantBuffer::SetData(v7, &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 64) = a3;
    return v10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x199u);
  return v10;
}
