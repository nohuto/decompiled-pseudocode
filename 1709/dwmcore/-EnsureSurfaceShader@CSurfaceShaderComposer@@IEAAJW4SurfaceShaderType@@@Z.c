/*
 * XREFs of ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z @ 0x1801AB470
 * Callers:
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801AB510 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x180020914 (-CreatePixelShader@CD3DDeviceLevel1@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::EnsureSurfaceShader(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rbp
  __int64 v5; // rsi
  struct ID3D11ClassLinkage *v6; // r9
  signed int PixelShader; // eax

  v2 = 0;
  v4 = (__int64 *)(a1 + 8LL * a2);
  v5 = 3LL * a2;
  if ( !*v4 && *(_DWORD *)(*(_QWORD *)(a1 + 72) + 756LL) >= *((_DWORD *)&off_18026D6D0 + 6 * a2 + 5) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v4);
    PixelShader = CD3DDeviceLevel1::CreatePixelShader(
                    *(CD3DDeviceLevel1 **)(a1 + 72),
                    *(&off_18026D6D0 + v5),
                    (__int64)*(&off_18026D6D0 + v5 + 1),
                    v6,
                    (struct ID3D11PixelShader **)v4);
    v2 = PixelShader;
    if ( PixelShader < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PixelShader, 0x1B2u);
  }
  return v2;
}
