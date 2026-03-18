/*
 * XREFs of ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800C76D4
 * Callers:
 *     ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0 (-GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@.c)
 * Callees:
 *     GetInputs @ 0x1800C7760 (GetInputs.c)
 */

__int64 __fastcall CommonRenderingShaderBody::GetShaderLinkingBody(__int64 a1, int a2, char a3)
{
  __int64 v3; // r10
  void *v4; // rax
  __int64 Inputs; // rax
  int v6; // r11d
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 8) = 0;
  v3 = a1;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !a3 )
  {
    v4 = &unk_18020C0C0;
    goto LABEL_4;
  }
  if ( a3 == 1 )
  {
    v4 = &unk_1801EF5C0;
LABEL_4:
    *(_QWORD *)(a1 + 16) = v4;
    *(_DWORD *)(a1 + 24) = 3106;
    *(_BYTE *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = off_1801CC830[a2];
    Inputs = GetInputs(v8);
    *(_DWORD *)(v3 + 8) = *(_DWORD *)(Inputs + 8);
    *(_QWORD *)v3 = *(_QWORD *)Inputs;
    *(_DWORD *)(v3 + 48) = v6;
  }
  return v3;
}
