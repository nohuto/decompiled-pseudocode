/*
 * XREFs of ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801AB510
 * Callers:
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014D868 (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z @ 0x1801AB470 (-EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rdi
  signed int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax

  v4 = a2;
  v6 = CSurfaceShaderComposer::EnsureSurfaceShader(a1, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x172u);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 8 * v4);
    if ( v8 )
    {
      *a3 = v8;
    }
    else
    {
      v7 = -2005270524;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x887A0004, 0x178u);
    }
  }
  return v7;
}
